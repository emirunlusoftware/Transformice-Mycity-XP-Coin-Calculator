#include "main.h"





static HWND hwndGet;


void MainPage(bool isVisible)
{
	ShowWindow(TotalXpButton, isVisible);
	ShowWindow(FwBwLevelButton, isVisible);
	ShowWindow(DiffLevelButton, isVisible);
	ShowWindow(CoinCalculatorButton, isVisible);
	ShowWindow(AboutCoinCalculatorButton, isVisible);
	ShowWindow(AboutButton, isVisible);
	ShowWindow(UpdateLogButton, isVisible);
	ShowWindow(LanguageButton, isVisible);
	ShowWindow(LanguageEnglish, 0);
	ShowWindow(LanguageTurkish, 0);
}



void TotalXpPage(bool isVisible)
{
	SetWindowText(EnterLvl1, "");
	SetWindowText(EnterXp1, "");

	SetWindowPos(EnterLvl1, NULL,
		235.0 * scaleByDPI(), 75.0 * scaleByDPI(),
		105.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		SWP_NOZORDER);
	ShowWindow(EnterLvl1, isVisible);

	SetWindowPos(EnterXp1, NULL,
		235.0 * scaleByDPI(), 150.0 * scaleByDPI(),
		105.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		SWP_NOZORDER);
	ShowWindow(EnterXp1, isVisible);

	ShowWindow(CalcButton, isVisible);
	ShowWindow(ReturnMainMenuButton, isVisible);
}



void FwBwLevelPage(HWND hwnd, bool isVisible)
{
	SetWindowText(EnterLvl1, "");
	SetWindowText(EnterXp1, "");
	SetWindowText(EnterFutureXp, "");

	SetWindowPos(EnterLvl1, NULL,
		235.0 * scaleByDPI(), 75.0 * scaleByDPI(),
		105.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		SWP_NOZORDER);
	ShowWindow(EnterLvl1, isVisible);

	SetWindowPos(EnterXp1, NULL,
		235.0 * scaleByDPI(), 150.0 * scaleByDPI(),
		105.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		SWP_NOZORDER);
	ShowWindow(EnterXp1, isVisible);

	ShowWindow(EnterFutureXp, isVisible);

	SendMessage(GetDlgItem(hwnd, ADDXPRADIOBUTTON), BM_SETCHECK, (WPARAM)BST_CHECKED, 0);
	ShowWindow(AddXpText, isVisible);
	ShowWindow(SubstractXpText, isVisible);

	ShowWindow(CalcButton, isVisible);
	ShowWindow(ReturnMainMenuButton, isVisible);
}



void DiffLevelPage(bool isVisible)
{
	SetWindowText(EnterLvl1, "");
	SetWindowText(EnterXp1, "");
	SetWindowText(EnterLvl2, "");
	SetWindowText(EnterXp2, "");

	SetWindowPos(EnterLvl1, NULL,
		110.0 * scaleByDPI(), 75.0 * scaleByDPI(),
		105.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		SWP_NOSIZE | SWP_NOZORDER);
	ShowWindow(EnterLvl1, isVisible);

	SetWindowPos(EnterXp1, NULL,
		110.0 * scaleByDPI(), 150.0 * scaleByDPI(),
		105.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		SWP_NOSIZE | SWP_NOZORDER);
	ShowWindow(EnterXp1, isVisible);

	ShowWindow(EnterLvl2, isVisible);
	ShowWindow(EnterXp2, isVisible);

	ShowWindow(CalcButton, isVisible);
	ShowWindow(ReturnMainMenuButton, isVisible);
}



void CoinCalculatorPage(HWND hwndForLoop, bool isVisible)
{
	for (int idNumber = COINENTERCOP; idNumber <= COINENTERCHEF; idNumber++)
	{
		hwndGet = GetDlgItem(hwndForLoop, idNumber);

		if (hwndGet != NULL)
		{
			SetWindowText(hwndGet, "");
			ShowWindow(hwndGet, isVisible);
		}
	}

	ShowWindow(CalcButton, isVisible);
	ShowWindow(ReturnMainMenuButton, isVisible);
}



void AboutCoinCalculatorPage(bool isVisible)
{
	ShowWindow(AboutCoinCalcText, isVisible);
	ShowWindow(ReturnMainMenuButton, isVisible);
}



void ShowPages(HWND hwnd, int page)
{
	switch (page)
	{
		case MAINPAGE:
			TotalXpPage(HIDE);
			FwBwLevelPage(hwnd, HIDE);
			DiffLevelPage(HIDE);
			CoinCalculatorPage(hwnd, HIDE);
			AboutCoinCalculatorPage(HIDE);
			MainPage(SHOW);
			break;

		case TOTALXPPAGE:
			MainPage(HIDE);
			TotalXpPage(SHOW);
			break;

		case FWBWLEVELPAGE:
			MainPage(HIDE);
			FwBwLevelPage(hwnd, SHOW);
			break;

		case DIFFLEVELPAGE:
			MainPage(HIDE);
			DiffLevelPage(SHOW);
			break;

		case COINCALCULATORPAGE:
			MainPage(HIDE);
			CoinCalculatorPage(hwnd, SHOW);
			break;

		case ABOUTCOINCALCPAGE:
			MainPage(HIDE);
			AboutCoinCalculatorPage(SHOW);
			break;
	}
}