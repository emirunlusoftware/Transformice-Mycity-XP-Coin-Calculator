#include "main.h"
#include <stdio.h>





SIZE size;
wchar_t formattedText[50];
HWND AddXpText, SubstractXpText, AboutCoinCalcText;


void LoadingTexts(HWND hwnd, HINSTANCE hInstance)
{
	AddXpText = CreateWindow(
		L"BUTTON", calc_en[6],
		WS_TABSTOP | WS_CHILD | WS_BORDER | BS_FLAT | BS_CENTER | BS_AUTORADIOBUTTON,
		235.0 * scaleByDPI(), 245.0 * scaleByDPI(),
		105.0 * scaleByDPI(), 18.0 * scaleByDPI(),
		hwnd, (HMENU)916, NULL, NULL);

	SubstractXpText = CreateWindow(
		L"BUTTON", calc_en[7],
		WS_TABSTOP | WS_CHILD | WS_BORDER | BS_FLAT | BS_CENTER | BS_AUTORADIOBUTTON,
		235.0 * scaleByDPI(), 263.0 * scaleByDPI(),
		105.0 * scaleByDPI(), 18.0 * scaleByDPI(),
		hwnd, (HMENU)917, NULL, NULL);

	AboutCoinCalcText = CreateWindowEx(
		WS_EX_NOPARENTNOTIFY, L"EDIT", dialogs.coin_howto,
		WS_CHILD | WS_VSCROLL | ES_AUTOVSCROLL | ES_READONLY | ES_MULTILINE,
		35.0 * scaleByDPI(), 15.0 * scaleByDPI(),
		506.0 * scaleByDPI(), 330.0 * scaleByDPI(),
		hwnd, (HMENU)931, hInstance, NULL
	);
}



void PageTitles(HDC hdc, int pageTitle)
{
	GetTextExtentPoint32(hdc, dialogs.calc[pageTitle], wcslen(dialogs.calc[pageTitle]), &size);
	TextOut(hdc,
		(WindowDimensions.right - size.cx) / 2,
		16.0 * scaleByDPI(),
		dialogs.calc[pageTitle], wcslen(dialogs.calc[pageTitle]));
}



void TotalXpTexts(HDC hdc)
{
	GetTextExtentPoint32(hdc, dialogs.calc[4], wcslen(dialogs.calc[4]), &size);
	TextOut(hdc,
		(WindowDimensions.right - size.cx) / 2,
		58.0 * scaleByDPI(),
		dialogs.calc[4], wcslen(dialogs.calc[4]));

	GetTextExtentPoint32(hdc, dialogs.calc[5], wcslen(dialogs.calc[5]), &size);
	TextOut(hdc,
		(WindowDimensions.right - size.cx) / 2,
		133.0 * scaleByDPI(),
		dialogs.calc[5], wcslen(dialogs.calc[5]));
}



void FwBwLevelTexts(HWND hwnd)
{
	ShowWindow(AddXpText, 1);
	ShowWindow(SubstractXpText, 1);
}



void DiffLevelTexts(HDC hdc)
{
	TextOut(hdc,
		110.0 * scaleByDPI(),
		59.0 * scaleByDPI(),
		dialogs.calc[8], wcslen(dialogs.calc[8]));

	TextOut(hdc,
		110.0 * scaleByDPI(),
		133.0 * scaleByDPI(),
		dialogs.calc[9], wcslen(dialogs.calc[9]));

	TextOut(hdc,
		360.0 * scaleByDPI(),
		59.0 * scaleByDPI(),
		dialogs.calc[10], wcslen(dialogs.calc[10]));

	TextOut(hdc,
		360.0 * scaleByDPI(),
		133.0 * scaleByDPI(),
		dialogs.calc[11], wcslen(dialogs.calc[11]));
}



