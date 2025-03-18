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
	wchar_t debugText[48];
	swprintf(
		debugText, sizeof(debugText)/sizeof(wchar_t),
		L"LOWORD(wParam) = %d\nwParam = %d", LOWORD(wParam), HIWORD(wParam)
	);
	MessageBox(hwnd, debugText, L"Debug", MB_OK);
}