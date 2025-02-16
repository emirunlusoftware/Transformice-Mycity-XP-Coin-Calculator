#include <iostream>
#include "dialogs_en.h"


//Language: English
//NOTE: INDENTS AT THE BEGINNING OF THESE TEXTS ARE IMPORTANT BECAUSE OF TEXT LAYOUT.
const char* menu_en[]
{
	//Main Menu + Options
	"		MYCITY XP & COIN CALCULATOR",
	"(1)Find My Total Xp",
	"(2)Forward/Backward-looking Level Calculation",
	"(3)Difference Between Two Levels",
	"(4)Start Coin Calculator",
	"(5)How Does the Coin Calculator Work?",
	"(9)Update Log",
	"(A)About",
	"(E)Exit",
	"(R)Retry",
	"(M)Main Menu",
	"(9)Go Back to Update Log",
	"(L)Change Language"
};

const char* calc_xp_en[]
{
	//(1)Find My Total Xp
	"...This option shows you how many xp you've got so far...",
	"Enter your level: ",
	"!ERROR: THE LEVEL YOU ENTER MUST BE BETWEEN 1 AND 10000!",
	"Enter your xp which is at the profile (??? / ",
	"!ERROR: XP VALUE YOU ENTER MUST BE BETWEEN 0 AND ",
	"Total xp: ",

	//(2)Forward/Backward-looking Level Calculation
	"...Shows you what level you will be by adding/substracting XP...",
	"How many xp you'll get in the future?",
	"NOTE: Put MINUS SIGN if you want to go back and find your previous level at past.. ",
	"!ERROR: ENTER A VALUE BETWEEN -100.000.000.000 AND 100.000.000.000!",
	"Level: ",

	//(3)Difference Between Two Levels
	"...Finds XP difference between two players which have different levels...",
	"Enter the first person's level: ",
	"First person's xp (??? / ",
	"Enter the second person's level: ",
	"Second person's xp (??? / ",
	"Difference: ",
};

const char* calc_coin_en[]
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
	"RESULTS",
	"Minimum: ",
	"Average: ",
	"Maximum: ",
	"!ERROR: ENTER A VALUE BETWEEN 0 AND 999999!",
};