void CoinCalculatorTexts(HDC hdc)
{
	SelectObject(hdc, secondaryFont);
	SetBkMode(hdc, TRANSPARENT);
	SetTextColor(hdc, RGB(255, 255, 255));

	TextOut(hdc,
		115.0 * scaleByDPI(),
		70.0 * scaleByDPI(),
		dialogs.calc[14], wcslen(dialogs.calc[14]));

	TextOut(hdc,
		115.0 * scaleByDPI(),
		92.0 * scaleByDPI(),
		dialogs.calc[15], wcslen(dialogs.calc[15]));

	TextOut(hdc,
		115.0 * scaleByDPI(),
		114.0 * scaleByDPI(),
		dialogs.calc[16], wcslen(dialogs.calc[16]));



	TextOut(hdc,
		115.0 * scaleByDPI(),
		140.0 * scaleByDPI(),
		dialogs.calc[17], wcslen(dialogs.calc[17]));

	TextOut(hdc,
		115.0 * scaleByDPI(),
		161.0 * scaleByDPI(),
		dialogs.calc[18], wcslen(dialogs.calc[18]));

	TextOut(hdc,
		115.0 * scaleByDPI(),
		182.0 * scaleByDPI(),
		dialogs.calc[19], wcslen(dialogs.calc[19]));

	TextOut(hdc,
		115.0 * scaleByDPI(),
		203.0 * scaleByDPI(),
		dialogs.calc[20], wcslen(dialogs.calc[20]));

	TextOut(hdc,
		115.0 * scaleByDPI(),
		224.0 * scaleByDPI(),
		dialogs.calc[21], wcslen(dialogs.calc[21]));

	TextOut(hdc,
		115.0 * scaleByDPI(),
		245.0 * scaleByDPI(),
		dialogs.calc[22], wcslen(dialogs.calc[22]));



	TextOut(hdc,
		115.0 * scaleByDPI(),
		270.0 * scaleByDPI(),
		dialogs.calc[23], wcslen(dialogs.calc[23]));

	TextOut(hdc,
		115.0 * scaleByDPI(),
		292.0 * scaleByDPI(),
		dialogs.calc[24], wcslen(dialogs.calc[24]));

	TextOut(hdc,
		115.0 * scaleByDPI(),
		314.0 * scaleByDPI(),
		dialogs.calc[25], wcslen(dialogs.calc[25]));
}



void PageTexts(HWND hwnd, HDC hdc, int pageTexts)
{
	PageTitles(hdc, pageTexts - 1);

	switch(pageTexts)
	{
		case 1:
			TotalXpTexts(hdc);
			break;
		case 2:
			TotalXpTexts(hdc);
			FwBwLevelTexts(hwnd);
			break;
		case 3:
			DiffLevelTexts(hdc);
			break;
		case 4:
			CoinCalculatorTexts(hdc);
			break;
	}
}



void MinLevelText(HDC hdc)
{
	GetTextExtentPoint32(hdc, dialogs.calc[12], wcslen(dialogs.calc[12]), &size);
	TextOut(hdc,
		(WindowDimensions.right - size.cx) / 2,
		98.0 * scaleByDPI(),
		dialogs.calc[12], wcslen(dialogs.calc[12]));
}

void XpOutOfRangeText(HDC hdc)
{
	swprintf(formattedText, 50, dialogs.calc[13], (level * 2000) + 500);
	GetTextExtentPoint32(hdc, formattedText, wcslen(formattedText), &size);
	TextOut(hdc,
		(WindowDimensions.right - size.cx) / 2,
		173.0 * scaleByDPI(),
		formattedText, wcslen(formattedText));
}

void MinLevelText1(HDC hdc)
{
	GetTextExtentPoint32(hdc, dialogs.calc[12], wcslen(dialogs.calc[12]), &size);
	TextOut(hdc,
		((WindowDimensions.right - size.cx) / 2.0 - (125.0 * scaleByDPI())),
		98.0 * scaleByDPI(),
		dialogs.calc[12], wcslen(dialogs.calc[12]));
}

void XpOutOfRangeText1(HDC hdc)
{
	swprintf(formattedText, 50, dialogs.calc[13], (level * 2000) + 500);
	GetTextExtentPoint32(hdc, formattedText, wcslen(formattedText), &size);
	TextOut(hdc,
		((WindowDimensions.right - size.cx) / 2.0 - (125.0 * scaleByDPI())),
		173.0 * scaleByDPI(),
		formattedText, wcslen(formattedText));
}

