#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int seviye, xp, sonuc, i, toplam;
	char y;
	cout << "       MYCITY TOPLAM XP HESAPLAMA PROGRAMI" << endl << "Bu program þu ana kadar edindiðiniz xp sayýsýný size gösterir." << endl << "Sayýyý yaz ve ENTER tuþuna bas." << endl << endl;
	r1:
	cout << "Seviyenizi yazýn:";
	cin >> seviye;
	toplam = 0;
	for (i = 1; i < seviye; i++)
	{
		sonuc = (i * 2000 + 500);
		toplam += sonuc;
	}
	cout << "Profilinizde gözüken birikmiþ xp sayýsýný yazýn:";
	cin >> xp;
	int toplam2 = toplam + xp;
	cout << "Toplam xp=" << toplam2 << endl;
	cout << "(B) Baþa dön" << endl << "(E) Çýkýþ" << endl;
	r2:
	y = _getch();
	if (y == 'B' || y == 'b')
		goto r1;
	else if (y == 'E' || y == 'e')
	{
	}
	else goto r2;
}