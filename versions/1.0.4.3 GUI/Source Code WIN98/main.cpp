#include "main.h"
#include <wchar.h>
#pragma comment (lib, "winmm.lib")





HINSTANCE hInstance;
RECT WindowDimensions =
{
	0,
	0,
	static_cast<int>((576.0 - 10.0) * scaleByDPI()),
	static_cast<int>((432.0 - 10.0) * scaleByDPI())
}; // (dot1_x, dot1_y, dot2_x, dot2_y)

static LPCSTR printResult;
static HWND windowFocus;

static int option;

static bool clicked	= false,
			calculate = false;



LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{

		case WM_CREATE:
		{
			HICON appIcon = (HICON)LoadImage(hInstance, MAKEINTRESOURCE(IDI_ICON1), IMAGE_ICON, 64, 64, LR_DEFAULTCOLOR);
			if (appIcon)
				SendMessage(hwnd, WM_SETICON, ICON_BIG, (LPARAM)appIcon);

			PlaySound(MAKEINTRESOURCE(IDR_MAINTRACK), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);

			break;
		}

		case WM_CLOSE:
		case WM_DESTROY:
			PostQuitMessage(0);
			//DestroyWindow(hwnd); [MAKES A CRASH AFTER CLOSING THE PROGRAM ON WIN98]
			return 0;

		case WM_COMMAND:
		{

			switch (LOWORD(wParam))
			{

				case TOTALXPBUTTON:
				{
					option = TOTALXPPAGE;
					ShowPages(hwnd, TOTALXPPAGE);
					InvalidateRect(hwnd, NULL, TRUE);
					break;
				}

				case FWBWLEVELBUTTON:
				{
					option = FWBWLEVELPAGE;
					ShowPages(hwnd, FWBWLEVELPAGE);
					InvalidateRect(hwnd, NULL, TRUE);
					break;
				}

				case DIFFLEVELBUTTON:
				{
					option = DIFFLEVELPAGE;
					ShowPages(hwnd, DIFFLEVELPAGE);
					InvalidateRect(hwnd, NULL, TRUE);
					break;
				}

				case COINCALCULATORBUTTON:
				{
					option = COINCALCULATORPAGE;
					ShowPages(hwnd, COINCALCULATORPAGE);
					InvalidateRect(hwnd, NULL, TRUE);
					break;
				}

				case ADDXPRADIOBUTTON:
				{
					if (HIWORD(wParam) == BN_CLICKED)
						substractXpBnClicked = false;

					break;
				}

				case SUBSTRACTXPRADIOBUTTON:
				{
					if (HIWORD(wParam) == BN_CLICKED)
						substractXpBnClicked = true;

					break;
				}

				case CALCULATEBUTTON:
				{
					calculate = true;
					printResult = CalculatorEngine(option);
					InvalidateRect(hwnd, NULL, TRUE);
					break;
				}

				case ABOUTCOINCALCULATORBUTTON:
				{
					ShowPages(hwnd, ABOUTCOINCALCPAGE);
					break;
				}

				/* For preventing a weird "destroyer bug" */
				case ABOUTCOINCALCULATORTEXT:
				{
					SetFocus(windowFocus);
					break;
				}

				case RETURNMAINMENUBUTTON:
				{
					clicked = option = calculate = false;
					ShowPages(hwnd, MAINPAGE);
					InvalidateRect(hwnd, NULL, TRUE);
					break;
				}

				case LANGUAGEBUTTON:
				{
					clicked = !clicked;
					ShowLanguageButtons(clicked);
					break;
				}

				case LANGUAGEENGLISH:
				{
					setLanguage(ENGLISH_EN);
					break;
				}

				case LANGUAGETURKISH:
				{
					setLanguage(TURKISH_TR);
					break;
				}

				case UPDATELOGBUTTON:
				{
					windowFocus = GetFocus();
					MessageBox(hwnd, dialogs.updatelog[1], dialogs.updatelog[0], MB_OK);
					SetFocus(windowFocus);
					break;
				}

				case ABOUTBUTTON:
				{
					windowFocus = GetFocus();
					MessageBox(hwnd, dialogs.about, dialogs.menu[5], MB_OK);
					SetFocus(windowFocus);
					break;
				}
			}
			break;

		}

		case WM_PAINT:
		{
			/*
				Painting Order:
				1st. Font
				2nd. Background
				3rd. Texts
			*/
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hwnd, &ps);
			LoadingFonts(hwnd, hdc);
			LoadingBackground(hdc);

			switch(option)
			{
				case TOTALXPPAGE:
				{
					PageTexts(hwnd, hdc, TOTALXPPAGE);
					if (calculate)
						LevelXpResult(hdc, printResult);
					break;
				}

				case FWBWLEVELPAGE:
				{
					PageTexts(hwnd, hdc, FWBWLEVELPAGE);
					if (calculate)
						LevelXpResult(hdc, printResult);
					break;
				}

				case DIFFLEVELPAGE:
				{
					PageTexts(hwnd, hdc, DIFFLEVELPAGE);
					if (calculate)
						LevelXpResult(hdc, printResult);
					break;
				}

				case COINCALCULATORPAGE:
				{
					PageTexts(hwnd, hdc, COINCALCULATORPAGE);
					if (calculate)
						CoinCalculatorResult(hdc, minCoin, avgCoin, maxCoin);
					break;
				}
			}


			EndPaint(hwnd, &ps);
			break;
		}

		case WM_KEYUP:
		{
			if (wParam == VK_ESCAPE)
			{
				clicked = option = calculate = false;
				InvalidateRect(hwnd, NULL, TRUE);
				ShowPages(hwnd, MAINPAGE);
			}
			break;
		}

	}
	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}



