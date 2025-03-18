#include "main.h"
#include <stdio.h>
#include <stdlib.h>





bool showXpOutOfRangeText,
	 showMinLvlErrorText,
	 showXpOutOfRangeText1,
	 showMinLvlErrorText1,
	 showXpOutOfRangeText2,
	 showMinLvlErrorText2,
	 substractXpBnClicked;


#define RESULTMAXSIZE 50
char Level1[4],
	 Level2[4],
	 XP1[12],
	 XP2[12],
	 Coin[6],
	 result[RESULTMAXSIZE];


long long xp2, sum, sum2;

unsigned int level, level2, xp, levelUpXpLimit;
unsigned long long difference, minCoin, avgCoin, maxCoin;



bool ErrorDetector()
{
	if
	(
		showMinLvlErrorText			== true
		|| showXpOutOfRangeText		== true
		|| showMinLvlErrorText1		== true
		|| showXpOutOfRangeText1	== true
		|| showMinLvlErrorText2		== true
		|| showXpOutOfRangeText2	== true
	)
	return 1;

	else return 0;
}



LPCSTR CalculatorEngine(int method)
{
	showXpOutOfRangeText	= false;
	showMinLvlErrorText		= false;
	showXpOutOfRangeText1	= false;
	showMinLvlErrorText1	= false;
	showXpOutOfRangeText2	= false;
	showMinLvlErrorText2	= false;

	/* Reset the result array */
	for (int i = 0; i < RESULTMAXSIZE; i++)
		result[i] = '\0';


	GetWindowText(EnterLvl1, Level1, 5);
	GetWindowText(EnterXp1,	XP1, 13);

	level	= atoi(Level1);
	xp		= atoi(XP1);
	sum		= ((1LL * (level - 1) * level / 2) * 2000 + ((level - 1) * 500)) + xp;


	switch (method)
	{

		/* Find My Total XP */
		case TOTALXPPAGE:
		{
			if (level == 0)
				showMinLvlErrorText = true;
			if (xp > (level * 2000) + 500 && level != 0)
				showXpOutOfRangeText = true;

			if (ErrorDetector() == 1)
				return "";

			sprintf(result, dialogs.calc[29], sum);
			return result;
		}

		/* Forward-Backward Calculation */
		case FWBWLEVELPAGE:
		{
			if (level == 0)
				showMinLvlErrorText = true;
			if (xp > (level * 2000) + 500 && level != 0)
				showXpOutOfRangeText = true;

			if (ErrorDetector() == 1)
				return "";

			GetWindowText(EnterFutureXp, XP2, 13);
			xp2 = strtol(XP2, NULL, 10);
			if (substractXpBnClicked == true)
				xp2 = -xp2;

			sum2 = 0;
			int k = 1, levelUpXpLimit = 2500;

			sum2 = sum + xp2;
			if (sum2 >= 0)
			{
				for (; ;)
				{
					levelUpXpLimit = (k * 2000) + 500;
					if (sum2 < levelUpXpLimit)
						break;
					sum2 -= 1LL * levelUpXpLimit;
					k += 1;
				}
			}
			else sum2 = 0;

			sprintf(result, dialogs.calc[30], k, sum2, levelUpXpLimit);
			return result;
		}

		/* Difference Between Two Levels */
		case DIFFLEVELPAGE:
		{
			GetWindowText(EnterLvl2, Level2, 5);
			GetWindowText(EnterXp2,	XP2, 13);

			level2	= atoi(Level2);
			xp2		= strtol(XP2, NULL, 10);

			if (level == 0)
				showMinLvlErrorText1 = true;
			if (level2 == 0)
				showMinLvlErrorText2 = true;
			if (xp > (level * 2000) + 500 && level != 0)
				showXpOutOfRangeText1 = true;
			if (xp2 > (level2 * 2000) + 500 && level2 != 0)
				showXpOutOfRangeText2 = true;

			if (ErrorDetector() == 1)
				return "";

			sum2 = ((1LL * (level2 - 1) * level2 / 2) * 2000 + ((level2 - 1) * 500)) + xp2;
			difference = (sum2 - sum) < 0 ? (sum - sum2) : (sum2 - sum);

			sprintf(result, dialogs.calc[31], difference);
			return result;
		}

		case COINCALCULATORPAGE:
		{
			GetWindowText(EnterCop, Coin, 7);
			minCoin = avgCoin = maxCoin = strtol(Coin, NULL, 10) * 150;

			GetWindowText(EnterThief, Coin, 7);
			minCoin += strtol(Coin, NULL, 10) * 250;
			avgCoin += strtol(Coin, NULL, 10) * 463;
			maxCoin += strtol(Coin, NULL, 10) * 1100;

			GetWindowText(EnterFisher, Coin, 7);
			if (atoi(Coin) < 150)
			{
				/*
				If the player fished less than 150 fishes,
				we consider that the player hasn't fished a goldenmare yet.
				*/
				minCoin += strtol(Coin, NULL, 10) * 120;
				avgCoin += strtol(Coin, NULL, 10) * 150;
				maxCoin += strtol(Coin, NULL, 10) * 254;
			}
			else
			{
				minCoin += strtol(Coin, NULL, 10) * 169;
				avgCoin += strtol(Coin, NULL, 10) * 211;
				maxCoin += strtol(Coin, NULL, 10) * 254;
			}

			GetWindowText(EnterMinerGold, Coin, 7);
			minCoin += strtol(Coin, NULL, 10) * 115;
			avgCoin += strtol(Coin, NULL, 10) * 115;
			maxCoin += strtol(Coin, NULL, 10) * 115;

			GetWindowText(EnterMinerYellow, Coin, 7);
			minCoin += strtol(Coin, NULL, 10) * 200;
			avgCoin += strtol(Coin, NULL, 10) * 200;
			maxCoin += strtol(Coin, NULL, 10) * 200;

			GetWindowText(EnterMinerBlue, Coin, 7);
			minCoin += strtol(Coin, NULL, 10) * 342;
			avgCoin += strtol(Coin, NULL, 10) * 342;
			maxCoin += strtol(Coin, NULL, 10) * 342;

			GetWindowText(EnterMinerPurple, Coin, 7);
			minCoin += strtol(Coin, NULL, 10) * 600;
			avgCoin += strtol(Coin, NULL, 10) * 600;
			maxCoin += strtol(Coin, NULL, 10) * 600;

			GetWindowText(EnterMinerGreen, Coin, 7);
			minCoin += strtol(Coin, NULL, 10) * 800;
			avgCoin += strtol(Coin, NULL, 10) * 800;
			maxCoin += strtol(Coin, NULL, 10) * 800;

			GetWindowText(EnterMinerRed, Coin, 7);
			minCoin += strtol(Coin, NULL, 10) * 1200;
			avgCoin += strtol(Coin, NULL, 10) * 1200;
			maxCoin += strtol(Coin, NULL, 10) * 1200;

			GetWindowText(EnterFarmerSeeds, Coin, 7);
			minCoin += strtol(Coin, NULL, 10) * 10;
			avgCoin += strtol(Coin, NULL, 10) * 53;
			maxCoin += strtol(Coin, NULL, 10) * 1300;

			GetWindowText(EnterFarmerFruits, Coin, 7);
			minCoin += strtol(Coin, NULL, 10);
			avgCoin += strtol(Coin, NULL, 10) * 15;
			maxCoin += strtol(Coin, NULL, 10) * 200;

			GetWindowText(EnterChef, Coin, 7);
			minCoin += strtol(Coin, NULL, 10) * 400;
			avgCoin += strtol(Coin, NULL, 10) * 700;
			maxCoin += strtol(Coin, NULL, 10) * 729;

			return "Calculation Successful";
		}
	}
}