#include <iostream>
#include <conio.h>	//Necessary for _getch()
#include <string>

#include "functions.h"  //Library of created functions
#include "dialogs_en.h" //English translation (default)
#include "dialogs_tr.h" //Turkish translation
//#include "dialogs_xx.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::stoi;
using std::stoll;


int main()
{
	setlocale(LC_ALL, "en_US.UTF-8");

	unsigned char option; string input = "";
	long long seviye = 0, seviye2 = 0, xp = 0, xp2 = 0, min = 0, avg = 0, max = 0;

main:
	cout << "\n\n" << dialogs.menu[0] << "\n\n" << dialogs.menu[1] << '\n' << dialogs.menu[2] << '\n' << dialogs.menu[3] << "\n\n" << dialogs.menu[4] << '\n' << dialogs.menu[5] << "\n\n" << dialogs.menu[6] << '\n' << dialogs.menu[7] << '\n' << dialogs.menu[12] << '\n' << dialogs.menu[8] << '\n';
main_x:
	option = (unsigned char)_getch();

	/* (1)Find My Total Xp */
	if (option == '1')
	{
	main1:
		cout << "\n\n" << dialogs.calc_xp[0] << "\n\n";

		while(true)
		{
			cout << dialogs.calc_xp[1];
			getline(cin,input);
			if (input.length() > 5 || !isnumber(input) || stoi(input) < 1 || stoi(input) > 10000)
			{
				cin_error(input);
				cout << '\n' << dialogs.calc_xp[2] << endl;
				continue;
			}
			seviye = stoi(input);
			break;
		}
		while(true)
		{
			cout << dialogs.calc_xp[3] << (seviye * 2000) + 500 << "): ";
			getline(cin,input);
			if (input.length() > 8 || !isnumber(input) || stoi(input) < 0 || stoi(input) > (seviye * 2000) + 500)
			{
				cin_error(input);
				cout << '\n' << dialogs.calc_xp[4] << (seviye * 2000) + 500 << "!" << endl;
				continue;
			}
			xp = stoi(input);
			break;
		}

		xp_calculator(seviye, 0, xp, 0, '1');
		cout << dialogs.menu[9] << '\n' << dialogs.menu[10] << '\n';
		do
		{
			option = (unsigned char)_getch();
			if (option == 'r' || option == 'R')
				goto main1;
		} while (option != 'm' && option != 'M');
		goto main;
	}

	/* (2)Forward/Backward-looking Level Calculation */
	else if (option == '2')
	{
	main2:
		cout << "\n\n" << dialogs.calc_xp[6] << "\n\n";
		while (true)
		{
			cout << dialogs.calc_xp[1];
			getline(cin,input);
			if (input.length() > 5 || !isnumber(input) || stoi(input) < 1 || stoi(input) > 10000)
			{
				cin_error(input);
				cout << '\n' << dialogs.calc_xp[2] << endl;
				continue;
			}
			seviye = stoi(input);
			break;
		}
		while (true)
		{
			cout << dialogs.calc_xp[3] << (seviye * 2000) + 500 << "): ";
			getline(cin,input);
			if (input.length() > 8 || !isnumber(input) || stoi(input) < 0 || stoi(input) > (seviye * 2000) + 500)
			{
				cin_error(input);
				cout << '\n' << dialogs.calc_xp[4] << (seviye * 2000) + 500 << "!" << endl;
				continue;
			}
			xp = stoi(input);
			break;
		}
		while (1)
		{
			cout << dialogs.calc_xp[7] << '\n' << dialogs.calc_xp[8];
			getline(cin,input);
			if (input.length() > 13 || !isnumber(input) ||  stoll(input) < -100000000000 || stoll(input) > 100000000000)
			{
				cin_error(input);
				cout << '\n' << dialogs.calc_xp[9] << '\n';
				continue;
			}
			xp2 = stoll(input);
			break;
		}
		xp_calculator(seviye, 0, xp, xp2, '2');
		cout << dialogs.menu[9] << '\n' << dialogs.menu[10] << '\n';
		do
		{
			option = (unsigned char)_getch();
			if (option == 'r' || option == 'R')
				goto main2;
		} while (option != 'm' && option != 'M');
		goto main;
	}

	/* (3)Difference Between Two Levels */
	else if (option == '3')
	{
	main3:
		cout << "\n\n" << dialogs.calc_xp[11] << "\n\n";
		while (1)
		{
			cout << dialogs.calc_xp[12];
			getline(cin,input);
			if (input.length() > 4 || !isnumber(input) || stoi(input) < 1 || stoi(input) > 10000)
			{
				cin_error(input);
				cout << '\n' << dialogs.calc_xp[2] << endl;
				continue;
			}
			seviye = stoi(input);
			break;
		}
		while (1)
		{
			cout << dialogs.calc_xp[13] << (seviye * 2000) + 500 << "): ";
			getline(cin,input);
			if (input.length() > 8 || !isnumber(input) || stoi(input) < 0 || stoi(input) > (seviye * 2000) + 500)
			{
				cin_error(input);
				cout << '\n' << dialogs.calc_xp[4] << (seviye * 2000) + 500 << "!" << endl;
				continue;
			}
			xp = stoi(input);
			break;
		}
		while (1)
		{
			cout << dialogs.calc_xp[14];
			getline(cin,input);
			if (input.length() > 4 || !isnumber(input) || stoi(input) < 1 || stoi(input) > 10000)
			{
				cin_error(input);
				cout << '\n' << dialogs.calc_xp[2] << endl;
				continue;
			}
			seviye2 = stoi(input);
			break;
		}
		while (1)
		{
			cout << dialogs.calc_xp[15] << (seviye2 * 2000) + 500 << "): ";
			getline(cin,input);
			if (input.length() > 8 || !isnumber(input) || stoi(input) < 0 || stoi(input) > (seviye2 * 2000) + 500)
			{
				cin_error(input);
				cout << '\n' << dialogs.calc_xp[4] << (seviye2 * 2000) + 500 << "!" << endl;
				continue;
			}
			xp2 = stoi(input);
			break;
		}
		xp_calculator(seviye, seviye2, xp, xp2, '3');
		cout << dialogs.menu[9] << '\n' << dialogs.menu[10] << '\n';
		do
		{
			option = (unsigned char)_getch();
			if (option == 'r' || option == 'R')
				goto main3;
		} while (option != 'm' && option != 'M');
		goto main;
	}

	/* (4)Start Coin Calculator */
	else if (option == '4')
	{
	main4:
		cout << "\n\n" << dialogs.calc_coin[0] << '\n';
		min = 0, avg = 0, max = 0;

		while(true)
		{
			cout << '\n' << dialogs.calc_coin[1] << '\n' << dialogs.calc_coin[2];
			if (coin_value(input) == 0)
				continue;
			min = avg = max = stoll(input) * 150;

			break;
		}
		while(true)
		{
			cout << '\n' << dialogs.calc_coin[3] << '\n' << dialogs.calc_coin[4];
			if (coin_value(input) == 0)
				continue;
			min += stoll(input) * 250;
			avg += stoll(input) * 463;
			max += stoll(input) * 1100;

			break;
		}
		while(true)
		{
			cout << '\n' << dialogs.calc_coin[5] << '\n' << dialogs.calc_coin[6];
			if (coin_value(input) == 0)
				continue;

			/* If the player fished less than 150 fishes [We consider that the player hasn't fished a goldenmare yet.] */
			if (stoll(input) < 150)
			{
				min += stoll(input) * 120;
				avg += stoll(input) * 150;
				max += stoll(input) * 254;
			}
			else
			{
				min += stoll(input) * 169;
				avg += stoll(input) * 211;
				max += stoll(input) * 254;
			}

			break;
		}
		while(true)
		{
			cout << '\n' << dialogs.calc_coin[7] << '\n' << dialogs.calc_coin[8];
			if (coin_value(input) == 0)
				continue;
			min += stoll(input) * 115;
			avg += stoll(input) * 115;
			max += stoll(input) * 115;

			break;
		}

		cout << '\n' << dialogs.calc_coin[9];
		while(true)
		{
			cout << '\n' << dialogs.calc_coin[10];
			if (coin_value(input) == 0)
				continue;
			min += stoll(input) * 200;
			avg += stoll(input) * 200;
			max += stoll(input) * 200;

			break;
		}
		while(true)
		{
			cout << dialogs.calc_coin[11];
			if (coin_value(input) == 0)
				continue;
			min += stoll(input) * 342;
			avg += stoll(input) * 342;
			max += stoll(input) * 342;

			break;
		}
		while(true)
		{
			cout << dialogs.calc_coin[12];
			if (coin_value(input) == 0)
				continue;
			min += stoll(input) * 600;
			avg += stoll(input) * 600;
			max += stoll(input) * 600;

			break;
		}
		while(true)
		{
			cout << dialogs.calc_coin[13];
			if (coin_value(input) == 0)
				continue;
			min += stoll(input) * 800;
			avg += stoll(input) * 800;
			max += stoll(input) * 800;

			break;
		}
		while(true)
		{
			cout << dialogs.calc_coin[14];
			if (coin_value(input) == 0)
				continue;
			min += stoll(input) * 1200;
			avg += stoll(input) * 1200;
			max += stoll(input) * 1200;

			break;
		}
		while(true)
		{
			cout << '\n' << dialogs.calc_coin[15] << '\n' << dialogs.calc_coin[16];
			if (coin_value(input) == 0)
				continue;
			min += stoll(input) * 10;
			avg += stoll(input) * 53;
			max += stoll(input) * 1300;

			break;
		}
		while(true)
		{
			cout << dialogs.calc_coin[17];
			if (coin_value(input) == 0)
				continue;
			min += stoll(input);
			avg += stoll(input) * 15;
			max += stoll(input) * 200;

			break;
		}
		while(true)
		{
			cout << '\n' << dialogs.calc_coin[18] << '\n' << dialogs.calc_coin[19];
			if (coin_value(input) == 0)
				continue;
			min += stoll(input) * 400;
			avg += stoll(input) * 700;
			max += stoll(input) * 729;

			break;
		}

		cout << "\n\n" << dialogs.calc_coin[20] << '\n' << dialogs.calc_coin[21] << min << "$" << '\n' << dialogs.calc_coin[22] << avg << "$" << '\n' << dialogs.calc_coin[23] << max << "$" << "\n\n";
		cout << dialogs.menu[9] << '\n' << dialogs.menu[10] << '\n';
		do
		{
			option = (unsigned char)_getch();
			if (option == 'r' || option == 'R')
				goto main4;
		} while (option != 'm' && option != 'M');
		goto main;
	}

	/* (5)How Does the Coin Calculator Work? */
	else if (option == '5')
	{
		cout << "\n\n" << dialogs.coin_howto[0] << "\n\n" << dialogs.coin_howto[1] << '\n' << dialogs.coin_howto[2]
		<< "\n\n" << dialogs.coin_howto[3] << '\n' << dialogs.coin_howto[4] << '\n' << dialogs.coin_howto[5] << "\n\n";
		cout << dialogs.extras[0] << '\n';

		do option = (unsigned char)_getch(); while (option != '\r');

		cout << '\n' << dialogs.coin_howto[6] << "\n\n" << dialogs.coin_howto[7] << '\n'
		<< dialogs.coin_howto[8] << '\n' << dialogs.coin_howto[9] << '\n' << dialogs.coin_howto[10] << '\n' << dialogs.coin_howto[11] << "\n\n"
		<< dialogs.coin_howto[12] << '\n'
		<< dialogs.coin_howto[13] << '\n' << dialogs.coin_howto[14] << '\n' << dialogs.coin_howto[15] << '\n' << dialogs.coin_howto[16] << "\n\n"
		<< dialogs.coin_howto[17] << '\n'
		<< dialogs.coin_howto[18] << '\n' << dialogs.coin_howto[19] << '\n' << dialogs.coin_howto[20] << '\n' << dialogs.coin_howto[21] << "\n\n"
		<< dialogs.extras[0] << '\n';

		do option = (unsigned char)_getch(); while (option != '\r');
		cout << '\n' << dialogs.coin_howto[22] << "\n\n" << dialogs.coin_howto[23] << '\n' << dialogs.coin_howto[24] << '\n' << dialogs.coin_howto[25] << '\n'
		<< dialogs.coin_howto[26] << '\n' << dialogs.coin_howto[27] << '\n' << dialogs.coin_howto[28] << '\n' << dialogs.coin_howto[29] << '\n' << dialogs.coin_howto[30] << "\n\n";
		cout << dialogs.menu[10] << '\n';

		do option = (unsigned char)_getch(); while (option != 'm' && option != 'M');
		goto main;
	}

	/* (9)Update Log */
	else if (option == '9')
	{
	update:
		dialogs.updateLog();
	update_x:
		getline(cin,input);
		if (input == "m" || input == "M")
			goto main;
		else if (input == "101")
		{
			dialogs.log_v101();
			do
			{
				option = (unsigned char)_getch();
				if (option == '9')
					goto update;
			} while (option != 'm' && option != 'M');
			goto main;
		}
		else if (input == "102")
		{
			dialogs.log_v102();
			do
			{
				option = (unsigned char)_getch();
				if (option == '9')
					goto update;
			} while (option != 'm' && option != 'M');
			goto main;
		}
		else if (input == "1021")
		{
			dialogs.log_v1021();
			do
			{
				option = (unsigned char)_getch();
				if (option == '9')
					goto update;
			} while (option != 'm' && option != 'M');
			goto main;
		}
		else if (input == "1022")
		{
			dialogs.log_v1022();
			do
			{
				option = (unsigned char)_getch();
				if (option == '9')
					goto update;
			} while (option != 'm' && option != 'M');
			goto main;
		}
		else if (input == "103")
		{
			dialogs.log_v103();
			do
			{
				option = (unsigned char)_getch();
				if (option == '9')
					goto update;
			} while (option != 'm' && option != 'M');
			goto main;
		}
		else if (input == "104")
		{
			dialogs.log_v104();
			do
			{
				option = (unsigned char)_getch();
				if (option == '9')
					goto update;
			} while (option != 'm' && option != 'M');
			goto main;
		}
		else if (input == "1041")
		{
			dialogs.log_v1041();
			do
			{
				option = (unsigned char)_getch();
				if (option == '9')
					goto update;
			} while (option != 'm' && option != 'M');
			goto main;
		}
		else if (input == "1042")
		{
			dialogs.log_v1042();
			do
			{
				option = (unsigned char)_getch();
				if (option == '9')
					goto update;
			} while (option != 'm' && option != 'M');
			goto main;
		}
		else if (input == "1043")
		{
			dialogs.log_v1043();
			do
			{
				option = (unsigned char)_getch();
				if (option == '9')
					goto update;
			} while (option != 'm' && option != 'M');
			goto main;
		}
		else goto update_x;
	}

	/* (A)About */
	else if (option == 'a' || option == 'A')
	{
		dialogs.about();
		do option = (unsigned char)_getch(); while (option != 'm' && option != 'M');
		goto main;
	}

	/* (L)Change Language */
	else if (option == 'l' || option == 'L')
	{
		dialogs.language();
		do {
			option = (unsigned char)_getch();
			if (option == '1') {
				localization(1); break;
			}
			else if (option == '2') {
				localization(90); break;
			}

		} while (option != 'm' && option != 'M');
		goto main;
	}

	/* (E)Exit */
	else if (option == 'e' || option == 'E')
		return 0;

	else goto main_x;
}