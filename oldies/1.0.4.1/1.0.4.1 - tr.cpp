#include <iostream>
#include <conio.h> //Necessary for _getch()
#include <limits> //Necessary for numeric_limits
#include <string> //Necessary for stoi() & stoll()
#include "dialogs_tr.h" //Brings dialog arrays here
using namespace std;

void About()
{
	cout << "\n\n" << about[0] << "\n\n" << about[1] << "\n" << about[2] << "\n\n" << about[3] << "\n" << about[4] << "\n\n" << about[5] << about[6] << "\n\n";
	cout << menu[10] << "\n";
}

void UpdateLog()
{
	cout << "\n\n" << updatelog[0] << "\n\n" << updatelog[1] << "\n\n" << updatelog[2] << "\n" << updatelog[3] << "\n\n";
	cout << v1041[0] << "\n";
	cout << v104[0] << "\n";
	cout << v103[0] << "\n";
	cout << v1022[0] << "\n";
	cout << v1021[0] << "\n";
	cout << v102[0] << "\n";
	cout << v101[0] << "\n\n";
	cout << menu[10] << "\n";
}

void General_Function(int seviye, int seviye2, long long sonuc, long long sonuc2, long long toplam, long long toplam2, long long xp, long long xp2, long long islem, int f)
{
	for (int i = 1; i < seviye; i++)
	{
		sonuc = (i * 2000) + 500;
		toplam += sonuc;
	}
	if (f == 1)
	{
		toplam2 = toplam + xp;
		cout << "\n" << calc_xp[5] << toplam2 << "\n\n";
	}
	else if (f == 2)
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
		cout << "\n" << calc_xp[10] << k << " (" << toplam2 << "/" << (k * 2000) + 500 << ")" << "\n\n";
	}
	else if (f == 3)
	{
		toplam += xp; toplam2 += xp2;
		for (int j = 1; j < seviye2; j++)
		{
			sonuc2 = (j * 2000) + 500;
			toplam2 += sonuc2;
		}
		long long fark;  fark = llabs((long long)(toplam2 - toplam));
		cout << "\n" << calc_xp[16] << fark << " xp" << "\n\n";
	}
}

int LvlMaxXP(int SvyMaxXp, int seviye)
{
	SvyMaxXp = (seviye * 2000) + 500;
	return SvyMaxXp;
}

bool isNumber(const string& str)
{
	size_t startIndex = 0;
	if (str[0] == '-')
	{
		if (str.length() == 1)
		{
			return 0;
		}
		startIndex = 1;
	}

	for (size_t i = startIndex; i < str.length(); i++)
		if (!isdigit(str[i]))
		{
			return 0;
		}
	return 1;
}

