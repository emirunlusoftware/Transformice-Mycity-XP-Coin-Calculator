#pragma once
#include <windows.h>
#include "resource.h"
#include "dialogs_tr.h"
#include "dialogs_en.h"





extern RECT WindowDimensions;

/*
	To prevent these WM values:

	WM_CREATE,
	WM_COMMAND,
	WM_KEYUP
	WK_ESCAPE

	The ID's were started from 901, not 1.
*/
#define TOTALXPBUTTON				901
#define FWBWLEVELBUTTON				902
#define DIFFLEVELBUTTON				903
#define COINCALCULATORBUTTON		904
#define ABOUTCOINCALCULATORBUTTON	905
#define ABOUTBUTTON					906
#define UPDATELOGBUTTON				907
#define LANGUAGEBUTTON				908
#define LANGUAGEENGLISH				909
#define LANGUAGETURKISH				910

#define XPENTERLVL1					911
#define XPENTERXP1					912
#define XPENTERLVL2					913
#define XPENTERXP2					914
#define XPFUTUREXP					915
#define ADDXPRADIOBUTTON			916
#define SUBSTRACTXPRADIOBUTTON		917

#define COINENTERCOP				918
#define COINENTERTHIEF				919
#define COINENTERFISHER				920
#define COINENTERMINERGOLD			921
#define COINENTERMINERYELLOW		922
#define COINENTERMINERBLUE			923
#define COINENTERMINERPURPLE		924
#define COINENTERMINERGREEN			925
#define COINENTERMINERRED			926
#define COINENTERFARMERSEEDS		927
#define COINENTERFARMERFRUITS		928
#define COINENTERCHEF				929

#define CALCULATEBUTTON				930
#define ABOUTCOINCALCULATORTEXT		931
#define RETURNMAINMENUBUTTON		932



/* buttons.cpp */
void ShowLanguageButtons(bool Clicked);
void LoadingButtons(HWND hwnd, HINSTANCE hInstance);

extern HWND TotalXpButton,
			FwBwLevelButton,
			DiffLevelButton,
			CoinCalculatorButton,
			AboutCoinCalculatorButton,
			UpdateLogButton,
			AboutButton,
			LanguageButton,
			LanguageEnglish,
			LanguageTurkish,
			CalcButton,
			ReturnMainMenuButton;



/* misc.cpp */
float scaleByDPI();



/* fonts.cpp */
extern HFONT globalFont, secondaryFont;
void LoadingFonts(HWND hwnd, HDC hdc);



/* pages.cpp */
#define MAINPAGE			0
#define TOTALXPPAGE			1
#define FWBWLEVELPAGE		2
#define DIFFLEVELPAGE		3
#define COINCALCULATORPAGE	4
#define ABOUTCOINCALCPAGE	5

#define HIDE				0
#define SHOW				1

void ShowPages(HWND hwnd, int page);



/* images.cpp */
void LoadingBackground(HDC hdc);



/* translate.cpp */
enum Lang
{
	ENGLISH_EN = 1,
	TURKISH_TR = 90
};
extern Lang language;

struct Dialogs
{
	LPCSTR* menu;
	LPCSTR* calc;
	LPCSTR coin_howto;
	LPCSTR* updatelog;
	LPCSTR about;
};
extern Dialogs dialogs;

extern Dialogs getDialogs(Lang lang);
void setLanguage(int country_code);



/*	texts.cpp	*/
extern HWND AddXpText, SubstractXpText, AboutCoinCalcText;
void LoadingTexts(HWND hwnd, HINSTANCE hInstance);
void PageTexts(HWND hwnd, HDC hdc, int pageTexts);
void LevelXpResult(HDC hdc, LPCSTR resultText);
void CoinCalculatorResult(HDC hdc, unsigned long long minCoin, unsigned long long avgCoin, unsigned long long maxCoin);



/*	entries.cpp	*/
extern HWND EnterLvl1,
			EnterLvl2,
			EnterXp1,
			EnterXp2,
			EnterFutureXp,

			EnterCop,
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

void LoadingEntries(HWND hwnd, HINSTANCE hInstance);



/* math.cpp */
extern bool showXpOutOfRangeText,
			showMinLvlErrorText,
			showXpOutOfRangeText1,
			showMinLvlErrorText1,
			showXpOutOfRangeText2,
			showMinLvlErrorText2,
			substractXpBnClicked;

extern unsigned int level, level2;
extern unsigned long long minCoin, avgCoin, maxCoin;

bool ErrorDetector();
LPCSTR CalculatorEngine(int method);