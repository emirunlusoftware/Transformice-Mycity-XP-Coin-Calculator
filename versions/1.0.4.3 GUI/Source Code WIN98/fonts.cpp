#include "main.h"





HFONT globalFont, secondaryFont;
void LoadingFonts (HWND hwnd, HDC hdc)
{
	globalFont = CreateFont(
		14.0 * scaleByDPI(),	// Font size
		0,						// Width
		0,						// Orientation
		0,						// Escapement
		FW_NORMAL,				// Bold or thin
		FALSE,					// Italic
		FALSE,					// Underline
		FALSE,					// Strikeout
		DEFAULT_CHARSET,		// Charset
		OUT_DEFAULT_PRECIS,		// The output precision
		CLIP_DEFAULT_PRECIS,	// The clipping precision
		DRAFT_QUALITY,			// Output quality
		DEFAULT_PITCH,			// Pitch
		"Verdana"				// Font name
	);

	secondaryFont = CreateFont(
		12.0 * scaleByDPI(),
		0,
		0,
		0,
		FW_NORMAL,
		FALSE,
		FALSE,
		FALSE,
		DEFAULT_CHARSET,
		OUT_DEFAULT_PRECIS,
		CLIP_DEFAULT_PRECIS,
		DRAFT_QUALITY,
		DEFAULT_PITCH,
		"Verdana"
	);

	SelectObject(hdc, globalFont);
	SetBkMode(hdc, TRANSPARENT);
	SetTextColor(hdc, RGB(255, 255, 255));

	SendMessage(hwnd, WM_SETFONT, (WPARAM)globalFont, TRUE);
	HWND hwndChild = GetWindow(hwnd, GW_CHILD);
	while (hwndChild)
	{
		SendMessage(hwndChild, WM_SETFONT, (WPARAM)globalFont, TRUE);
		hwndChild = GetWindow(hwndChild, GW_HWNDNEXT);
	}
}