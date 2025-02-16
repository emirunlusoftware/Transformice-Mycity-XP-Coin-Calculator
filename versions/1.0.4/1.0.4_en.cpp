#include <iostream>
#include <conio.h>
using namespace std;
string dialog[]
{
	//Language: English
	//NOTE: INDENTS AT THE BEGINNING OF THESE TEXTS ARE IMPORTANT BECAUSE OF TEXT LAYOUT.

	//Main Menu
	{"		MYCITY XP & COIN CALCULATOR"},//Index 0
	{" (1)Find My Total Xp"},//Index 1
	{" (2)Forward/Backward-looking Level Calculation"},//Index 2
	{" (3)Difference Between Two Levels"},//Index 3
	{" (4)Start Coin Calculator"},//Index 4
	{" (5)How Does the Coin Calculator Work?"},//Index 5
	{" (9)Update Log"},//Index 6
	{" (A)About"},//Index 7
	{" (E)Exit"},//Index 8

	//(1)Find My Total Xp
	{"...This option shows you how many xp you've got so far..."},//Index 9
	{"Enter your level: "},//Index 10
	{"ERROR: The level you enter must be between 1 and 10000."},//Index 11
	{"Enter your xp which is at the profile (??? / "},//Index 12
	{"ERROR: XP value you enter cannot be negative."},//Index 13
	{"Total xp: "},//Index 14
	{" (R)Retry"},//Index 15
	{" (M)Main Menu"},//Index 16

	//(2)Forward/Backward-looking Level Calculation
	{"...Shows you what level you will be by adding/substracting XP..."},//Index 17
	{"How many xp you'll get in the future?"},//Index 18
	{"NOTE: Put MINUS SIGN if you want to go back and find your previous level at past.. "},//Index 19
	{"Level: "},//Index 20

	//(3)Difference Between Two Levels
	{"...Finds XP difference between two players which have different levels..."},//Index 21
	{"Enter the first person's level: "},//Index 22
	{"First person's xp (??? / "},//Index 23
	{"Enter the second person's level: "},//Index 24
	{"Second person's xp (??? / "},//Index 25
	{"Difference: "},//Index 26

	//(4)Start Coin Calculator
	{"...Enter the values..."},//Index 27
	{"	Cop"},//Index 28
	{"+Arrested Players: "},//Index 29
	{"	Thief"},//Index 30
	{"+Robberies: "},//Index 31
	{"	Fisher"},//Index 32
	{"+Fished: "},//Index 33
	{"	Miner"},//Index 34
	{"+Collected Gold: "},//Index 35
	{"+Crystals Sold: "},//Index 36
	{" Yellow: "},//Index 37
	{" Blue: "},//Index 38
	{" Purple: "},//Index 39
	{" Green: "},//Index 40
	{" Red: "},//Index 41
	{"	Farmer"},//Index 42
	{"+Sales: "},//Index 43
	{"+Fruits Sold: "},//Index 44
	{"	Chef"},//Index 45
	{"+Served orders: "},//Index 46
	{" Minimum: "},//Index 47
	{" Average: "},//Index 48
	{" Maximum: "},//Index 49

	//(5)How Does the Coin Calculator Work?
	{" This program converts your statistics into money according to certain standards and calculates money you can have."},//Index 50
	{" It makes 3 types of calculation:"},//Index 51
	{"+Minimum"},//Index 52
	{"+Average"},//Index 53
	{"+Maximum (Suspect Mode)"},//Index 54
	{"...Values Per Unit..."},//Index 55
	{" Minimum"},//Index 56
	{"+Thief = 250$"},//Index 57
	{"+Fisher = 120$ (in short term) , 169$ (in long term)"},//Index 58
	{"+Farmer = 10$ (per seed) , 1$ (per fruit)"},//Index 59
	{"+Chef = 400$"},//Index 60
	{" Average"},//Index 61
	{"+Thief = 463$"},//Index 62
	{"+Fisher = 150$ (in short term) , 211$ (in long term)"},//Index 63
	{"+Farmer = 53$ (per seed) , 15$ (per fruit)"},//Index 64
	{"+Chef = 700$"},//Index 65
	{" Maximum (Suspect Mode)"},//Index 66
	{"+Thief = 1100$"},//Index 67
	{"+Fisher = 254$"},//Index 68
	{"+Farmer = 1300$ (per seed) , 200$ (per fruit)"},//Index 69
	{"+Chef = 729$"},//Index 70
	{"...Constants..."},//Index 71
	{"+Cop = 150$"},//Index 72
	{"+Miner:"},//Index 73
	{" +Collected Gold = 115$"},//Index 74
	{" +Yellow Crystal = 200$"},//Index 75
	{" +Blue Crystal = 342$"},//Index 76
	{" +Purple Crystal = 600$"},//Index 77
	{" +Green Crystal = 800$"},//Index 78
	{" +Red Crystal = 1200$"},//Index 79

	//(9)Update Log
	{"...Update Log..."},//Index 80
	{" You can see the changes of every version."},//Index 81
	{"*Write the version number you want to see the changes and press ENTER."},//Index 82
	{"*Write M and press ENTER to go to Main Menu."},//Index 83
	{" (9)Go Back to Update Log"},//Index 84
	{"	MYCITY XP CALCULATOR"},//Index 85
	{"	MYCITY COIN CALCULATOR"},//Index 86

	//(A)About
	{"	ABOUT"},//Index 87
	{" Version 1.0.4 (English)"},//Index 88
	{" [Release Date: 18.05.2024]"},//Index 89
	{" Made by Emir Ünlü (@emirunlusoftware)"},//Index 90
	{" https://github.com/emirunlusoftware"},//Index 91
	{" English Translation by: "},//Index 92 [TRANSLATION MADE BY:]
	{"Emir Ünlü (@emirunlusoftware)"},//Index 93 [IF YOU TRANSLATED THIS SOFTWARE TO YOUR LANGUAGE, WRITE YOUR NAME HERE]

	//1.0.1
	{" (101)1.0.1"},//Index 94
	{"...Changes in version 1.0.1..."},//Index 95
	{"+Added 'Forward-looking Level Calculation' & 'Difference Between Two Levels' options."},//Index 96
	{"+A few changes in text layout."},//Index 97
	{"+Changed values:"},//Index 98
	{"	Fisher"},//Index 99
	{" Minimum (in short term): 125$--->120$"},//Index 100
	{" Minimum (in long term): 239$--->169$"},//Index 101
	{" Average (in long term): 253$--->211$"},//Index 102

	//1.0.2
	{" (102)1.0.2"},//Index 103
	{"...Changes in version 1.0.2..."},//Index 104
	{"+Added 'Update Log'."},//Index 105
	{"+Added 'About'."},//Index 106
	{"+Transit between XP Calculator and Coin Calculator."},//Index 107
	{"+Some calculation bugs are fixed."},//Index 108
	{"+Two in one! Now you can go to Mycity XP Calculator when you're in Coin calculator. They were separate apps until now! Changed a few things to make stable this pass."},//Index 109

	//1.0.2.1
	{" (1021)1.0.2.1"},//Index 110
	{"...Changes in version 1.0.2.1..."},//Index 111
	{"+Added backward-looking level calculation, that'll work for the season racers especially."},//Index 112
	{"+Typo fixes"},//Index 113
	//"+Changed values:" (Index 98)
	{"	Thief"},//Index 114
	{" Maximum: 500$--->1100$"},//Index 115
	{"	Farmer"},//Index 116
	{" Maximum (per seed): 500$--->1300$"},//Index 117
	{" Maximum (per fruit): 50$--->130$"},//Index 118

	//1.0.2.2
	{" (1022)1.0.2.2"},//Index 119
	{"...Changes in version 1.0.2.2..."},//Index 120
	{"+When you enter level value smaller than 1 [C'MON, PLEASE!], the system will warn you and the calculation process won't start."},//Index 121
	{"+Now when the system wants your 'xp which is at the profile', you won't enter negative value of xp. Use 'Forward/Backward-looking level calculation' instead if you want to enter negative xp value."},//Index 122
	//"+Typo fixes." (Index 113)

	//1.0.3
	{" (103)1.0.3"},//Index 123
	{"...Changes in version 1.0.3..."},//Index 124
	{"+Small changes in the codebase."},//Index 125
	{"+Added description to 'Difference Between Two Levels'."},//Index 126

	//1.0.4
	{" (104)1.0.4"},//Index 127
	{"...Changes in version 1.0.4..."},//Index 128
	{"+All in one! Now XP & Coin calculators are in the same menu."},//Index 129
	{"+Translating this software is now easier, changed some things in the codebase to make this."},//Index 130
	{"+Press M for Main Menu, not B. And press R to retry, not T."},//Index 131
	//"+A few changes in text layout." (Index 97)
	//"+Typo fixes." (Index 113)
	//"+Changed values:" (Index 98)
	//" Farmer" (Index 116)
	{" Average (per fruit): 5$--->15$"},//Index 132
	{" Maximum (per fruit): 130$--->200$"},//Index 133
	{"	Miner"},//Index 134
	{" Collected Gold: 110$--->115$"},//Index 135

	//Extras
	{"Press enter to continue..."},//Index 136
	{"...How Does the Coin Calculator Work?..."},//Index 137
	{" RESULTS"},//Index 138
};

