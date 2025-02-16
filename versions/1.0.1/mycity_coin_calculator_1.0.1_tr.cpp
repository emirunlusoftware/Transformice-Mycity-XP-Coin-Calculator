#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	string x, z;
	cout << "Bir seçenek seçin..." << endl << endl << " (1)Mycity XP Calculator" << endl << " (2)Mycity Coin Calculator" << endl;
r0:
	z = _getch;
	if (z == "1")
	{
		int seviye, xp, sonuc, i, toplam;
		char a;
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
		a = _getch();
		if (a == 'B' || a == 'b')
			goto r1;
		else if (a == 'E' || a == 'e')
		{
		}
		else goto r2;
	}
	else if (y == "2")
	{
	r1:
		cout << endl << "		Mycity Coin Hesaplayýcýsý" << endl << endl << "  Bu program,istatistiklerinizi belli standartlara göre paraya dönüþtürerek 'en az,ortalama ve en çok (þüpheli modu)' sahip olabileceðiniz parayý hesaplar. " << endl << endl;
		cout << " (1)Baþlat" << endl << " (2)Nasýl Çalýþýr?" << endl << " (3)Hakkýnda" << endl << " (4)Güncelleme Geçmiþi" << endl;
	r1a:
		x = _getch();
		if (x == "1")
		{
		r4:
			cout << endl << endl << "...Deðerleri girelim..." << endl << endl;
			cout << "	Polis	" << endl << "+Tutuklanan oyuncular: ";
			cin >> y; cout << endl;
			sonuc1 = 0, sonuc2 = 0, sonuc3 = 0;
			sonuc1 += y * 150, sonuc2 += y * 150, sonuc3 += y * 150;
			cout << "	Hýrsýz	" << endl << "+Soygunlar: ";
			cin >> y; cout << endl;
			sonuc1 += y * 250, sonuc2 += y * 463, sonuc3 += y * 500;
			cout << "	Balýkçý	" << endl << "+Avlanan balýk: ";
			cin >> y; cout << endl;
			if (y < 150)
			{
				sonuc1 += y * 120, sonuc2 += y * 150, sonuc3 += y * 254;
			}
			else
			{
				sonuc1 += y * 169, sonuc2 += y * 211, sonuc3 += y * 254;
			}
			cout << "	Maden	" << endl << "+Toplanan Altýn: ";
			cin >> y; cout << endl;
			sonuc1 += y * 110, sonuc2 += y * 110, sonuc3 += y * 110;
			cout << "+Satýlan kristal:" << endl << " Sarý: ";
			cin >> y;
			sonuc1 += y * 200, sonuc2 += y * 200, sonuc3 += y * 200;
			cout << " Mavi: ";
			cin >> y;
			sonuc1 += y * 342, sonuc2 += y * 342, sonuc3 += y * 342;
			cout << " Mor: ";
			cin >> y;
			sonuc1 += y * 600, sonuc2 += y * 600, sonuc3 += y * 600;
			cout << " Yeþil: ";
			cin >> y;
			sonuc1 += y * 800, sonuc2 += y * 800, sonuc3 += y * 800;
			cout << " Kýrmýzý: ";
			cin >> y; cout << endl;
			sonuc1 += y * 1200, sonuc2 += y * 1200, sonuc3 += y * 1200;
			cout << "	Çiftçi	" << endl << "+Satýþ: ";
			cin >> y;
			sonuc1 += y * 10, sonuc2 += y * 53, sonuc3 += y * 500;
			cout << "+Satýlan Meyveler: ";
			cin >> y; cout << endl;
			sonuc1 += y, sonuc2 += y * 5, sonuc3 += y * 50;
			cout << "	Þef	" << endl << "+Tamamlanan sipariþler: ";
			cin >> y; cout << endl << endl;
			sonuc1 += y * 400, sonuc2 += y * 700, sonuc3 += y * 729;
			cout << "En az=" << sonuc1 << "$" << endl << "Ortalama=" << sonuc2 << "$" << endl << "En çok=" << sonuc3 << "$" << endl << endl;
			cout << "(1)Tekrar Dene" << endl << "(2)Baþa Dön" << endl;
		r5:
			x = _getch();
			if (x == "1")
				goto r4;
			else if (x == "2")
				goto r1;
			else goto r5;
		}
		else if (x == "2")
		{
			cout << endl << endl << "-----Birim baþýna deðerler-----" << endl << endl << " En az" << endl;
			cout << "+Hýrsýz=250$" << endl << "+Balýkçý=120$ (kýsa vadede) , 169$ (uzun vadede)" << endl << "+Çiftçi=10$ (tohum baþýna) , 1$ (meyve baþýna)" << endl << "+Þef=400$" << endl << endl;
			cout << " Ortalama" << endl;
			cout << "+Hýrsýz=463$" << endl << "+Balýkçý=150$ (kýsa vadede) , 211$ (uzun vadede)" << endl << "+Çiftçi=53$ (tohum baþýna) , 5$ (meyve baþýna)" << endl << "+Þef=700$" << endl << endl;
			cout << " En çok (Þüpheli modu)" << endl;
			cout << "+Hýrsýz=500$" << endl << "+Balýkçý=254$" << endl << "+Çiftçi=500$ (tohum baþýna) , 50$ (meyve baþýna)" << endl << "+Þef=729$" << endl << endl;
			cout << "---------Sabit olanlar---------" << endl << endl << "+Polis=150$" << endl << "+Maden:" << endl << "+Toplanan altýn=110$" << endl << "Sarý Kristal=200$" << endl << "Mavi Kristal=342$" << endl << "Mor Kristal=600$" << endl << "Yeþil Kristal=800$" << endl << "Kýrmýzý Kristal=1200$" << endl << endl;
			cout << " (1)Baþa Dön" << endl;
		r2:
			x = _getch();
			if (x == "1")
				goto r1;
			else goto r2;
		}
		else if (x == "3")
		{
			cout << endl << "Sürüm 1.0.1" << endl << endl;
			cout << " (1)Baþa Dön" << endl;
		r3:
			x = _getch();
			if (x == "1")
				goto r1;
			else goto r3;
		}
		else if (x == "4")
		{
		r6:
			cout << endl << endl << "-----Güncelleme Geçmiþi-----" << endl << endl;
			cout << "  Yapýlan deðiþiklikler burda kayýtlýdýr." << endl << "  Açmak için parantez içindeki sayýyý yazýp 'ENTER tuþuna basýn'." << endl << "  Ana sayfaya dönmek için B harfini yazýp 'ENTER tuþuna basýn'." << endl << endl;
			cout << "  (101)1.0.1" << endl << endl << " (B + ENTER Tuþu)Ana Sayfa" << endl;
		r6a:
			cin >> x;
			if (x == "101")
			{
				cout << endl << "-----1.0.1 sürümünde yapýlan deðiþiklikler-----" << endl << endl;
				cout << "+Güncelleme Geçmiþi eklendi. (ehehehe)" << endl << "+Metin düzeninde birkaç deðiþiklik" << endl;
				cout << "+Deðiþtirilen deðerler:" << endl << endl << "            Balýkçý" << endl << " En az (kýsa vadede):125$--->120$" << endl << " En az (uzun vadede):239$--->169$" << endl << " Ortalama (uzun vadede):253$--->211$" << endl << endl;
				cout << " (B)Ana Sayfa" << endl << " (U)Güncelleme Geçmiþi Sayfasýna Dön" << endl;
			r7:
				x = _getch();
				if (x == "B" || x == "b")
					goto r1;
				else if (x == "U" || x == "u")
					goto r6;
				else goto r7;
			}
			else if (x == "B" || x == "b")
				goto r1;
			else goto r6a;
		}
		else goto r1a;
	}
	else goto r0;
}