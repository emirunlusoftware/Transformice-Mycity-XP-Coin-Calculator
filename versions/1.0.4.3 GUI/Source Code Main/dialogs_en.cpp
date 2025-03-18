#include "main.h"





LPCWSTR menu_en[] =
{
	L"Find My Total XP",
	L"Forward/Backward\n-looking Level Calculation",
	L"Difference Between Two Levels",
	L"Start Coin Calculator",
	L"How Coin Calculator Works?",
	L"About",
	L"Update\nLog",
	L"Language",
	L"Calculate!",
	L"Main Menu",
};



LPCWSTR calc_en[] =
{
	/* [0] - [3] */
	L"...Shows you how many XP you've got so far...",
	L"...Shows you what level you'll be by adding/substracting XP...",
	L"...Finds XP difference between two players...",
	L"...Enter the stat values which are in your profile...",

	/* [4] - [7] */
	L"Enter your level",
	L"How much XP do you currently have?",
	L"Add XP",
	L"Substract XP",

	/* [8] - [11] */
	L"Player 1 Level",
	L"Player 1 XP",
	L"Player 2 Level",
	L"Player 2 XP",

	/* [12] - [13] */
	L"MUST BE GREATER THAN 0",
	L"MUST BE BETWEEN 0 AND %u",

	/* [14] - [25] */
	L"Arrested Players:",
	L"Robberies:",
	L"Fished:",
	L"Collected Gold:",
	L"Yellow Crystal:",
	L"Blue Crystal:",
	L"Purple Crystal:",
	L"Green Crystal:",
	L"Red Crystal:",
	L"Seeds sold:",
	L"Fruits sold:",
	L"Served orders:",

	/* [26] - [28] */
	L"Minimum",
	L"Average",
	L"Maximum",

	/* [29] - [31] */
	L"Total XP: %lld",
	L"Level: %d (%lld/%d)",
	L"Difference: %llu XP"
};



LPCWSTR coin_howto_en =
{
	/* How Coin Calculator Works? */
	L"...How Does the Coin Calculator Work?..."
	L"\r\n\r\n"
	L"This program converts your statistics into money according to certain standards and calculates money you can have."
	L"\r\n"
	L"It makes 3 types of calculation:"
	L"\r\n"
	L"+Minimum"
	L"\r\n"
	L"+Average"
	L"\r\n"
	L"+Maximum (Suspect Mode)"
	L"\r\n\r\n\r\n"
	L"...Values per Unit..."
	L"\r\n\r\n"
	L"-Minimum-"
	L"\r\n"
	L"+Thief = 250$"
	L"\r\n"
	L"+Fisher = 120$ (in short term) , 169$ (in long term)"
	L"\r\n"
	L"+Farmer = 10$ (per seed) , 1$ (per fruit)"
	L"\r\n"
	L"+Chef = 400$"
	L"\r\n\r\n"
	L"-Average-"
	L"\r\n"
	L"+Thief = 463$"
	L"\r\n"
	L"+Fisher = 150$ (in short term) , 211$ (in long term)"
	L"\r\n"
	L"+Farmer = 53$ (per seed) , 15$ (per fruit)"
	L"\r\n"
	L"+Chef = 700$"
	L"\r\n\r\n"
	L"-Maximum (Suspect Mode)-"
	L"\r\n"
	L"+Thief = 1100$"
	L"\r\n"
	L"+Fisher = 254$"
	L"\r\n"
	L"+Farmer = 1300$ (per seed) , 200$ (per fruit)"
	L"\r\n"
	L"+Chef = 729$"
	L"\r\n\r\n\r\n"
	L"...Constants..."
	L"\r\n"
	L"+Cop = 150$"
	L"\r\n"
	L"+Miner:"
	L"\r\n"
	L" +Collected Gold = 115$"
	L"\r\n"
	L" +Yellow Crystal = 200$"
	L"\r\n"
	L" +Blue Crystal = 342$"
	L"\r\n"
	L" +Purple Crystal = 600$"
	L"\r\n"
	L" +Green Crystal = 800$"
	L"\r\n"
	L" +Red Crystal = 1200$"
};



LPCWSTR updatelog_en[] =
{
	/* Update Log */
	L"Update Log",
	L"1.0.4.3\nInitial GUI version"
};



LPCWSTR about_en =

	/* About */
	L"Version 1.0.4.3"
	L"\n"
	L"[Release Date: 18.03.2025]"
	L"\n\n"
	L"Made by Emir Ünlü"
	L"\n"
	L"github.com/emirunlusoftware"
	L"\n\n"
	L"Translated by: Emir Ünlü"
;