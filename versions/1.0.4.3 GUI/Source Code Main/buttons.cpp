#include "main.h"





HWND TotalXpButton,
	 FwBwLevelButton,
	 DiffLevelButton,
	 CoinCalculatorButton,
	 AboutCoinCalculatorButton,
	 UpdateLogButton,
	 AboutButton,
	 LanguageButton,
	 LanguageEnglish,
	 LanguageTurkish;


void MainMenuButtons(HWND hwnd, HINSTANCE hInstance)
{
	TotalXpButton = CreateWindow(
		L"BUTTON", menu_en[0], //Class name | Text written on Button
		WS_VISIBLE | WS_TABSTOP | WS_CHILD | WS_BORDER, //Specifications
		35.0 * scaleByDPI(), 150.0 * scaleByDPI(), //posX, posY
		138.0 * scaleByDPI(), 50.0 * scaleByDPI(), //width, height
		hwnd,
		(HMENU)901, //ID Number
		hInstance,
		NULL
	);

	FwBwLevelButton = CreateWindow(
		L"BUTTON", menu_en[1],
		WS_VISIBLE | WS_TABSTOP | WS_CHILD | WS_BORDER | BS_MULTILINE,
		35.0 * scaleByDPI(), 205.0 * scaleByDPI(),
		138.0 * scaleByDPI(), 50.0 * scaleByDPI(),
		hwnd,
		(HMENU)902,
		hInstance,
		NULL
	);

	DiffLevelButton = CreateWindow(
		L"BUTTON", menu_en[2],
		WS_VISIBLE | WS_TABSTOP | WS_CHILD | WS_BORDER | BS_MULTILINE,
		35.0 * scaleByDPI(), 260.0 * scaleByDPI(),
		138.0 * scaleByDPI(), 50.0 * scaleByDPI(),
		hwnd,
		(HMENU)903,
		hInstance,
		NULL
	);

	CoinCalculatorButton = CreateWindow(
		L"BUTTON", menu_en[3],
		WS_VISIBLE | WS_TABSTOP | WS_CHILD | WS_BORDER | BS_MULTILINE,
		391.0 * scaleByDPI(), 150.0 * scaleByDPI(),
		150.0 * scaleByDPI(), 50.0 * scaleByDPI(),
		hwnd,
		(HMENU)904,
		hInstance,
		NULL
	);

	AboutCoinCalculatorButton = CreateWindow(
		L"BUTTON", menu_en[4],
		WS_VISIBLE | WS_TABSTOP | WS_CHILD | WS_BORDER | BS_MULTILINE,
		391.0 * scaleByDPI(), 205.0 * scaleByDPI(),
		150.0 * scaleByDPI(), 50.0 * scaleByDPI(),
		hwnd,
		(HMENU)905,
		hInstance,
		NULL
	);

	AboutButton = CreateWindow(
		L"BUTTON", menu_en[5],
		WS_VISIBLE | WS_TABSTOP | WS_CHILD | BS_FLAT,
		172.0 * scaleByDPI(), 0,
		76.0 * scaleByDPI(), 25.0 * scaleByDPI(),
		hwnd,
		(HMENU)906,
		hInstance,
		NULL
	);

	UpdateLogButton = CreateWindow(
		L"BUTTON", menu_en[6],
		WS_VISIBLE | WS_TABSTOP | WS_CHILD | BS_MULTILINE | BS_FLAT,
		247.0 * scaleByDPI(), 0,
		82.0 * scaleByDPI(), 37.0 * scaleByDPI(),
		hwnd,
		(HMENU)907,
		hInstance,
		NULL
	);

	LanguageButton = CreateWindow(
		L"BUTTON", menu_en[7],
		WS_VISIBLE | WS_TABSTOP | WS_CHILD | BS_FLAT,
		328.0 * scaleByDPI(), 0,
		76.0 * scaleByDPI(), 25.0 * scaleByDPI(),
		hwnd,
		(HMENU)908,
		hInstance,
		NULL
	);

	LanguageEnglish = CreateWindow(
		L"BUTTON", L"English",
		WS_TABSTOP | WS_CHILD | WS_BORDER | BS_BITMAP,
		328.0 * scaleByDPI(), 24.0 * scaleByDPI(),
		76.0 * scaleByDPI(), 24.0 * scaleByDPI(),
		hwnd,
		(HMENU)909,
		hInstance,
		NULL
	);
	HBITMAP LangEN = (HBITMAP)LoadImage(GetModuleHandle(NULL), MAKEINTRESOURCE(IMG_LANGENGLISH), IMAGE_BITMAP, 76.0 * scaleByDPI(), 24.0 * scaleByDPI(), LR_CREATEDIBSECTION);
	SendMessage(LanguageEnglish, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)LangEN);

	LanguageTurkish = CreateWindow(
		L"BUTTON", L"Türkçe",
		WS_TABSTOP | WS_CHILD | WS_BORDER | BS_BITMAP,
		328.0 * scaleByDPI(), 46.0 * scaleByDPI(),
		76.0 * scaleByDPI(), 24.0 * scaleByDPI(),
		hwnd,
		(HMENU)910,
		hInstance,
		NULL
	);
	HBITMAP LangTR = (HBITMAP)LoadImage(GetModuleHandle(NULL), MAKEINTRESOURCE(IMG_LANGTURKISH), IMAGE_BITMAP, 76.0 * scaleByDPI(), 24.0 * scaleByDPI(), LR_CREATEDIBSECTION);
	SendMessage(LanguageTurkish, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)LangTR);
}



HWND CalcButton;
void CalculateButton(HWND hwnd, HINSTANCE hInstance)
{
	CalcButton = CreateWindow(
		L"BUTTON", menu_en[8],
		WS_TABSTOP | WS_CHILD | WS_BORDER,
		248.0 * scaleByDPI(), 400.0 * scaleByDPI(),
		80.0 * scaleByDPI(), 25.0 * scaleByDPI(),
		hwnd, (HMENU)930, hInstance, NULL
	);
}



HWND ReturnMainMenuButton;
void GoBackButton(HWND hwnd, HINSTANCE hInstance)
{
	ReturnMainMenuButton = CreateWindow(
		L"BUTTON", menu_en[9],
		WS_TABSTOP | WS_CHILD | WS_BORDER,
		35.0 * scaleByDPI(), 400.0 * scaleByDPI(),
		80.0 * scaleByDPI(), 25.0 * scaleByDPI(),
		hwnd,
		(HMENU)932,
		hInstance,
		NULL
	);
}



void LoadingButtons(HWND hwnd, HINSTANCE hInstance)
{
	MainMenuButtons(hwnd, hInstance);
	CalculateButton(hwnd,hInstance);
	GoBackButton(hwnd, hInstance);
}



void ShowLanguageButtons(bool Clicked)
{
	ShowWindow(LanguageEnglish, Clicked);
	ShowWindow(LanguageTurkish, Clicked);
}