void About()
{
	cout << endl << endl << dialog[87] << endl << endl << dialog[88] << endl << dialog[89] << endl << endl << dialog[90] << endl << dialog[91] << endl << endl << dialog[92] << dialog[93] << endl << endl;
	cout << dialog[16] << endl;
}

void UpdateLog()
{
	cout << endl << endl << dialog[80] << endl << endl << dialog[81] << endl << endl << dialog[82] << endl << dialog[83] << endl << endl;
	cout << dialog[127] << endl;
	cout << dialog[123] << endl;
	cout << dialog[119] << endl;
	cout << dialog[110] << endl;
	cout << dialog[103] << endl;
	cout << dialog[94] << endl << endl;
	cout << dialog[16] << endl;
}

int General_Function(int seviye, int seviye2, long long sonuc, long long sonuc2, long long toplam, long long toplam2, long long xp, long long xp2, long long islem, short int sayac)
{
	for (int i = 1; i < seviye; i++)
	{
		sonuc = (i * 2000) + 500;
		toplam += sonuc;
	}
	if (sayac == 1)
	{
		toplam2 = toplam + xp;
		cout << endl << dialog[14] << toplam2 << endl << endl;
	}
	else if (sayac == 2)
	{
		int k = 1;
		toplam2 = toplam + xp + xp2;
		for (; ;)
		{
			islem = (k * 2000) + 500;
			if (toplam2 < islem)
				break;
			toplam2 -= islem;
			k += 1;
		}
		cout << endl << dialog[20] << k << " (" << toplam2 << "/" << (k * 2000) + 500 << ")" << endl << endl;
	}
	else if (sayac == 3)
	{
		toplam += xp; toplam2 += xp2;
		for (int j = 1; j < seviye2; j++)
		{
			sonuc2 = (j * 2000) + 500;
			toplam2 += sonuc2;
		}
		long long fark;  fark = fabs(toplam2 - toplam);
		cout << endl << dialog[26] << fark << " xp" << endl << endl;
	}
	return 0;
}

