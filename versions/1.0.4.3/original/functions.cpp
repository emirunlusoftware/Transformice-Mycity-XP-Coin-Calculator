#include <iostream>
#include <string>
#include "dialogs_en.h"
#include "dialogs_tr.h"
#include "functions.h"

using std::cout;
using std::cin;
using std::string;


void cin_error(string& defective_input)
{
	cin.clear();
	defective_input = "";
}

bool isnumber(string param_input)
{
	bool i = 0;

	if (param_input.empty())
		return false;

	if (param_input[0] == '-')
	{
		if (param_input[1] == '\0')
			return false;
		i = 1;
	}

	for (char digit : param_input)
	{
		if (i == 1) {
			i = !i; continue;
		}

		if (!isdigit(digit))
			return false;
	}
	return true;
}

void xp_calculator(long long seviye, long long seviye2, long long xp, long long xp2, char method)
{
	long long toplam = (((seviye - 1) * seviye / 2) * 2000 + (seviye - 1) * 500) + xp;
	long long toplam2 = 0;

	switch (method)
	{
		case '1': /* (1)Find My Total XP */
		{
			cout << '\n' << dialogs.calc_xp[5] << toplam << "\n\n";
			break;
		}
		case '2': /* (2)Forward-Backward Calculation */
		{
			long long islem;
			int k = 1;
			toplam2 = toplam + xp2;
			for (; ;)
			{
				islem = (k * 2000) + 500;
				if (toplam2 < islem)
					break;
				toplam2 -= islem;
				k += 1;
			}
			cout << '\n' << dialogs.calc_xp[10] << k << " (" << toplam2 << "/" << islem << ")" << "\n\n";
			break;
		}
		case '3': /* (3)Difference Between Two Levels */
		{
			toplam2 = (((seviye2 - 1) * seviye2 / 2) * 2000 + (seviye2 - 1) * 500) + xp2;

			long long fark = (toplam2 - toplam) < 0 ? (toplam - toplam2) : (toplam2 - toplam);
			cout << '\n' << dialogs.calc_xp[16] << fark << " xp" << "\n\n";
			break;
		}
	}
}

bool coin_value(string &times)
{
	getline(cin, times);
	if (times.empty() || times.length() > 6 || !isnumber(times) || stoi(times) < 0 || stoi(times) > 999999)
	{
		cin_error(times);
		cout << "\n\n" << dialogs.calc_coin[24] << '\n';
		return 0;
	}
	else return 1;
}


Dialogs get_dialogs(Lang lang)
{
	if (lang == ENGLISH_EN)
	{
		return {
			menu_en,
			calc_xp_en,
			calc_coin_en,
			coin_howto_en,
			About_EN,
			Language_EN,
			UpdateLog_EN,
			Log_v101_EN,
			Log_v102_EN,
			Log_v1021_EN,
			Log_v1022_EN,
			Log_v103_EN,
			Log_v104_EN,
			Log_v1041_EN,
			Log_v1042_EN,
			Log_v1043_EN,
			extras_en
		};
	}
	else
	{
		return {
			menu_tr,
			calc_xp_tr,
			calc_coin_tr,
			coin_howto_tr,
			About_TR,
			Language_TR,
			UpdateLog_TR,
			Log_v101_TR,
			Log_v102_TR,
			Log_v1021_TR,
			Log_v1022_TR,
			Log_v103_TR,
			Log_v104_TR,
			Log_v1041_TR,
			Log_v1042_TR,
			Log_v1043_TR,
			extras_tr
		};
	}
}
Lang language = ENGLISH_EN;
Dialogs dialogs = get_dialogs(language);

void localization(int country_code)
{
	switch (country_code)
	{
		case (1): /* English(default) */
			setlocale(LC_ALL, "en_US.UTF-8");
			language = ENGLISH_EN;
			break;

		case (90): /* Turkish */
			setlocale(LC_ALL, "Turkish");
			language = TURKISH_TR;
			break;
	}

	dialogs = get_dialogs(language);
}