void cin_error()
{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void xp_error1()
{
	cin_error();
	cout << "\n" << calc_xp[2] << "\n";
}

void xp_error2()
{
	cin_error();
	cout << "\n" << calc_xp[4] << "\n";
}

void coin_error()
{
	cin_error();
	cout << "\n" << calc_coin[24] << "\n";
}

int main()
{
	setlocale(LC_ALL, ""); string x;
	int seviye, seviye2; long long xp, xp2, min, avg, max, y;
main:
	cout << "\n\n" << menu[0] << "\n\n" << menu[1] << "\n" << menu[2] << "\n" << menu[3] << "\n\n" << menu[4] << "\n" << menu[5] << "\n\n" << menu[6] << "\n" << menu[7] << "\n" << menu[8] << "\n";
main_x:
	x = _getch();
	if (x == "1")//(1)Find My Total Xp
	{
	main1:
		cout << "\n\n" << calc_xp[0] << "\n\n";
		while (1)
		{
			cout << calc_xp[1];
			cin >> x;
			if (!isNumber(x) || stoi(x) < 1 || stoi(x) > 10000)
			{
				xp_error1();
				continue;
			}
			seviye = stoi(x);
			break;
		}
		while (1)
		{
			cout << calc_xp[3] << LvlMaxXP(0, seviye) << "): ";
			cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				xp_error2();
				continue;
			}
			xp = stoll(x);
			break;
		}
		General_Function(seviye, 0, 0, 0, 0, 0, xp, 0, 0, 1);
		cout << menu[9] << "\n" << menu[10] << "\n";
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
		cout << "\n\n" << calc_xp[6] << "\n\n";
		while (1)
		{
			cout << calc_xp[1];
			cin >> x;
			if (!isNumber(x) || stoi(x) < 1 || stoi(x) > 10000)
			{
				xp_error1();
				continue;
			}
			seviye = stoi(x);
			break;
		}
		while (1)
		{
			cout << calc_xp[3] << LvlMaxXP(0, seviye) << "): ";
			cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				xp_error2();
				continue;
			}
			xp = stoll(x);
			break;
		}
		while (1)
		{
			cout << calc_xp[7] << "\n" << calc_xp[8];
			cin >> x;
			if (!isNumber(x))
			{
				cin_error();
				cout << "\n" << calc_xp[9] << "\n";
				continue;
			}
			xp2 = stoll(x);
			break;
		}
		General_Function(seviye, 0, 0, 0, 0, 0, xp, xp2, 0, 2);
		cout << menu[9] << "\n" << menu[10] << "\n";
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
		cout << "\n\n" << calc_xp[11] << "\n\n";
		while (1)
		{
			cout << calc_xp[12]; cin >> x;
			if (!isNumber(x) || stoi(x) < 1 || stoi(x) > 10000)
			{
				xp_error1();
				continue;
			}
			seviye = stoi(x);
			break;
		}
		while (1)
		{
			cout << calc_xp[13] << LvlMaxXP(0, seviye) << "): "; cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				xp_error2();
				continue;
			}
			xp = stoll(x);
			break;
		}
		while (1)
		{
			cout << calc_xp[14]; cin >> x;
			if (!isNumber(x) || stoi(x) < 1 || stoi(x) > 10000)
			{
				xp_error1();
				continue;
			}
			seviye2 = stoi(x);
			break;
		}
		while (1)
		{
			cout << calc_xp[15] << LvlMaxXP(0, seviye2) << "): "; cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				xp_error2();
				continue;
			}
			xp2 = stoll(x);
			break;
		}
		General_Function(seviye, seviye2, 0, 0, 0, 0, xp, xp2, 0, 3);
		cout << menu[9] << "\n" << menu[10] << "\n";
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
		cout << "\n\n" << calc_coin[0] << "\n";
		min = avg = max = 0;
		while (1)
		{
			cout << "\n" << calc_coin[1] << "\n" << calc_coin[2];
			cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				coin_error();
				continue;
			}
			y = stoll(x);
			break;
		}
		min += y * 150, avg += y * 150, max += y * 150;
		while (1)
		{
			cout << "\n" << calc_coin[3] << "\n" << calc_coin[4];
			cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				coin_error();
				continue;
			}
			y = stoll(x);
			break;
		}
		min += y * 250, avg += y * 463, max += y * 1100;
		while (1)
		{
			cout << "\n" << calc_coin[5] << "\n" << calc_coin[6];
			cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				coin_error();
				continue;
			}
			y = stoll(x);
			break;
		}
		if (y < 150)//If the player fished less than 150 fishes [We consider that the player hasn't fished a goldenmare yet.]
		{
			min += y * 120, avg += y * 150, max += y * 254;
		}
		else
		{
			min += y * 169, avg += y * 211, max += y * 254;
		}
		while (1)
		{
			cout << "\n" << calc_coin[7] << "\n" << calc_coin[8];
			cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				coin_error();
				continue;
			}
			y = stoll(x);
			break;
		}
		min += y * 115, avg += y * 115, max += y * 115;
		while (1)
		{
			cout << "\n" << calc_coin[9] << "\n" << calc_coin[10];
			cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				coin_error();
				continue;
			}
			y = stoll(x);
			break;
		}
		min += y * 200, avg += y * 200, max += y * 200;
		while (1)
		{
			cout << calc_coin[11];
			cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				coin_error();
				continue;
			}
			y = stoll(x);
			break;
		}
		min += y * 342, avg += y * 342, max += y * 342;
		while (1)
		{
			cout << calc_coin[12];
			cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				coin_error();
				continue;
			}
			y = stoll(x);
			break;
		}
		min += y * 600, avg += y * 600, max += y * 600;
		while (1)
		{
			cout << calc_coin[13];
			cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				coin_error();
				continue;
			}
			y = stoll(x);
			break;
		}
		min += y * 800, avg += y * 800, max += y * 800;
		while (1)
		{
			cout << calc_coin[14];
			cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				coin_error();
				continue;
			}
			y = stoll(x);
			break;
		}
		min += y * 1200, avg += y * 1200, max += y * 1200;
		while (1)
		{
			cout << "\n" << calc_coin[15] << "\n" << calc_coin[16];
			cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				coin_error();
				continue;
			}
			y = stoll(x);
			break;
		}
		min += y * 10, avg += y * 53, max += y * 1300;
		while (1)
		{
			cout << calc_coin[17];
			cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				coin_error();
				continue;
			}
			y = stoll(x);
			break;
		}
		min += y, avg += y * 15, max += y * 200;
		while (1)
		{
			cout << "\n" << calc_coin[18] << "\n" << calc_coin[19];
			cin >> x;
			if (!isNumber(x) || stoll(x) < 0)
			{
				coin_error();
				continue;
			}
			y = stoll(x);
			break;
		}
		min += y * 400, avg += y * 700, max += y * 729;
		cout << "\n\n" << calc_coin[20] << "\n" << calc_coin[21] << min << "$" << "\n" << calc_coin[22] << avg << "$" << "\n" << calc_coin[23] << max << "$" << "\n\n";
		cout << menu[9] << "\n" << menu[10] << "\n";
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
		cout << "\n\n" << coin_howto[0] << "\n\n" << coin_howto[1] << "\n" << coin_howto[2];
		cout << "\n\n" << coin_howto[3] << "\n" << coin_howto[4] << "\n" << coin_howto[5] << "\n\n";
		cout << extras[0] << "\n";
	main5:
		x = _getch();
		if (x == "\r") {}
		else goto main5;
		cout << "\n" << coin_howto[6] << "\n\n" << coin_howto[7] << "\n";
		cout << coin_howto[8] << "\n" << coin_howto[9] << "\n" << coin_howto[10] << "\n" << coin_howto[11] << "\n\n";
		cout << coin_howto[12] << "\n";
		cout << coin_howto[13] << "\n" << coin_howto[14] << "\n" << coin_howto[15] << "\n" << coin_howto[16] << "\n\n";
		cout << coin_howto[17] << "\n";
		cout << coin_howto[18] << "\n" << coin_howto[19] << "\n" << coin_howto[20] << "\n" << coin_howto[21] << "\n\n";
		cout << extras[0] << "\n";
	main51:
		x = _getch();
		if (x == "\r") {}
		else goto main51;
		cout << "\n" << coin_howto[22] << "\n\n" << coin_howto[23] << "\n" << coin_howto[24] << "\n" << coin_howto[25] << "\n" << coin_howto[26] << "\n" << coin_howto[27] << "\n" << coin_howto[28] << "\n" << coin_howto[29] << "\n" << coin_howto[30] << "\n\n";
		cout << menu[10] << "\n";
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
			cout << "\n\n" << v101[1] << "\n";
			cout << "\n\n" << updatelog[4] << "\n" << v101[2];
			cout << "\n\n" << updatelog[5] << "\n" << v102[2] << "\n" << v101[3] << "\n" << v101[4];
			cout << "\n\n" << v101[5] << "\n" << v101[6] << "\n" << v101[7] << "\n" << v101[8];
			cout << "\n\n" << menu[11] << "\n" << menu[10] << "\n";
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
			cout << "\n\n" << v102[1] << "\n";
			cout << "\n\n" << updatelog[4] << "\n" << v102[2] << "\n" << v102[3] << "\n" << v102[4] << "\n" << v102[5];
			cout << "\n\n" << updatelog[5] << "\n" << v102[6];
			cout << "\n\n" << menu[11] << "\n" << menu[10] << "\n";
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
			cout << "\n\n" << v1021[1] << "\n";
			cout << "\n\n" << updatelog[4] << "\n" << v1021[2];
			cout << "\n\n" << updatelog[5] << "\n" << v1021[3] << "\n" << v101[4] << "\n\n" << v1021[4] << "\n" << v1021[5];
			cout << "\n\n" << v1021[6] << "\n" << v1021[7] << "\n" << v1021[8];
			cout << "\n\n" << menu[11] << "\n" << menu[10] << "\n";
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
			cout << "\n\n" << v1022[1] << "\n";
			cout << "\n\n" << updatelog[4] << "\n" << v1022[2] << "\n" << v1022[3] << "\n" << v1021[3];
			cout << "\n\n" << menu[11] << "\n" << menu[10] << "\n";
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
			cout << "\n\n" << v103[1] << "\n";
			cout << "\n\n" << updatelog[4] << "\n" << v103[2] << "\n" << v103[3];
			cout << "\n\n" << menu[11] << "\n" << menu[10] << "\n";
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
			cout << "\n\n" << v104[1] << "\n";
			cout << "\n\n" << v104[2] << "\n" << v104[3] << "\n" << v104[4] << "\n" << v101[3] << "\n" << v1021[3];
			cout << "\n\n" << updatelog[5] << "\n" << v101[4] << "\n\n" << calc_coin[15] << "\n" << v104[5] << "\n" << v104[6];
			cout << "\n\n" << v104[7] << "\n" << v104[8];
			cout << "\n\n" << menu[11] << "\n" << menu[10] << "\n";
		v104:
			x = _getch();
			if (x == "9")
				goto update;
			else if (x == "m" || x == "M")
				goto main;
			else goto v104;
		}
		else if (x == "1041")
		{
			cout << "\n\n" << v1041[1] << "\n";
			cout << "\n\n" << v1041[2] << "\n" << v1041[3];
			cout << "\n\n" << menu[11] << "\n" << menu[10] << "\n";
		v1041:
			x = _getch();
			if (x == "9")
				goto update;
			else if (x == "m" || x == "M")
				goto main;
			else goto v1041;
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