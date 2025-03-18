#include "main.h"





Dialogs getDialogs(Lang lang)
{
	if (lang == ENGLISH_EN)
	{
        dialogs.menu		= menu_en;
        dialogs.calc		= calc_en;
        dialogs.coin_howto	= coin_howto_en;
		dialogs.updatelog	= updatelog_en;
        dialogs.about		= about_en;
	}

	else
	{
        dialogs.menu		= menu_tr;
        dialogs.calc		= calc_tr;
        dialogs.coin_howto	= coin_howto_tr;
		dialogs.updatelog	= updatelog_tr;
        dialogs.about		= about_tr;
	}
	return dialogs;
}
Lang language = ENGLISH_EN;
Dialogs dialogs = getDialogs(language);



void translate()
{
	HWND menuObjects[] =
	{
		TotalXpButton,
		FwBwLevelButton,
		DiffLevelButton,
		CoinCalculatorButton,
		AboutCoinCalculatorButton,
		AboutButton,
		UpdateLogButton,
		LanguageButton,
		CalcButton,
		ReturnMainMenuButton
	};

	for (int i = 0; i < sizeof(menuObjects) / sizeof(menuObjects[0]); i++)
	{
		SetWindowText(menuObjects[i], dialogs.menu[i]);
	}

	SetWindowText(AddXpText, dialogs.calc[6]);
	SetWindowText(SubstractXpText, dialogs.calc[7]);
	SetWindowText(AboutCoinCalcText, dialogs.coin_howto);
}



void setLanguage(int country_code)
{
	switch (country_code)
	{
		/* English (default) */
		case (ENGLISH_EN):
			language = ENGLISH_EN;
			break;

		/* Turkish */
		case (TURKISH_TR):
			language = TURKISH_TR;
			break;
	}

	dialogs = getDialogs(language);
	translate();
}