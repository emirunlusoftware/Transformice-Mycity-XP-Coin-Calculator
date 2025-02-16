#include <iostream>
#include <conio.h>
using namespace std;
string dialog[]
{
	//Language: Turkish
	//NOT: METÝNLERÝN BAÞINDAKÝ GÝRÝNTÝLER METÝN DÜZENÝNÝ KORUMAK AMACIYLA ÖNEMLÝDÝR.

	//Ana Menü
	{"		MYCITY XP & COIN HESAPLAYICI"},//Index 0
	{" (1)Toplam Xp'mi Bulma"},//Index 1
	{" (2)Ýleriye/Geriye Dönük Seviye Hesaplama"},//Index 2
	{" (3)Ýki Durum Arasýndaki Fark"},//Index 3
	{" (4)Coin Hesaplayýcý'yý Çalýþtýr"},//Index 4
	{" (5)Coin Hesaplayýcý Nasýl Çalýþýr?"},//Index 5
	{" (9)Güncelleme Geçmiþi"},//Index 6
	{" (A)Hakkýnda"},//Index 7
	{" (E)Programdan Çýk"},//Index 8

	//(1)Toplam Xp'mi Bulma
	{"...Þu ana kadar edindiðiniz toplam xp'yi bulur..."},//Index 9
	{"Seviyenizi yazýn: "},//Index 10
	{"HATA: Girilen seviye 1 ile 10000 arasýnda olmalýdýr."},//Index 11
	{"Profilinizde gözüken birikmiþ xp sayýsýný yazýn (??? / "},//Index 12
	{"HATA: Girilen xp miktarý negatif olamaz."},//Index 13
	{"Toplam xp: "},//Index 14
	{" (R)Tekrar Dene"},//Index 15
	{" (M)Ana Menü"},//Index 16

	//(2)Ýleriye/Geriye Dönük Seviye Hesaplama
	{"...XP ekleyerek/çýkararak ileriye/geriye dönük seviyenizi hesaplamaya yarar..."},//Index 17
	{"Ýlerde kaç xp almayý hedefliyorsunuz?"},//Index 18
	{"NOT: Eðer geçmiþteki seviyenizi buldurmasýný istiyorsanýz EKSÝ ÝÞARETÝ koyun.. "},//Index 19
	{"Seviyeniz: "},//Index 20

	//(3)Ýki Durum Arasýndaki Fark
	{"...Ýki farklý seviyede olan oyuncularýn arasýndaki xp farkýný bulur..."},//Index 21
	{"Birinci oyuncunun seviyesini girin: "},//Index 22
	{"Birinci oyuncunun birikmiþ xp'sini girin (??? / "},//Index 23
	{"Ýkinci oyuncunun seviyesini girin: "},//Index 24
	{"Ýkinci oyuncunun birikmiþ xp'sini girin (??? / "},//Index 25
	{"Fark: "},//Index 26

	//(4)Coin Hesaplayýcý'yý Çalýþtýr
	{"...Deðerleri girelim..."},//Index 27
	{"	Polis"},//Index 28
	{"+Tutuklanan oyuncular: "},//Index 29
	{"	Hýrsýz"},//Index 30
	{"+Soygunlar: "},//Index 31
	{"	Balýkçý"},//Index 32
	{"+Avlanan balýk: "},//Index 33
	{"	Madenci"},//Index 34
	{"+Toplanan altýn: "},//Index 35
	{"+Satýlan kristal: "},//Index 36
	{" Sarý: "},//Index 37
	{" Mavi: "},//Index 38
	{" Mor: "},//Index 39
	{" Yeþil: "},//Index 40
	{" Kýrmýzý: "},//Index 41
	{"	Çiftçi"},//Index 42
	{"+Satýþ: "},//Index 43
	{"+Satýlan meyveler: "},//Index 44
	{"	Þef"},//Index 45
	{"+Tamamlanan sipariþler: "},//Index 46
	{" En az: "},//Index 47
	{" Ortalama: "},//Index 48
	{" En çok: "},//Index 49

	//(5)Coin Hesaplayýcý Nasýl Çalýþýr?
	{" Bu program, istatistiklerinizi belli standartlara göre paraya dönüþtürerek sahip olabileceðiniz parayý hesaplar."},//Index 50
	{" Burada 3 farklý türden hesaplama yapýlýr:"},//Index 51
	{"+En az"},//Index 52
	{"+Ortalama"},//Index 53
	{"+En çok (Þüpheli Modu)"},//Index 54
	{"...Birim Baþýna Deðerler..."},//Index 55
	{" En az"},//Index 56
	{"+Hýrsýz = 250$"},//Index 57
	{"+Balýkçý = 120$ (kýsa vadede) , 169$ (uzun vadede)"},//Index 58
	{"+Çiftçi = 10$ (tohum baþýna) , 1$ (meyve baþýna)"},//Index 59
	{"+Þef = 400$"},//Index 60
	{" Ortalama"},//Index 61
	{"+Hýrsýz = 463$"},//Index 62
	{"+Balýkçý = 150$ (kýsa vadede) , 211$ (uzun vadede)"},//Index 63
	{"+Çiftçi = 53$ (tohum baþýna) , 15$ (meyve baþýna)"},//Index 64
	{"+Þef = 700$"},//Index 65
	{" En çok (Þüpheli Modu)"},//Index 66
	{"+Hýrsýz = 1100$"},//Index 67
	{"+Balýkçý = 254$"},//Index 68
	{"+Çiftçi = 1300$ (tohum baþýna) , 200$ (meyve baþýna)"},//Index 69
	{"+Þef = 729$"},//Index 70
	{"...Sabit Olanlar..."},//Index 71
	{"+Polis = 150$"},//Index 72
	{"+Madenci:"},//Index 73
	{" +Toplanan altýn = 115$"},//Index 74
	{" +Sarý Kristal = 200$"},//Index 75
	{" +Mavi Kristal = 342$"},//Index 76
	{" +Mor Kristal = 600$"},//Index 77
	{" +Yeþil Kristal = 800$"},//Index 78
	{" +Kýrmýzý Kristal = 1200$"},//Index 79

	//(9)Güncelleme Geçmiþi
	{"...Güncelleme Geçmiþi..."},//Index 80
	{" Programda yapýlan deðiþiklikleri burada görebilirsiniz."},//Index 81
	{"*Ayrýntýlarýný görmek istediðiniz sürümün parantez içindeki numarasýný yazýp ENTER tuþuna basýn."},//Index 82
	{"*Ana menüye dönmek için M harfini yazýp ENTER tuþuna basýn."},//Index 83
	{" (9)Güncelleme Geçmiþi'ne Geri Dön"},//Index 84
	{"	MYCITY XP HESAPLAYICI"},//Index 85
	{"	MYCITY COIN HESAPLAYICI"},//Index 86

	//(A)Hakkýnda
	{"	HAKKINDA"},//Index 87
	{" Sürüm 1.0.4 (Türkçe)"},//Index 88
	{" [Yayýnlanma Tarihi: 18.05.2024]"},//Index 89
	{" Emir Ünlü (@emirunlusoftware) tarafýndan hazýrlandý."},//Index 90
	{" https://github.com/emirunlusoftware"},//Index 91
	{" Türkçe Çeviri: "},//Index 92
	{"Emir Ünlü (@emirunlusoftware)"},//Index 93

	//1.0.1
	{" (101)1.0.1"},//Index 94
	{"...1.0.1 sürümündeki deðiþiklikler..."},//Index 95
	{"+'Ýleriye Dönük Seviye Hesaplama' ve 'Ýki Durum Arasýndaki Fark' seçenekleri eklendi."},//Index 96
	{"+Metin düzeninde birkaç deðiþiklik."},//Index 97
	{"+Deðiþtirilen deðerler:"},//Index 98
	{"	Balýkçý"},//Index 99
	{" En az (kýsa vadede): 125$--->120$"},//Index 100
	{" En az (uzun vadede): 239$--->169$"},//Index 101
	{" Ortalama (uzun vadede): 253$--->211$"},//Index 102

	//1.0.2
	{" (102)1.0.2"},//Index 103
	{"...1.0.2 sürümündeki deðiþiklikler..."},//Index 104
	{"+'Güncelleme Geçmiþi' eklendi."},//Index 105
	{"+'Hakkýnda' kýsmý eklendi."},//Index 106
	{"+XP Hesaplayýcý ile Coin Hesaplayýcý arasýnda geçiþ yolu saðlandý."},//Index 107
	{"+Bazý hesaplama hatasý düzeltmeleri."},//Index 108
	{"+Artýk Mycity XP Hesaplayýcýsý ile Coin Hesaplayýcýsý bir arada! Bu yüzden ikisi arasýnda düzen olarak uyumun saðlanabilmesi için birkaç deðiþikliðe gidildi."},//Index 109

	//1.0.2.1
	{" (1021)1.0.2.1"},//Index 110
	{"...1.0.2.1 sürümündeki deðiþiklikler..."},//Index 111
	{"+Geriye Dönük Seviye Hesaplama seçeneði. Özellikle sezon kasanlarýn iþine yarayacak bir ekleme."},//Index 112
	{"+Yazým hatasý düzeltmeleri"},//Index 113
	//"+Deðiþtirilen deðerler:" (Index 98)
	{"	Hýrsýz"},//Index 114
	{" En çok: 500$--->1100$"},//Index 115
	{"	Çiftçi"},//Index 116
	{" En çok (tohum baþýna): 500$--->1300$"},//Index 117
	{" En çok (meyve baþýna): 50$--->130$"},//Index 118

	//1.0.2.2
	{" (1022)1.0.2.2"},//Index 119
	{"...1.0.2.2 sürümündeki deðiþiklikler..."},//Index 120
	{"+Girilen seviyenin 1'den daha düþük girilmesi durumunda [BUNU YAPINCA ELÝNE NE GEÇTÝ?] artýk sistem uyarý mesajý verecek ve bu iþlemi gerçekleþtirmeyecektir."},//Index 121
	{"+Profilde görülen xp miktarýnýn negatif girilmesi engellendi. Bunun için Ýleriye/Geriye dönük seviye hesaplama'yý kullanýn."},//Index 122
	//"+Yazým hatasý düzeltmeleri." (Index 113)

	//1.0.3
	{" (103)1.0.3"},//Index 123
	{"...1.0.3 sürümündeki deðiþiklikler..."},//Index 124
	{"+Kod üzerinde küçük toparlamalar."},//Index 125
	{"+'Ýki Durum Arasýndaki Fark' seçeneðine açýklama eklendi."},//Index 126

	//1.0.4
	{" (104)1.0.4"},//Index 127
	{"...1.0.4 sürümündeki deðiþiklikler..."},//Index 128
	{"+Hepsi bir arada! Artýk XP ve Coin hesaplayýcýlarý tek bir menüde."},//Index 129
	{"+Bu yazýlýmý tercüme etmek artýk daha kolay, kod tabanýndaki birkaç deðiþiklik bu kolaylýðý saðladý."},//Index 130
	{"+Ana Menü'ye gitmek için M tuþuna basýn, B tuþuna deðil. Ve tekrar denemek için R tuþuna basýn, T tuþuna deðil."},//Index 131
	//"+Metin düzeninde birkaç deðiþiklik." (Index 97)
	//"+Yazým hatasý düzeltmeleri." (Index 113)
	//"+Deðiþtirilen deðerler:" (Index 98)
	//" Çiftçi" (Index 116)
	{" Ortalama (meyve baþýna): 5$--->15$"},//Index 132
	{" En çok (meyve baþýna): 130$--->200$"},//Index 133
	{"	Madenci"},//Index 134
	{" Toplanan altýn: 110$--->115$"},//Index 135

	//Ekstralar
	{"Devam etmek için ENTER tuþuna basýn..."},//Index 136
	{"...Coin Hesaplayýcý Nasýl Çalýþýr?..."},//Index 137
	{" SONUÇLAR"},//Index 138
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
	if (x == "1")//(1)Toplam Xp'mi Bulma
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
	else if (x == "2")//(2)Ýleriye/Geriye Dönük Hesaplama
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
	else if (x == "3")//(3)Ýki Durum Arasýndaki Fark
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
	else if (x == "4")//(4)Coin Hesaplayýcý'yý Baþlat
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
		if (y < 150)//Eðer oyuncu 150 balýktan daha az balýk avlamýþsa [Oyuncunun Goldenmare yakalamadýðý kabul ediliyor.]
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
	else if (x == "5")//(5)Coin Hesaplayýcý Nasýl Çalýþýr?
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
	else if (x == "9")//(9)Güncelleme Geçmiþi
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
	else if (x == "a" || x == "A")//(A)Hakkýnda
	{
		About();
	about:
		x = _getch();
		if (x == "m" || x == "M")
			goto main;
		else goto about;
	}
	else if (x == "e" || x == "E") {}//(E)Programdan Çýk
	else goto main_x;
}