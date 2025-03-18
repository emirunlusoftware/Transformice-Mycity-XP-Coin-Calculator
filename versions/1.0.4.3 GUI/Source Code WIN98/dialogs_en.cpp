#include "main.h"





LPCSTR menu_en[] =
{
	"Find My Total XP",
	"Forward/Backward\n-looking Level Calculation",
	"Difference Between Two Levels",
	"Start Coin Calculator",
	"How Coin Calculator Works?",
	"About",
	"Update\nLog",
	"Language",
	"Calculate!",
	"Main Menu",
};



LPCSTR calc_en[] =
{
	/* [0] - [3] */
	"...Shows you how many XP you've got so far...",
	"...Shows you what level you'll be by adding/substracting XP...",
	"...Finds XP difference between two players...",
	"...Enter the stat values which are in your profile...",

	/* [4] - [7] */
	"Enter your level",
	"How much XP do you currently have?",
	"Add XP",
	"Substract XP",

	/* [8] - [11] */
	"Player 1 Level",
	"Player 1 XP",
	"Player 2 Level",
	"Player 2 XP",

	/* [12] - [13] */
	"MUST BE GREATER THAN 0",
	"MUST BE BETWEEN 0 AND %u",

	/* [14] - [25] */
	"Arrested Players:",
	"Robberies:",
	"Fished:",
	"Collected Gold:",
	"Yellow Crystal:",
	"Blue Crystal:",
	"Purple Crystal:",
	"Green Crystal:",
	"Red Crystal:",
	"Seeds sold:",
	"Fruits sold:",
	"Served orders:",

	/* [26] - [28] */
	"Minimum",
	"Average",
	"Maximum",

	/* [29] - [31] */
	"Total XP: %lld",
	"Level: %d (%lld/%d)",
	"Difference: %llu XP"
};



LPCSTR coin_howto_en =
{
	/* How Coin Calculator Works? */
	"...How Does the Coin Calculator Work?..."
	"\r\n\r\n"
	"This program converts your statistics into money according to certain standards and calculates money you can have."
	"\r\n"
	"It makes 3 types of calculation:"
	"\r\n"
	"+Minimum"
	"\r\n"
	"+Average"
	"\r\n"
	"+Maximum (Suspect Mode)"
	"\r\n\r\n\r\n"
	"...Values per Unit..."
	"\r\n\r\n"
	"-Minimum-"
	"\r\n"
	"+Thief = 250$"
	"\r\n"
	"+Fisher = 120$ (in short term) , 169$ (in long term)"
	"\r\n"
	"+Farmer = 10$ (per seed) , 1$ (per fruit)"
	"\r\n"
	"+Chef = 400$"
	"\r\n\r\n"
	"-Average-"
	"\r\n"
	"+Thief = 463$"
	"\r\n"
	"+Fisher = 150$ (in short term) , 211$ (in long term)"
	"\r\n"
	"+Farmer = 53$ (per seed) , 15$ (per fruit)"
	"\r\n"
	"+Chef = 700$"
	"\r\n\r\n"
	"-Maximum (Suspect Mode)-"
	"\r\n"
	"+Thief = 1100$"
	"\r\n"
	"+Fisher = 254$"
	"\r\n"
	"+Farmer = 1300$ (per seed) , 200$ (per fruit)"
	"\r\n"
	"+Chef = 729$"
	"\r\n\r\n\r\n"
	"...Constants..."
	"\r\n"
	"+Cop = 150$"
	"\r\n"
	"+Miner:"
	"\r\n"
	" +Collected Gold = 115$"
	"\r\n"
	" +Yellow Crystal = 200$"
	"\r\n"
	" +Blue Crystal = 342$"
	"\r\n"
	" +Purple Crystal = 600$"
	"\r\n"
	" +Green Crystal = 800$"
	"\r\n"
	" +Red Crystal = 1200$"
};



LPCSTR updatelog_en[] =
{
	/* Update Log */
	"Update Log",
	"1.0.4.3\nInitial GUI version"
};



LPCSTR about_en =

	/* About */
	"Version 1.0.4.3"
	"\n"
	"[Release Date: 18.03.2025]"
	"\n\n"
	"Made by Emir Ünlü"
	"\n"
	"github.com/emirunlusoftware"
	"\n\n"
	"Translated by: Emir Ünlü"
;