#include "main.h"
#include <stdio.h>





float scaleByDPI()
{
	HDC DPIhdc = GetDC(NULL);
	int dpi = GetDeviceCaps(DPIhdc, LOGPIXELSX);
	ReleaseDC(NULL, DPIhdc);

	// DPI'ye göre font boyutunu hesapla
	return (dpi / 96.0f);
}



void debug(HWND hwnd, WPARAM wParam)
{
	char debugText[48];
	sprintf(
		debugText,
		"LOWORD(wParam) = %d\nwParam = %d", LOWORD(wParam), HIWORD(wParam)
	);
	MessageBox(hwnd, debugText, "Debug", MB_OK);
}