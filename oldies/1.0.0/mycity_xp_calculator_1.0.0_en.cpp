#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int seviye, xp, sonuc, i, toplam;
	char y;
	cout << "       MYCITY TOTAL XP CALCULATOR" << endl << "This program shows you the total experience points you have achieved so far." << endl << "Write the number and press ENTER." << endl << endl;
r1:
	cout << "Write your current level:";
	cin >> seviye;
	toplam = 0;
	for (i = 1; i < seviye; i++)
	{
		sonuc = (i * 2000 + 500);
		toplam += sonuc;
	}
	cout << "Write the total amount of experience points shown on your profile:" << endl;
	cout << "   What is this:In your profile,you will see your level (e.g. 5) and xp (e.g. 2300/10500).10500 is the xp limit required to level up,2300 is how many xp you achieved while you were level (e.g. 5)." << endl;
	cin >> xp;
	int toplam2 = toplam + xp;
	cout << "Total xp=" << toplam2 << endl;
	cout << "(B) Try Again" << endl << "(E) Exit" << endl;
r2:
	y = _getch();
	if (y == 'B' || y == 'b')
		goto r1;
	else if (y == 'E' || y == 'e')
	{
	}
	else goto r2;
}