int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	HANDLE hMutex = CreateMutex(
		NULL, TRUE,
		"Mutual Exclusion Handle prevents multiple instances of a program from running simultaneously."
	);
	if (GetLastError() == ERROR_ALREADY_EXISTS)
		return 0;

	hInstance = hInst;

	const char CLASS_NAME[] = "Mycity XP & Coin Calculator Window";

	WNDCLASS wc = {};
	wc.lpfnWndProc		= WindowProc;
	wc.hInstance		= hInstance;
	wc.lpszClassName	= CLASS_NAME;
	wc.hIcon			= LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor			= LoadCursor(NULL, IDC_ARROW);
	wc.lpszMenuName		= NULL;

	if (!RegisterClass(&wc)) {
		MessageBox(NULL, "RegisterClass(&wc) failed.", "Error", MB_ICONERROR);
		return 1;
	}

	AdjustWindowRect(&WindowDimensions, WS_OVERLAPPEDWINDOW, FALSE);

	int screenWidth = GetSystemMetrics(SM_CXSCREEN);
	int screenHeight = GetSystemMetrics(SM_CYSCREEN);
	int posX = (screenWidth - (WindowDimensions.right - WindowDimensions.left)) / 2;
	int posY = (screenHeight - (WindowDimensions.bottom - WindowDimensions.top)) / 2;

	HWND hwnd = CreateWindow(
		CLASS_NAME,
		"Mycity XP & Coin Calculator",

		WS_OVERLAPPEDWINDOW &~ (WS_THICKFRAME | WS_MAXIMIZEBOX),

		posX, posY,
		WindowDimensions.right - WindowDimensions.left,
		WindowDimensions.bottom - WindowDimensions.top,
		NULL, NULL, hInstance, NULL
	);

	if (!hwnd)
	{
		MessageBox(NULL, "Program Handle WiNDow couldn't be created!", "Error", MB_ICONERROR);
		return 1;
	}

	LoadingEntries(hwnd, hInstance);
	LoadingTexts(hwnd, hInstance);
	LoadingButtons(hwnd, hInstance);

	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);

	MSG msg = {};
	while (GetMessage(&msg, NULL, 0, 0))
	{
		if (!IsDialogMessage(hwnd, &msg))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}

	ReleaseMutex(hMutex);
	CloseHandle(hMutex);

	return 0;
}