const char* coin_howto_en[]
{
	//(5)How Does the Coin Calculator Work?
	"...How Does the Coin Calculator Work?...",
	"This program converts your statistics into money according to certain standards and calculates money you can have.",
	"It makes 3 types of calculation:",
	"+Minimum",
	"+Average",
	"+Maximum (Suspect Mode)",
	"...Values Per Unit...",
	"-Minimum-",
	"+Thief = 250$",
	"+Fisher = 120$ (in short term) , 169$ (in long term)",
	"+Farmer = 10$ (per seed) , 1$ (per fruit)",
	"+Chef = 400$",
	"-Average-",
	"+Thief = 463$",
	"+Fisher = 150$ (in short term) , 211$ (in long term)",
	"+Farmer = 53$ (per seed) , 15$ (per fruit)",
	"+Chef = 700$",
	"-Maximum (Suspect Mode)-",
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

const char* updatelog_en[]
{
	//(9)Update Log
	"...Update Log...",
	"You can see the changes of every version.",
	"*Type the version number you want to see the changes and press ENTER.",
	"*Type M and press ENTER to go to Main Menu.",
	"	MYCITY XP CALCULATOR",
	"	MYCITY COIN CALCULATOR",
};

const char* v101_en[]
{
	//1.0.1
	"(101)1.0.1",
	"...Changes in version 1.0.1...",
	"+Added 'Forward-looking Level Calculation' & 'Difference Between Two Levels' options.",
	"+A few changes in text layout.",
	"+Changed values:",
	"	Fisher",
	"Minimum (in short term): 125$--->120$",
	"Minimum (in long term): 239$--->169$",
	"Average (in long term): 253$--->211$",
};

const char* v102_en[]
{
	//1.0.2
	"(102)1.0.2",
	"...Changes in version 1.0.2...",
	"+Added 'Update Log'.",
	"+Added 'About'.",
	"+Transit between XP Calculator and Coin Calculator.",
	"+Some calculation bugs are fixed.",
	"+Two in one! Now you can go to Mycity XP Calculator when you're in Coin calculator. They were separate apps until now! Changed a few things to make stable this pass.",
};

const char* v1021_en[]
{
	//1.0.2.1
	"(1021)1.0.2.1",
	"...Changes in version 1.0.2.1...",
	"+Added backward-looking level calculation, that'll work for the season racers especially.",
	"+Typo fixes",
	//"+Changed values:" v101[4]
	"	Thief",
	"Maximum: 500$--->1100$",
	"	Farmer",
	"Maximum (per seed): 500$--->1300$",
	"Maximum (per fruit): 50$--->130$",
};

const char* v1022_en[]
{
	//1.0.2.2
	"(1022)1.0.2.2",
	"...Changes in version 1.0.2.2...",
	"+When you enter level value smaller than 1 [C'MON, PLEASE!], the system will warn you and the calculation process won't start.",
	"+Now when the system wants your 'xp which is at the profile', you won't enter negative value of xp. Use 'Forward/Backward-looking level calculation' instead if you want to enter negative xp value.",
	//"+Typo fixes." v1021[3]
};

const char* v103_en[]
{
	//1.0.3
	"(103)1.0.3",
	"...Changes in version 1.0.3...",
	"+Small changes in the codebase.",
	"+Added description to 'Difference Between Two Levels'.",
};

const char* v104_en[]
{
	//1.0.4
	"(104)1.0.4",
	"...Changes in version 1.0.4...",
	"+All in one! Now XP & Coin calculators are in the same menu.",
	"+Translating this software is now easier, changed some things in the codebase to make this.",
	"+Press M for Main Menu, not B. And press R to retry, not T.",
	//"+A few changes in text layout." v101[3]
	//"+Typo fixes." v1021[3]
	//"+Changed values:" v101[4]
	//" Farmer" v1021[7]
	"Average (per fruit): 5$--->15$",
	"Maximum (per fruit): 130$--->200$",
	"	Miner",
	"Collected Gold: 110$--->115$",
};

const char* v1041_en[]
{
	//1.0.4.1
	"(1041)1.0.4.1",
	"...Changes in version 1.0.4.1...",
	"+Now if you enter a character instead of number, the program won't crash anymore.",
	"+Some codebase improvements."
};

const char* v1042_en[]
{
	//1.0.4.2
	"(1042)1.0.4.2",
	"...Changes in version 1.0.4.2...",
	"+Say goodbye to... 'Overflow'. This program'll always run securely, even if you really wanna crash it :)",
};

const char* v1043_en[]
{
	//1.0.4.3
	"(1043)1.0.4.3",
	"...Changes in version 1.0.4.3...",
	"+All languages are in one program. For now, two languages are available."
};

const char* vGeneral_en[]
{
	"+Bug fixes",
};

const char* extras_en[]
{
	//Extras
	"Press enter to continue...",
};



void About_EN(void)
{
	std::cout << "\n\n"
	<< "	ABOUT" << "\n\n"
	<< "Version 1.0.4.3 (English)" << '\n'
	<< "[Release Date : 16.02.2025]" << "\n\n"
	<< "Made by Emir Unlu(@emirunlusoftware)" << '\n'
	<< "github.com / emirunlusoftware" << "\n\n"
	<< "English Translation by : Emir Unlu (@emirunlusoftware)" << "\n\n"
	<< menu_en[10] << '\n';
}

void Language_EN(void)
{
	std::cout << "\n\n"
	<< "	CHANGE LANGUAGE" << "\n\n"
	<< "(1)English" << '\n'
	<< "(2)Turkish" << "\n\n"
	<< menu_en[10] << '\n';
}

void UpdateLog_EN(void)
{
	std::cout << "\n\n"
	<< updatelog_en[0] << "\n\n"
	<< updatelog_en[1] << "\n\n"
	<< updatelog_en[2] << '\n'
	<< updatelog_en[3] << "\n\n";

	std::cout
	<< v1043_en[0] << '\n'
	<< v1042_en[0] << '\n'
	<< v1041_en[0] << '\n'
	<< v104_en[0] << '\n'
	<< v103_en[0] << '\n'
	<< v1022_en[0] << '\n'
	<< v1021_en[0] << '\n'
	<< v102_en[0] << '\n'
	<< v101_en[0] << "\n\n"
	<< menu_en[10] << '\n';
}

void Log_v101_EN(void)
{
	std::cout << "\n\n" << v101_en[1] << '\n'
	<< "\n\n" << updatelog_en[4] << '\n' << v101_en[2]
	<< "\n\n" << updatelog_en[5] << '\n' << v102_en[2] << '\n' << v101_en[3] << '\n' << v101_en[4]
	<< "\n\n" << v101_en[5] << '\n' << v101_en[6] << '\n' << v101_en[7] << '\n' << v101_en[8]
	<< "\n\n" << menu_en[11] << '\n' << menu_en[10] << '\n';
}

void Log_v102_EN(void)
{
	std::cout << "\n\n" << v102_en[1] << '\n'
	<< "\n\n" << updatelog_en[4] << '\n' << v102_en[2] << '\n' << v102_en[3] << '\n' << v102_en[4] << '\n' << v102_en[5]
	<< "\n\n" << updatelog_en[5] << '\n' << v102_en[6]
	<< "\n\n" << menu_en[11] << '\n' << menu_en[10] << '\n';
}

void Log_v1021_EN(void)
{
	std::cout << "\n\n" << v1021_en[1] << '\n'
	<< "\n\n" << updatelog_en[4] << '\n' << v1021_en[2]
	<< "\n\n" << updatelog_en[5] << '\n' << v1021_en[3] << '\n' << v101_en[4] << "\n\n" << v1021_en[4] << '\n' << v1021_en[5]
	<< "\n\n" << v1021_en[6] << '\n' << v1021_en[7] << '\n' << v1021_en[8]
	<< "\n\n" << menu_en[11] << '\n' << menu_en[10] << '\n';
}

void Log_v1022_EN(void)
{
	std::cout << "\n\n" << v1022_en[1] << '\n'
	<< "\n\n" << updatelog_en[4] << '\n' << v1022_en[2] << '\n' << v1022_en[3] << '\n' << v1021_en[3]
	<< "\n\n" << menu_en[11] << '\n' << menu_en[10] << '\n';
}

void Log_v103_EN(void)
{
	std::cout << "\n\n" << v103_en[1] << '\n'
	<< "\n\n" << updatelog_en[4] << '\n' << v103_en[2] << '\n' << v103_en[3]
	<< "\n\n" << menu_en[11] << '\n' << menu_en[10] << '\n';
}

void Log_v104_EN(void)
{
	std::cout << "\n\n" << v104_en[1] << '\n'
	<< "\n\n" << v104_en[2] << '\n' << v104_en[3] << '\n' << v104_en[4] << '\n' << v101_en[3] << '\n' << v1021_en[3]
	<< "\n\n" << updatelog_en[5] << '\n' << v101_en[4] << "\n\n" << calc_coin_en[15] << '\n' << v104_en[5] << '\n' << v104_en[6]
	<< "\n\n" << v104_en[7] << '\n' << v104_en[8]
	<< "\n\n" << menu_en[11] << '\n' << menu_en[10] << '\n';
}

void Log_v1041_EN(void)
{
	std::cout << "\n\n" << v1041_en[1] << '\n'
	<< "\n\n" << v1041_en[2] << '\n' << v1041_en[3]
	<< "\n\n" << menu_en[11] << '\n' << menu_en[10] << '\n';
}

void Log_v1042_EN(void)
{
	std::cout << "\n\n" << v1042_en[1] << '\n'
	<< "\n\n" << v1042_en[2]
	<< "\n\n" << menu_en[11] << '\n' << menu_en[10] << '\n';
}

void Log_v1043_EN(void)
{
	std::cout << "\n\n"
	<< v1043_en[1] << "\n\n\n"
	<< v1043_en[2] << '\n'
	<< vGeneral_en[0] << "\n\n"
	<< menu_en[11] << '\n'
	<< menu_en[10] << '\n';
}