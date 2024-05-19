#include <iostream>
#include <conio.h>
using namespace std;

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
		cout << "Toplam xp: " << toplam2 << endl << endl;
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
		cout << "Seviyeniz: " << k << " (" << toplam2 << "/" << (k * 2000) + 500 << ")" << endl << endl;
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
		cout << endl << "Fark: " << fark << endl << endl;
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Turkish"); string x;
	cout << endl << "Bir seçenek seçin" << endl << endl << " (1)Mycity XP Hesaplama" << endl << " (2)Mycity Coin Hesaplama" << endl << " (3)Çýkýþ" << endl;
r:
	x = _getch();
	if (x == "1")//Mycity XP Hesaplama
	{
		int seviye, seviye2, seviyeMaxXp; long long xp, xp2;
	xp1:
		cout << endl << "		MYCITY TOPLAM XP HESAPLAMA" << endl << endl << " (1)Toplam xp'mi bulma" << endl << " (2)Ýleriye/Geriye dönük seviye hesaplama" << endl << " (3)Ýki durum arasýndaki fark" << endl << " (9)Güncelleme Geçmiþi" << endl << " (A)Hakkýnda" << endl << endl << " (C)Mycity Coin Hesaplama'ya geç" << endl << " (E)Programdan Çýk" << endl;
	xp10:
		x = _getch();
		if (x == "1")//Toplam XP bulma
		{
		xp11:
			cout << endl << "...Þu ana kadar edindiðiniz toplam xp'yi bulur..." << endl << endl;
			xpTOTLevelError:
			cout << "Seviyenizi yazýn: ";
			cin >> seviye;
			if (seviye < 1 || seviye > 10000)
			{
				cout << endl << "HATA: Girdiðiniz seviye 1 ile 10000 arasýnda olmalýdýr." << endl;
				goto xpTOTLevelError;
			}
			seviyeMaxXp = (seviye * 2000) + 500;
			xpTOTValueError:
			cout << "Profilinizde gözüken birikmiþ xp sayýsýný yazýn (??? / " << seviyeMaxXp << "): ";
			cin >> xp;
			if (xp < 0)
			{
				cout << endl << "HATA: Girilen xp miktarý negatif olamaz." << endl;
				goto xpTOTValueError;
			}
			General_Function(seviye, 0, 0, 0, 0, 0, xp, 0, 0, 1);
			cout << " (T)Tekrar Dene" << endl << " (B)Ana Menü" << endl;
		xp12:
			x = _getch();
			if (x == "t" || x == "T")
				goto xp11;
			else if (x == "b" || x == "B")
				goto xp1;
			else goto xp12;
		}
		else if (x == "2")//Ýleriye dönük seviye hesaplama
		{
		xp13:
			cout << endl << "...Ýleriye/Geriye dönük seviyenizi hesaplamaya yarar..." << endl << endl;
			xpFWDBWDLevelError:
			cout << "Seviyenizi yazýn: ";
			cin >> seviye;
			if (seviye < 1 || seviye > 10000)
			{
				cout << endl << "HATA: Girdiðiniz seviye 1 ile 10000 arasýnda olmalýdýr." << endl;
				goto xpFWDBWDLevelError;
			}
			seviyeMaxXp = (seviye * 2000) + 500;
			xpFWDBWDValueError:
			cout << "Profilinizde gözüken birikmiþ xp sayýsýný yazýn (??? / " << seviyeMaxXp << "): ";
			cin >> xp;
			if (xp < 0)
			{
				cout << endl << "HATA: Girilen xp miktarý negatif olamaz." << endl;
				goto xpFWDBWDValueError;
			}
			cout << "Ýlerde kaç xp almayý hedefliyorsunuz?" << endl << "(Geriye dönük hesap yapmak için girilecek deðerin baþýna eksi iþareti koyun).. ";
			cin >> xp2;
			General_Function(seviye, 0, 0, 0, 0, 0, xp, xp2, 0, 2);
			cout << " (T)Tekrar Dene" << endl << " (B)Ana Menü" << endl;
		xp14:
			x = _getch();
			if (x == "t" || x == "T")
				goto xp13;
			else if (x == "b" || x == "B")
				goto xp1;
			else goto xp14;
		}
		else if (x == "3")//Ýki durum arasýndaki fark
		{
		xp15:
			cout << endl << "...Ýki farklý seviyede olan oyuncularýn arasýndaki xp farkýný bulur..." << endl << endl;
			xpCOMPLevel1Error:
			cout << "Birinci seviyeyi gir: "; cin >> seviye;
			if (seviye < 1 || seviye > 10000)
			{
				cout << endl << "HATA: Girdiðiniz seviye 1 ile 10000 arasýnda olmalýdýr." << endl;
				goto xpCOMPLevel1Error;
			}
			xpCOMPValue1Error:
			cout << "Artan xp: "; cin >> xp;
			if (xp < 0)
			{
				cout << endl << "HATA: Girilen xp miktarý negatif olamaz." << endl;
				goto xpCOMPValue1Error;
			}
			xpCOMPLevel2Error:
			cout << "Ýkinci seviyeyi gir: "; cin >> seviye2;
			if (seviye2 < 1 || seviye > 10000)
			{
				cout << endl << "HATA: Girdiðiniz seviye 1 ile 10000 arasýnda olmalýdýr." << endl;
				goto xpCOMPLevel2Error;
			}
			xpCOMPValue2Error:
			cout << "Artan xp: "; cin >> xp2;
			if (xp2 < 0)
			{
				cout << endl << "HATA: Girilen xp miktarý negatif olamaz." << endl;
				goto xpCOMPValue2Error;
			}
			General_Function(seviye, seviye2, 0, 0, 0, 0, xp, xp2, 0, 3);
			cout << " (T)Tekrar Dene" << endl << " (B)Ana Menü" << endl;
		xp16:
			x = _getch();
			if (x == "t" || x == "T")
				goto xp15;
			else if (x == "b" || x == "B")
				goto xp1;
			else goto xp16;
		}
		else if (x == "9")//Güncelleme geçmiþi
		{
			xpUpdate:
			cout << endl << endl << "...Güncelleme Geçmiþi..." << endl << endl << " Programda yapýlan deðiþiklikleri burada görebilirsiniz." << endl << endl << "*Ayrýntýlarýný görmek istediðiniz sürümün parantez içindeki numarasýný yazýp ENTER tuþuna basýn." << endl << "*Ana menüye dönmek için B harfini yazýp ENTER tuþuna basýn." << endl << endl;
			cout << " (103)1.0.3" << endl;
			cout << " (1022)1.0.2.2" << endl;
			cout << " (1021)1.0.2.1" << endl;
			cout << " (102)1.0.2" << endl;
			cout << " (101)1.0.1" << endl << endl;
			cout << " (B)Ana Menü" << endl;
		xpUpdate1:
			cin >> x;
			if (x == "b" || x == "B")
				goto xp1;
			else if (x == "101")
			{
				cout << endl << "...1.0.1 sürümündeki deðiþiklikler..." << endl << endl;
				cout << "+Ýleriye dönük seviye hesaplama ve Ýki durum arasýndaki fark'ý bulma seçenekleri eklendi." << endl << endl;
				cout << " (9)Güncelleme Geçmiþi'ne geri dön" << endl << " (B)Ana Menü" << endl;
			xpUpdate101:
				x = _getch();
				if (x == "9")
					goto xpUpdate;
				else if (x == "b" || x == "B")
					goto xp1;
				else goto xpUpdate101;
			}
			else if (x == "102")
			{
				cout << endl << "...1.0.2 sürümündeki deðiþiklikler..." << endl << endl;
				cout << "+Güncelleme geçmiþi eklendi." << endl << "+Hakkýnda kýsmý eklendi." << endl << "+XP Hesaplayýcýsý ile Coin Hesaplayýcýsý arasýnda geçiþ yolu saðlandý." << endl << "+Hesaplama hatasý düzeltmeleri." << endl << endl;
				cout << " (9)Güncelleme Geçmiþi'ne geri dön" << endl << " (B)Ana Menü" << endl;
			xpUpdate102:
				x = _getch();
				if (x == "9")
					goto xpUpdate;
				else if (x == "b" || x == "B")
					goto xp1;
				else goto xpUpdate102;
			}
			else if (x == "1021")
			{
				cout << endl << "...1.0.2.1 sürümündeki deðiþiklikler..." << endl << endl;
				cout << "+Geriye dönük seviye hesaplama seçeneði. Özellikle sezon kasanlarýn iþine yarayacak bir ekleme." << endl << endl;
				cout << " (9)Güncelleme Geçmiþi'ne geri dön" << endl << " (B)Ana Menü" << endl;
			xpUpdate1021:
				x = _getch();
				if (x == "9")
					goto xpUpdate;
				else if (x == "b" || x == "B")
					goto xp1;
				else goto xpUpdate1021;
			}
			else if (x == "1022")
			{
				cout << endl << "...1.0.2.2 sürümündeki deðiþiklikler..." << endl << endl;
				cout << "+Girilen seviyenin 1'den daha düþük girilmesi durumunda [BUNU YAPINCA ELÝNE NE GEÇTÝ?] artýk sistem uyarý mesajý verecek ve bu iþlemi gerçekleþtirmeyecektir." << endl << "+Profilde görülen xp miktarýnýn negatif girilmesi engellendi. Bunun için Ýleriye/Geriye dönük seviye hesaplama'yý kullanýn." << endl << "+Birkaç yazým hatasý düzeltmesi" << endl << endl;
				cout << " (9)Güncelleme Geçmiþi'ne geri dön" << endl << " (B)Ana Menü" << endl;
			xpUpdate1022:
				x = _getch();
				if (x == "9")
					goto xpUpdate;
				else if (x == "b" || x == "B")
					goto xp1;
				else goto xpUpdate1022;
			}
			else if (x == "103")
			{
				cout << endl << "...1.0.3 sürümündeki deðiþiklikler..." << endl << endl;
				cout << "+Kod üzerinde küçük toparlamalar." << endl << "+'Ýki durum arasýndaki fark' seçeneðine açýklama eklendi." << endl << endl;
				cout << " (9)Güncelleme Geçmiþi'ne geri dön" << endl << " (B)Ana Menü" << endl;
			xpUpdate103:
				x = _getch();
				if (x == "9")
					goto xpUpdate;
				else if (x == "b" || x == "B")
					goto xp1;
				else goto xpUpdate103;
			}
			else goto xpUpdate1;
		}
		else if (x == "a" || x == "A")//Program hakkýnda
		{
			cout << endl << " Sürüm 1.0.3" << endl << " [Yayýnlanma Tarihi: 13.05.2024]" << endl << endl;
			cout << " (B)Ana Menü" << endl;
		xpAbout:
			x = _getch();
			if (x == "b" || x == "B")
				goto xp1;
			else goto xpAbout;
		}
		else if (x=="c" || x=="C")//Mycity Coin Hesaplayýcýsýna geçiþ
			goto coin1;
		else if (x=="e" || x=="E")//Programdan çýkýþ
		{}
		else goto xp10;//yukarýdaki seçeneklerden hiçbiri ise...
	}
	else if (x == "2")//Mycity Coin Hesaplama
	{
		long long sonuc1, sonuc2, sonuc3, y;
	coin1:
		cout << endl << "		MYCITY COIN HESAPLAYICISI" << endl << endl << " Bu program, istatistiklerinizi belli standartlara göre paraya dönüþtürerek 'en az,ortalama ve en çok (þüpheli modu)' sahip olabileceðiniz parayý hesaplar." << endl << endl;
		cout << " (1)Baþlat" << endl << " (2)Nasýl Çalýþýr?" << endl << " (3)Hakkýnda" << endl << " (9)Güncelleme Geçmiþi" << endl << endl << " (X)Mycity XP Hesaplama'ya Geç" << endl << " (E)Programdan Çýk" << endl;
	coin10:
		x = _getch();
		if (x == "1")//Coin calculator'u baþlatýr.
		{
		coin2:
			cout << endl << "...Deðerleri girelim..." << endl << endl;
			cout << "	Polis" << endl << "+Tutuklanan oyuncular: ";
			cin >> y;
			sonuc1 = sonuc2 = sonuc3 = 0;
			sonuc1 += y * 150, sonuc2 += y * 150, sonuc3 += y * 150;
			cout << endl << "	Hýrsýz	" << endl << "+Soygunlar: ";
			cin >> y;
			sonuc1 += y * 250, sonuc2 += y * 463, sonuc3 += y * 1100;
			cout << endl << "	Balýkçý" << endl << "+Avlanan balýk: ";
			cin >> y;
			if (y < 150)//Eðer oyuncu 150 balýktan az tutmuþsa [goldenmare yakalamamýþ olma ihtimali göz önünde bulunduruluyor]
			{
				sonuc1 += y * 120, sonuc2 += y * 150, sonuc3 += y * 254;
			}
			else
			{
				sonuc1 += y * 169, sonuc2 += y * 211, sonuc3 += y * 254;
			}
			cout << endl << "	Maden" << endl << "+Toplanan Altýn: ";
			cin >> y;
			sonuc1 += y * 110, sonuc2 += y * 110, sonuc3 += y * 110;
			cout << endl << "+Satýlan kristal:" << endl << " Sarý: ";
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
			cin >> y;
			sonuc1 += y * 1200, sonuc2 += y * 1200, sonuc3 += y * 1200;
			cout << endl << "	Çiftçi" << endl << "+Satýþ: ";
			cin >> y;
			sonuc1 += y * 10, sonuc2 += y * 53, sonuc3 += y * 1300;
			cout << "+Satýlan Meyveler: ";
			cin >> y;
			sonuc1 += y, sonuc2 += y * 5, sonuc3 += y * 130;
			cout << endl << "	Þef" << endl << "+Tamamlanan sipariþler: ";
			cin >> y;
			sonuc1 += y * 400, sonuc2 += y * 700, sonuc3 += y * 729;
			cout << endl << endl << " En az: " << sonuc1 << "$" << endl << " Ortalama: " << sonuc2 << "$" << endl << " En çok: " << sonuc3 << "$" << endl << endl;
			cout << " (T)Tekrar Dene" << endl << " (B)Ana Menü" << endl;
		coin3:
			x = _getch();
			if (x == "t" || x == "T")//Tekrar deneme seçeneði
				goto coin2;
			else if (x == "b" || x == "B")//Ana menüye döndürür
				goto coin1;
			else goto coin3;
		}
		else if (x == "2")//Nasýl Çalýþýr?
		{
			cout << endl << endl << "...Birim baþýna deðerler..." << endl << endl << " En az" << endl;
			cout << "+Hýrsýz=250$" << endl << "+Balýkçý=120$ (kýsa vadede) , 169$ (uzun vadede)" << endl << "+Çiftçi=10$ (tohum baþýna) , 1$ (meyve baþýna)" << endl << "+Þef=400$" << endl << endl;
			cout << " Ortalama" << endl;
			cout << "+Hýrsýz=463$" << endl << "+Balýkçý=150$ (kýsa vadede) , 211$ (uzun vadede)" << endl << "+Çiftçi=53$ (tohum baþýna) , 5$ (meyve baþýna)" << endl << "+Þef=700$" << endl << endl;
			cout << " En çok (Þüpheli modu)" << endl;
			cout << "+Hýrsýz=1100$" << endl << "+Balýkçý=254$" << endl << "+Çiftçi=1300$ (tohum baþýna) , 130$ (meyve baþýna)" << endl << "+Þef=729$" << endl << endl;
			cout << "...Sabit olanlar..." << endl << endl << "+Polis=150$" << endl << "+Maden:" << endl << " +Toplanan altýn=110$" << endl << " +Sarý Kristal=200$" << endl << " +Mavi Kristal=342$" << endl << " +Mor Kristal=600$" << endl << " +Yeþil Kristal=800$" << endl << " +Kýrmýzý Kristal=1200$" << endl << endl;
			cout << " (B)Ana Menü" << endl;
		coin4:
			x = _getch();
			if (x == "b" || x == "B")
				goto coin1;
			else goto coin4;
		}
		else if (x == "3")//Hakkýnda
		{
			cout << endl << " Sürüm 1.0.3" << endl << " [Yayýnlanma Tarihi: 13.05.2024]" << endl << endl;
			cout << " (B)Ana Menü" << endl;
		coinAbout:
			x = _getch();
			if (x == "b" || x == "B")
				goto coin1;
			else goto coinAbout;
		}
		else if (x == "9")//Güncelleme Geçmiþi
		{
		coinUpdate:
			cout << endl << endl << "...Güncelleme Geçmiþi..." << endl << endl;
			cout << " Programda yapýlan deðiþiklikleri burada görebilirsiniz." << endl << endl << "*Ayrýntýlarýný görmek istediðiniz sürümün parantez içindeki numarasýný yazýp ENTER tuþuna basýn." << endl << "*Ana menüye dönmek için B harfini yazýp ENTER tuþuna basýn." << endl << endl;
			cout << " (103)1.0.3" << endl;
			cout << " (1021)1.0.2.1" << endl;
			cout << " (102)1.0.2" << endl;
			cout << " (101)1.0.1" << endl << endl << " (B)Ana Sayfa" << endl;
		coinUpdate1:
			cin >> x;
			if (x == "b" || x == "B")
				goto coin1;
			else if (x == "101")
			{
				cout << endl << "...1.0.1 sürümündeki deðiþiklikler..." << endl << endl;
				cout << "+Güncelleme Geçmiþi eklendi. (ehehehe)" << endl << "+Metin düzeninde birkaç deðiþiklik" << endl;
				cout << "+Deðiþtirilen deðerler:" << endl << endl << "            Balýkçý" << endl << " En az (kýsa vadede):125$--->120$" << endl << " En az (uzun vadede):239$--->169$" << endl << " Ortalama (uzun vadede):253$--->211$" << endl << endl;
				cout << " (B)Ana Menü" << endl << " (9)Güncelleme Geçmiþi'ne geri dön" << endl;
			coinUpdate101:
				x = _getch();
				if (x == "b" || x == "B")
					goto coin1;
				else if (x == "9")
					goto coinUpdate;
				else goto coinUpdate101;
			}
			else if (x == "102")
			{
				cout << endl << "...1.0.2 sürümündeki deðiþiklikler..." << endl << endl;
				cout << "+Artýk Mycity XP Hesaplayýcýsý ile Coin Hesaplayýcýsý bir arada! Bu yüzden ikisi arasýnda düzen olarak uyumun saðlanabilmesi için birkaç deðiþikliðe gidildi." << endl << endl;
				cout << " (B)Ana Menü" << endl << " (9)Güncelleme Geçmiþi'ne geri dön" << endl;
			coinUpdate102:
				x = _getch();
				if (x == "b" || x == "B")
					goto coin1;
				else if (x == "9")
					goto coinUpdate;
				else goto coinUpdate102;
			}
			else if (x == "1021")
			{
				cout << endl << "...1.0.2.1 sürümündeki deðiþiklikler..." << endl << endl;
				cout << "+Yazým hatasý düzeltmeleri" << endl << "+Deðiþtirilen deðerler:" << endl << endl << "	Hýrsýz" << endl << " En çok: 500$--->1100$" << endl << endl << "	Çiftçi" << endl << " En çok (tohum baþýna): 500$--->1300$" << endl << " En çok (meyve baþýna): 50$--->130$" << endl << endl;
				cout << " (B)Ana Menü" << endl << " (9)Güncelleme Geçmiþi'ne geri dön" << endl;
			coinUpdate1021:
				x = _getch();
				if (x == "b" || x == "B")
					goto coin1;
				else if (x == "9")
					goto coinUpdate;
				else goto coinUpdate1021;
			}
			else if (x == "103")
			{
				cout << endl << "...1.0.3 sürümündeki deðiþiklikler..." << endl << endl;
				cout << "+Kod üzerinde küçük toparlamalar." << endl << endl;
				cout << " (9)Güncelleme Geçmiþi'ne geri dön" << endl << " (B)Ana Menü" << endl;
			coinUpdate103:
				x = _getch();
				if (x == "b" || x == "B")
					goto coin1;
				else if (x == "9")
					goto coinUpdate;
				else goto coinUpdate103;
			}
			else goto coinUpdate1;
		}
		else if (x=="x" || x=="X")
			goto xp1;
		else if (x=="e" || x=="E")
		{}
		else goto coin10;
	}
	else if (x == "3")//Programdan çýkýþ
	{}
	else goto r;
}