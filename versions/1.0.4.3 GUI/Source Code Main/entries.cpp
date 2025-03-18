#include "main.h"





HWND EnterLvl1,
	 EnterLvl2,
	 EnterXp1,
	 EnterXp2,
	 EnterFutureXp;


void LevelXpEntries(HWND hwnd, HINSTANCE hInstance)
{
	EnterLvl1 = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		235.0 * scaleByDPI(), 75.0 * scaleByDPI(),
		105.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)911, hInstance, NULL
	);
	SendMessage(EnterLvl1, EM_SETLIMITTEXT, 4, 0);

	EnterXp1 = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		235.0 * scaleByDPI(), 150.0 * scaleByDPI(),
		105.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)912, hInstance, NULL
	);
	SendMessage(EnterXp1, EM_SETLIMITTEXT, 8, 0);

	EnterLvl2 = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		360.0 * scaleByDPI(), 75.0 * scaleByDPI(),
		105.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)913, hInstance, NULL
	);
	SendMessage(EnterLvl2, EM_SETLIMITTEXT, 4, 0);

	EnterXp2 = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		360.0 * scaleByDPI(), 150.0 * scaleByDPI(),
		105.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)914, hInstance, NULL
	);
	SendMessage(EnterXp2, EM_SETLIMITTEXT, 8, 0);

	EnterFutureXp = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		235.0 * scaleByDPI(), 225.0 * scaleByDPI(),
		105.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)915, hInstance, NULL
	);
	SendMessage(EnterFutureXp, EM_SETLIMITTEXT, 11, 0);
}



HWND EnterCop,
	 EnterThief,
	 EnterFisher,
	 EnterMinerGold,
	 EnterMinerYellow,
	 EnterMinerBlue,
	 EnterMinerPurple,
	 EnterMinerGreen,
	 EnterMinerRed,
	 EnterFarmerSeeds,
	 EnterFarmerFruits,
	 EnterChef;


void CoinEntries(HWND hwnd, HINSTANCE hInstance)
{
	EnterCop = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		400.0 * scaleByDPI(), 70.0 * scaleByDPI(),
		65.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)918, hInstance, NULL
	);
	SendMessage(EnterCop, EM_SETLIMITTEXT, 6, 0);

	EnterThief = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		400.0 * scaleByDPI(), 90.0 * scaleByDPI(),
		65.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)919, hInstance, NULL
	);
	SendMessage(EnterThief, EM_SETLIMITTEXT, 6, 0);

	EnterFisher = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		400.0 * scaleByDPI(), 110.0 * scaleByDPI(),
		65.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)920, hInstance, NULL
	);
	SendMessage(EnterFisher, EM_SETLIMITTEXT, 6, 0);

	EnterMinerGold = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		400.0 * scaleByDPI(), 140.0 * scaleByDPI(),
		65.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)921, hInstance, NULL
	);
	SendMessage(EnterMinerGold, EM_SETLIMITTEXT, 6, 0);

	EnterMinerYellow = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		400.0 * scaleByDPI(), 160.0 * scaleByDPI(),
		65.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)922, hInstance, NULL
	);
	SendMessage(EnterMinerYellow, EM_SETLIMITTEXT, 6, 0);

	EnterMinerBlue = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		400.0 * scaleByDPI(), 180.0 * scaleByDPI(),
		65.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)923, hInstance, NULL
	);
	SendMessage(EnterMinerBlue, EM_SETLIMITTEXT, 6, 0);

	EnterMinerPurple = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		400.0 * scaleByDPI(), 200.0 * scaleByDPI(),
		65.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)924, hInstance, NULL
	);
	SendMessage(EnterMinerPurple, EM_SETLIMITTEXT, 6, 0);

	EnterMinerGreen = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		400.0 * scaleByDPI(), 220.0 * scaleByDPI(),
		65.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)925, hInstance, NULL
	);
	SendMessage(EnterMinerGreen, EM_SETLIMITTEXT, 6, 0);

	EnterMinerRed = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		400.0 * scaleByDPI(), 240.0 * scaleByDPI(),
		65.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)926, hInstance, NULL
	);
	SendMessage(EnterMinerRed, EM_SETLIMITTEXT, 6, 0);

	EnterFarmerSeeds = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		400.0 * scaleByDPI(), 270.0 * scaleByDPI(),
		65.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)927, hInstance, NULL
	);
	SendMessage(EnterFarmerSeeds, EM_SETLIMITTEXT, 6, 0);

	EnterFarmerFruits = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		400.0 * scaleByDPI(), 290.0 * scaleByDPI(),
		65.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)928, hInstance, NULL
	);
	SendMessage(EnterFarmerFruits, EM_SETLIMITTEXT, 6, 0);

	EnterChef = CreateWindowEx(
		WS_EX_CLIENTEDGE, L"EDIT", 0,
		WS_TABSTOP | WS_CHILD | ES_NUMBER | ES_CENTER,
		400.0 * scaleByDPI(), 310.0 * scaleByDPI(),
		65.0 * scaleByDPI(), 20.0 * scaleByDPI(),
		hwnd, (HMENU)929, hInstance, NULL
	);
	SendMessage(EnterChef, EM_SETLIMITTEXT, 6, 0);
}



void LoadingEntries(HWND hwnd, HINSTANCE hInstance)
{
	LevelXpEntries(hwnd, hInstance);
	CoinEntries(hwnd, hInstance);
}