#include "main.h"





static HPALETTE hPalette;
static HDC hdcScreen;
static UINT paletteSize;
static int colorBitDepth = 0;


void LowColorDepthSupport(HDC hdc, int paletteBitDepth)
{
	// Palet desteði ekle
	hPalette = NULL;
	hdcScreen = GetDC(NULL);
    
	/*
	• Monitör 8 bit ve altýnda renk derinliði saðlýyorsa
	iþletim sisteminin iþe yaramayan paletine güvenmek yerine
	kendi paletini oluþtur.
	• Böylece görseli daha gerçeðe yakýn renklerle
	ekranda gösterebilirsin.
	*/
	paletteSize = 1 << paletteBitDepth; // Renk derinliðine göre palet boyutu

	LOGPALETTE* pLogPalette = (LOGPALETTE*)malloc(sizeof(LOGPALETTE) + paletteSize * sizeof(PALETTEENTRY));

	if (hdcScreen == NULL || pLogPalette == NULL)
	{
		ReleaseDC(NULL, hdcScreen);
		return;
	}

	pLogPalette->palVersion = 0x300;
	pLogPalette->palNumEntries = (WORD)paletteSize;
	GetSystemPaletteEntries(hdcScreen, 0, paletteSize, pLogPalette->palPalEntry);
	hPalette = CreatePalette(pLogPalette);
	free(pLogPalette);

	if (hPalette)
	{
		SelectPalette(hdc, hPalette, FALSE);
		RealizePalette(hdc);
		DeleteObject(hPalette);
	}
	ReleaseDC(NULL, hdcScreen);
}



void LoadingBackground(HDC hdc)
{
	colorBitDepth = GetDeviceCaps(hdc, BITSPIXEL);
	if (colorBitDepth <= 8)
		LowColorDepthSupport(hdc, colorBitDepth);

	HBITMAP hBackground = (HBITMAP)LoadImage(GetModuleHandle(NULL), MAKEINTRESOURCE(IMG_BACKGROUND), IMAGE_BITMAP, 0, 0, LR_CREATEDIBSECTION);

	if (hBackground)
	{
		HDC hdcMem = CreateCompatibleDC(hdc);
		SelectObject(hdcMem, hBackground);

		BITMAP backgroundBitmap;
		GetObject(hBackground, sizeof(BITMAP), &backgroundBitmap);


		// Draw the Bitmap
		SetStretchBltMode(hdc, MAXSTRETCHBLTMODE);
		StretchBlt(
			hdc,
			0, 0, // Target position (posX, posY)
			static_cast<int>(576 * scaleByDPI()), // Width
			static_cast<int>(432 * scaleByDPI()), // Height
			hdcMem,
			0, 0, // Source position (x, y)
			backgroundBitmap.bmWidth, // Source width
			backgroundBitmap.bmHeight, // Source height
			SRCCOPY
		);

		DeleteDC(hdcMem);
		DeleteObject(hBackground);
	}
}