int LvlMaxXP(int SvyMaxXp, int seviye)
{
	SvyMaxXp = (seviye * 2000) + 500;
	return SvyMaxXp;
}

int main()
{
	setlocale(LC_ALL, "Turkish"); string x;
	int seviye, seviye2; long long xp, xp2, min, avg, max, y;
main:
	cout << endl << endl << dialog[0] << endl << endl << dialog[1] << endl << dialog[2] << endl << dialog[3] << endl << endl << dialog[4] << endl << dialog[5] << endl << endl << dialog[6] << endl << dialog[7] << endl << dialog[8] << endl;
main_x:
	x = _getch();
	if (x == "1")//(1)Find My Total Xp
	{
	main1:
		cout << endl << endl << dialog[9] << endl << endl;
		xpTOTLevelError:
		cout << dialog[10];
		cin >> seviye;
		if (seviye < 1 || seviye > 10000)
		{
			cout << endl << dialog[11] << endl;
			goto xpTOTLevelError;
		}
		xpTOTValueError:
		cout << dialog[12] << LvlMaxXP(0, seviye) << "): ";
		cin >> xp;
		if (xp < 0)
		{
			cout << endl << dialog[13] << endl;
			goto xpTOTValueError;
		}
		General_Function(seviye, 0, 0, 0, 0, 0, xp, 0, 0, 1);
		cout << dialog[15] << endl << dialog[16] << endl;
	main11:
		x = _getch();
		if (x == "r" || x == "R")
			goto main1;
		else if (x == "m" || x == "M")
			goto main;
		else goto main11;
	}
	else if (x == "2")//(2)Forward/Backward-looking Level Calculation
	{
	main2:
		cout << endl << endl << dialog[17] << endl << endl;
		xpFWDBWDLevelError:
		cout << dialog[10];
		cin >> seviye;
		if (seviye < 1 || seviye > 10000)
		{
			cout << endl << dialog[11] << endl;
			goto xpFWDBWDLevelError;
		}
		xpFWDBWDValueError:
		cout << dialog[12] << LvlMaxXP(0, seviye) << "): ";
		cin >> xp;
		if (xp < 0)
		{
			cout << endl << dialog[13] << endl;
			goto xpFWDBWDValueError;
		}
		cout << dialog[18] << endl << dialog[19];
		cin >> xp2;
		General_Function(seviye, 0, 0, 0, 0, 0, xp, xp2, 0, 2);
		cout << dialog[15] << endl << dialog[16] << endl;
	main21:
		x = _getch();
		if (x == "r" || x == "R")
			goto main2;
		else if (x == "m" || x == "M")
			goto main;
		else goto main21;
	}
	else if (x == "3")//(3)Difference Between Two Levels
	{
	main3:
		cout << endl << endl << dialog[21] << endl << endl;
		xpDIFFLevel1Error:
		cout << dialog[22]; cin >> seviye;
		if (seviye < 1 || seviye > 10000)
		{
			cout << endl << dialog[11] << endl;
			goto xpDIFFLevel1Error;
		}
		xpDIFFValue1Error:
		cout << dialog[23] << LvlMaxXP(0, seviye) << "): "; cin >> xp;
		if (xp < 0)
		{
			cout << endl << dialog[13] << endl;
			goto xpDIFFValue1Error;
		}
		xpDIFFLevel2Error:
		cout << dialog[24]; cin >> seviye2;
		if (seviye2 < 1 || seviye > 10000)
		{
			cout << endl << dialog[11] << endl;
			goto xpDIFFLevel2Error;
		}
		xpDIFFValue2Error:
		cout << dialog[25] << LvlMaxXP(0, seviye2) << "): "; cin >> xp2;
		if (xp2 < 0)
		{
			cout << endl << dialog[13] << endl;
			goto xpDIFFValue2Error;
		}
		General_Function(seviye, seviye2, 0, 0, 0, 0, xp, xp2, 0, 3);
		cout << dialog[15] << endl << dialog[16] << endl;
	main31:
		x = _getch();
		if (x == "r" || x == "R")
			goto main3;
		else if (x == "m" || x == "M")
			goto main;
		else goto main31;
	}
	else if (x == "4")//(4)Start Coin Calculator
	{
		main4:
		cout << endl << endl << dialog[27] << endl << endl;
		cout << dialog[28] << endl << dialog[29];
		cin >> y;
		min = avg = max = 0;
		min += y * 150, avg += y * 150, max += y * 150;
		cout << endl << dialog[30] << endl << dialog[31];
		cin >> y;
		min += y * 250, avg += y * 463, max += y * 1100;
		cout << endl << dialog[32] << endl << dialog[33];
		cin >> y;
		if (y < 150)//If the player fished less than 150 fishes [We consider that the player hasn't fished a goldenmare yet.]
		{
			min += y * 120, avg += y * 150, max += y * 254;
		}
		else
		{
			min += y * 169, avg += y * 211, max += y * 254;
		}
		cout << endl << dialog[34] << endl << dialog[35];
		cin >> y;
		min += y * 115, avg += y * 115, max += y * 115;
		cout << endl << dialog[36] << endl << dialog[37];
		cin >> y;
		min += y * 200, avg += y * 200, max += y * 200;
		cout << dialog[38];
		cin >> y;
		min += y * 342, avg += y * 342, max += y * 342;
		cout << dialog[39];
		cin >> y;
		min += y * 600, avg += y * 600, max += y * 600;
		cout << dialog[40];
		cin >> y;
		min += y * 800, avg += y * 800, max += y * 800;
		cout << dialog[41];
		cin >> y;
		min += y * 1200, avg += y * 1200, max += y * 1200;
		cout << endl << dialog[42] << endl << dialog[43];
		cin >> y;
		min += y * 10, avg += y * 53, max += y * 1300;
		cout << dialog[44];
		cin >> y;
		min += y, avg += y * 15, max += y * 200;
		cout << endl << dialog[45] << endl << dialog[46];
		cin >> y;
		min += y * 400, avg += y * 700, max += y * 729;
		cout << endl << endl << dialog[138] << endl << dialog[47] << min << "$" << endl << dialog[48] << avg << "$" << endl << dialog[49] << max << "$" << endl << endl;
		cout << dialog[15] << endl << dialog[16] << endl;
	main41:
		x = _getch();
		if (x == "r" || x == "R")
			goto main4;
		else if (x == "m" || x == "M")
			goto main;
		else goto main41;
	}
	else if (x == "5")//(5)How Does the Coin Calculator Work?
	{
		cout << endl << endl << dialog[137] << endl << endl << dialog[50] << endl << dialog[51];
		cout << endl << endl << dialog[52] << endl << dialog[53] << endl << dialog[54] << endl << endl;
		cout << dialog[136] << endl;
	main5:
		x = _getch();
		if (x == "\r") {}
		else goto main5;
		cout << endl << dialog[55] << endl << endl << dialog[56] << endl;
		cout << dialog[57] << endl << dialog[58] << endl << dialog[59] << endl << dialog[60] << endl << endl;
		cout << dialog[61] << endl;
		cout << dialog[62] << endl << dialog[63] << endl << dialog[64] << endl << dialog[65] << endl << endl;
		cout << dialog[66] << endl;
		cout << dialog[67] << endl << dialog[68] << endl << dialog[69] << endl << dialog[70] << endl << endl;
		cout << dialog[136] << endl;
	main51:
		x = _getch();
		if (x == "\r") {}
		else goto main51;
		cout << endl << dialog[71] << endl << endl << dialog[72] << endl << dialog[73] << endl << dialog[74] << endl << dialog[75] << endl << dialog[76] << endl << dialog[77] << endl << dialog[78] << endl << dialog[79] << endl << endl;
		cout << dialog[16] << endl;
	main52:
		x = _getch();
		if (x == "m" || x == "M")
			goto main;
		else goto main52;
	}
	else if (x == "9")//(9)Update Log
	{
	update:
		UpdateLog();
	update_x:
		cin >> x;
		if (x == "m" || x == "M")
			goto main;
		else if (x == "101")
		{
			cout << endl << endl << dialog[95] << endl;
			cout << endl << endl << dialog[85] << endl << dialog[96];
			cout << endl << endl << dialog[86] << endl << dialog[105] << endl << dialog[97] << endl << dialog[98];
			cout << endl << endl << dialog[99] << endl << dialog[100] << endl << dialog[101] << endl << dialog[102];
			cout << endl << endl << dialog[84] << endl << dialog[16] << endl;
		v101:
			x = _getch();
			if (x == "9")
				goto update;
			else if (x == "m" || x == "M")
				goto main;
			else goto v101;
		}
		else if (x == "102")
		{
			cout << endl << endl << dialog[104] << endl;
			cout << endl << endl << dialog[85] << endl << dialog[105] << endl << dialog[106] << endl << dialog[107] << endl << dialog[108];
			cout << endl << endl << dialog[86] << endl << dialog[109];
			cout << endl << endl << dialog[84] << endl << dialog[16] << endl;
		v102:
			x = _getch();
			if (x == "9")
				goto update;
			else if (x == "m" || x == "M")
				goto main;
			else goto v102;
		}
		else if (x == "1021")
		{
			cout << endl << endl << dialog[111] << endl;
			cout << endl << endl << dialog[85] << endl << dialog[112];
			cout << endl << endl << dialog[86] << endl << dialog[113] << endl << dialog[98] << endl << endl << dialog[114] << endl << dialog[115];
			cout << endl << endl << dialog[116] << endl << dialog[117] << endl << dialog[118];
			cout << endl << endl << dialog[84] << endl << dialog[16] << endl;
		v1021:
			x = _getch();
			if (x == "9")
				goto update;
			else if (x == "m" || x == "M")
				goto main;
			else goto v1021;
		}
		else if (x == "1022")
		{
			cout << endl << endl << dialog[120] << endl;
			cout << endl << endl << dialog[85] << endl << dialog[121] << endl << dialog[122] << endl << dialog[113];
			cout << endl << endl << dialog[84] << endl << dialog[16] << endl;
		v1022:
			x = _getch();
			if (x == "9")
				goto update;
			else if (x == "m" || x == "M")
				goto main;
			else goto v1022;
		}
		else if (x == "103")
		{
			cout << endl << endl << dialog[124] << endl;
			cout << endl << endl << dialog[85] << endl << dialog[125] << endl << dialog[126];
			cout << endl << endl << dialog[84] << endl << dialog[16] << endl;
		v103:
			x = _getch();
			if (x == "9")
				goto update;
			else if (x == "m" || x == "M")
				goto main;
			else goto v103;
		}
		else if (x == "104")
		{
			cout << endl << endl << dialog[128] << endl;
			cout << endl << endl << dialog[129] << endl << dialog[130] << endl << dialog[131] << endl << dialog[97] << endl << dialog[113];
			cout << endl << endl << dialog[86] << endl << dialog[98] << endl << endl << dialog[116] << endl << dialog[132] << endl << dialog[133];
			cout << endl << endl << dialog[134] << endl << dialog[135];
			cout << endl << endl << dialog[84] << endl << dialog[16] << endl;
		v104:
			x = _getch();
			if (x == "9")
				goto update;
			else if (x == "m" || x == "M")
				goto main;
			else goto v104;
		}
		else goto update_x;
	}
	else if (x == "a" || x == "A")//(A)About
	{
		About();
	about:
		x = _getch();
		if (x == "m" || x == "M")
			goto main;
		else goto about;
	}
	else if (x == "e" || x == "E") {}//(E)Exit
	else goto main_x;
}