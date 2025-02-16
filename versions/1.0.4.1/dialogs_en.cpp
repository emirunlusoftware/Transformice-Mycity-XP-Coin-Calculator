#include <iostream>
#include "dialogs_en.h"
using namespace std;

	//Language: English
	//NOTE: INDENTS AT THE BEGINNING OF THESE TEXTS ARE IMPORTANT BECAUSE OF TEXT LAYOUT.
	string menu[]
	{
		//Main Menu + Options
		"		MYCITY XP & COIN CALCULATOR",
		" (1)Find My Total Xp",
		" (2)Forward/Backward-looking Level Calculation",
		" (3)Difference Between Two Levels",
		" (4)Start Coin Calculator",
		" (5)How Does the Coin Calculator Work?",
		" (9)Update Log",
		" (A)About",
		" (E)Exit",
		" (R)Retry",
		" (M)Main Menu",
		" (9)Go Back to Update Log",
	};

	string calc_xp[]
	{
		//(1)Find My Total Xp
		"...This option shows you how many xp you've got so far...",
		"Enter your level: ",
		"!ERROR: THE LEVEL YOU ENTER MUST BE BETWEEN 1 AND 10000!",
		"Enter your xp which is at the profile (??? / ",
		"!ERROR: XP VALUE YOU ENTER MUST BE 0 OR GREATER!",
		"Total xp: ",

		//(2)Forward/Backward-looking Level Calculation
		"...Shows you what level you will be by adding/substracting XP...",
		"How many xp you'll get in the future?",
		"NOTE: Put MINUS SIGN if you want to go back and find your previous level at past.. ",
		"!ERROR: PLEASE ENTER A VALID VALUE!",
		"Level: ",

		//(3)Difference Between Two Levels
		"...Finds XP difference between two players which have different levels...",
		"Enter the first person's level: ",
		"First person's xp (??? / ",
		"Enter the second person's level: ",
		"Second person's xp (??? / ",
		"Difference: ",
	};

	string calc_coin[]
	{
		//(4)Start Coin Calculator
		"...Enter the values...",
		"	Cop",
		"+Arrested Players: ",
		"	Thief",
		"+Robberies: ",
		"	Fisher",
		"+Fished: ",
		"	Miner",
		"+Collected Gold: ",
		"+Crystals Sold: ",
		" Yellow: ",
		" Blue: ",
		" Purple: ",
		" Green: ",
		" Red: ",
		"	Farmer",
		"+Sales: ",
		"+Fruits Sold: ",
		"	Chef",
		"+Served orders: ",
		" RESULTS",
		" Minimum: ",
		" Average: ",
		" Maximum: ",
		"!ERROR: ENTER A VALUE OF 0 OR GREATER!",
	};

	string coin_howto[]
	{
		//(5)How Does the Coin Calculator Work?
		"...How Does the Coin Calculator Work?...",
		" This program converts your statistics into money according to certain standards and calculates money you can have.",
		" It makes 3 types of calculation:",
		"+Minimum",
		"+Average",
		"+Maximum (Suspect Mode)",
		"...Values Per Unit...",
		" Minimum",
		"+Thief = 250$",
		"+Fisher = 120$ (in short term) , 169$ (in long term)",
		"+Farmer = 10$ (per seed) , 1$ (per fruit)",
		"+Chef = 400$",
		" Average",
		"+Thief = 463$",
		"+Fisher = 150$ (in short term) , 211$ (in long term)",
		"+Farmer = 53$ (per seed) , 15$ (per fruit)",
		"+Chef = 700$",
		" Maximum (Suspect Mode)",
		"+Thief = 1100$",
		"+Fisher = 254$",
		"+Farmer = 1300$ (per seed) , 200$ (per fruit)",
		"+Chef = 729$",
		"...Constants...",
		"+Cop = 150$",
		"+Miner:",
		" +Collected Gold = 115$",
		" +Yellow Crystal = 200$",
		" +Blue Crystal = 342$",
		" +Purple Crystal = 600$",
		" +Green Crystal = 800$",
		" +Red Crystal = 1200$",
	};

	string updatelog[]
	{
		//(9)Update Log
		"...Update Log...",
		" You can see the changes of every version.",
		"*Write the version number you want to see the changes and press ENTER.",
		"*Write M and press ENTER to go to Main Menu.",
		"	MYCITY XP CALCULATOR",
		"	MYCITY COIN CALCULATOR",
	};

	string about[]
	{
		//(A)About
		"	ABOUT",
		" Version 1.0.4.1 (English)",
		" [Release Date: 26.05.2024]",
		" Made by Emir Ünlü (@emirunlusoftware)",
		" https://github.com/emirunlusoftware",
		" English Translation by: ",//[TRANSLATION MADE BY:]
		"Emir Ünlü (@emirunlusoftware)",//[IF YOU TRANSLATED THIS SOFTWARE TO YOUR LANGUAGE, WRITE YOUR NAME HERE]
	};

	string v101[]
	{
		//1.0.1
		" (101)1.0.1",
		"...Changes in version 1.0.1...",
		"+Added 'Forward-looking Level Calculation' & 'Difference Between Two Levels' options.",
		"+A few changes in text layout.",
		"+Changed values:",
		"	Fisher",
		" Minimum (in short term): 125$--->120$",
		" Minimum (in long term): 239$--->169$",
		" Average (in long term): 253$--->211$",
	};

	string v102[]
	{
		//1.0.2
		" (102)1.0.2",
		"...Changes in version 1.0.2...",
		"+Added 'Update Log'.",
		"+Added 'About'.",
		"+Transit between XP Calculator and Coin Calculator.",
		"+Some calculation bugs are fixed.",
		"+Two in one! Now you can go to Mycity XP Calculator when you're in Coin calculator. They were separate apps until now! Changed a few things to make stable this pass.",
	};

	string v1021[]
	{
		//1.0.2.1
		" (1021)1.0.2.1",
		"...Changes in version 1.0.2.1...",
		"+Added backward-looking level calculation, that'll work for the season racers especially.",
		"+Typo fixes",
		//"+Changed values:" v101[4]
		"	Thief",
		" Maximum: 500$--->1100$",
		"	Farmer",
		" Maximum (per seed): 500$--->1300$",
		" Maximum (per fruit): 50$--->130$",
	};

	string v1022[]
	{
		//1.0.2.2
		" (1022)1.0.2.2",
		"...Changes in version 1.0.2.2...",
		"+When you enter level value smaller than 1 [C'MON, PLEASE!], the system will warn you and the calculation process won't start.",
		"+Now when the system wants your 'xp which is at the profile', you won't enter negative value of xp. Use 'Forward/Backward-looking level calculation' instead if you want to enter negative xp value.",
		//"+Typo fixes." v1021[3]
	};

	string v103[]
	{
		//1.0.3
		" (103)1.0.3",
		"...Changes in version 1.0.3...",
		"+Small changes in the codebase.",
		"+Added description to 'Difference Between Two Levels'.",
	};

	string v104[]
	{
		//1.0.4
		" (104)1.0.4",
		"...Changes in version 1.0.4...",
		"+All in one! Now XP & Coin calculators are in the same menu.",
		"+Translating this software is now easier, changed some things in the codebase to make this.",
		"+Press M for Main Menu, not B. And press R to retry, not T.",
		//"+A few changes in text layout." v101[3]
		//"+Typo fixes." v1021[3]
		//"+Changed values:" v101[4]
		//" Farmer" v1021[7]
		" Average (per fruit): 5$--->15$",
		" Maximum (per fruit): 130$--->200$",
		"	Miner",
		" Collected Gold: 110$--->115$",
	};

	string v1041[]
	{
		//1.0.4.1
		" (1041)1.0.4.1",
		"...Changes in version 1.0.4.1...",
		"+Now if you enter a character instead of number, the program won't crash anymore.",
		"+Some codebase improvements."
	};

	string extras[]
	{
		//Extras
		"Press enter to continue...",
	};