void MinLevelText2(HDC hdc)
{
	GetTextExtentPoint32(hdc, dialogs.calc[12], wcslen(dialogs.calc[12]), &size);
	TextOut(hdc,
		((WindowDimensions.right - size.cx) / 2.0 + (125.0 * scaleByDPI())),
		98.0 * scaleByDPI(),
		dialogs.calc[12], wcslen(dialogs.calc[12]));
}

void XpOutOfRangeText2(HDC hdc)
{
	swprintf(formattedText, 50, dialogs.calc[13], (level2 * 2000) + 500);
	GetTextExtentPoint32(hdc, formattedText, wcslen(formattedText), &size);
	TextOut(hdc,
		((WindowDimensions.right - size.cx) / 2.0 + (125.0 * scaleByDPI())),
		173.0 * scaleByDPI(),
		formattedText, wcslen(formattedText));
}



void errorText(HDC hdc)
{
	if (showMinLvlErrorText == true)
		MinLevelText(hdc);
	if (showXpOutOfRangeText == true)
		XpOutOfRangeText(hdc);

	if (showMinLvlErrorText1 == true)
		MinLevelText1(hdc);
	if (showXpOutOfRangeText1 == true)
		XpOutOfRangeText1(hdc);
	if (showMinLvlErrorText2 == true)
		MinLevelText2(hdc);
	if (showXpOutOfRangeText2 == true)
		XpOutOfRangeText2(hdc);
}

void ErrorFunction(HDC hdc)
{
	SelectObject(hdc, secondaryFont);
	SetBkMode(hdc, TRANSPARENT);
	SetTextColor(hdc, RGB(255, 0, 0));

	errorText(hdc);
}



void LevelXpResult(HDC hdc, LPCWSTR resultText)
{
	if (ErrorDetector() == 1)
	{
		ErrorFunction(hdc);
		return;
	}
	SetBkMode(hdc, OPAQUE);
	SetBkColor(hdc, RGB(0,0,0));
	GetTextExtentPoint32(hdc, resultText, wcslen(resultText), &size);
	TextOut(hdc,
		(WindowDimensions.right - size.cx) / 2,
		350.0 * scaleByDPI(),
		resultText, wcslen(resultText));
}



void CoinCalculatorResult(HDC hdc, unsigned long long minCoin, unsigned long long avgCoin, unsigned long long maxCoin)
{
	SelectObject(hdc, globalFont);
	SetBkMode(hdc, OPAQUE);
	SetBkColor(hdc, RGB(255,255,255));
	SetTextColor(hdc, RGB(0, 0, 0));


	GetTextExtentPoint32(hdc, dialogs.calc[26], wcslen(dialogs.calc[26]), &size);
	TextOut(hdc,
		260.0 * scaleByDPI(), 72.0 * scaleByDPI(),
		dialogs.calc[26], wcslen(dialogs.calc[26]));

	GetTextExtentPoint32(hdc, dialogs.calc[27], wcslen(dialogs.calc[27]), &size);
	TextOut(hdc,
		260.0 * scaleByDPI(), 106.0 * scaleByDPI(),
		dialogs.calc[27], wcslen(dialogs.calc[27]));

	GetTextExtentPoint32(hdc, dialogs.calc[28], wcslen(dialogs.calc[28]), &size);
	TextOut(hdc,
		260.0 * scaleByDPI(), 140.0 * scaleByDPI(),
		dialogs.calc[28], wcslen(dialogs.calc[28]));


	SetBkMode(hdc, TRANSPARENT);
	SetTextColor(hdc, RGB(255, 255, 255));

	swprintf(formattedText, 50, L"%llu$", minCoin);
	TextOut(hdc,
		259.0 * scaleByDPI(),
		86.0 * scaleByDPI(),
		formattedText, wcslen(formattedText));

	swprintf(formattedText, 50, L"%llu$", avgCoin);
	TextOut(hdc,
		259.0 * scaleByDPI(),
		120.0 * scaleByDPI(),
		formattedText, wcslen(formattedText));

	swprintf(formattedText, 50, L"%llu$", maxCoin);
	TextOut(hdc,
		259.0 * scaleByDPI(),
		154.0 * scaleByDPI(),
		formattedText, wcslen(formattedText));
}