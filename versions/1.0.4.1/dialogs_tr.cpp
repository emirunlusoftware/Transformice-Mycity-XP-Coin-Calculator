#include <iostream>
#include "dialogs_tr.h"
using namespace std;

	//Language: Türkçe
	///NOT: METİNLERİN BAŞINDAKİ GİRİNTİLER METİN DÜZENİNİ KORUMAK AMACIYLA ÖNEMLİDİR.
	string menu[]
	{
		//Ana Menü
		"		MYCITY XP & COIN HESAPLAYICI",
		" (1)Toplam Xp'mi Bulma",
		" (2)İleriye/Geriye Dönük Seviye Hesaplama",
		" (3)İki Durum Arasındaki Fark",
		" (4)Coin Hesaplayıcı'yı Çalıştır",
		" (5)Coin Hesaplayıcı Nasıl Çalışır?",
		" (9)Güncelleme Geçmişi",
		" (A)Hakkında",
		" (E)Programdan Çık",
		" (R)Tekrar Dene",
		" (M)Ana Menü",
		" (9)Güncelleme Geçmişi'ne Geri Dön",
	};

	string calc_xp[]
	{
		//(1)Toplam Xp'mi Bulma
		"...Şu ana kadar edindiğiniz toplam xp'yi bulur...",
		"Seviyenizi yazın: ",
		"!HATA: GİRİLEN SEVİYE 1 İLE 10000 ARASINDA OLMALIDIR!",
		"Profilinizde gözüken birikmiş xp sayısını yazın (??? / ",
		"!HATA: GİRİLEN XP MİKTARI NEGATİF OLAMAZ!",
		"Toplam xp: ",

		//(2)İleriye/Geriye Dönük Seviye Hesaplama
		"...XP ekleyerek/çıkararak ileriye/geriye dönük seviyenizi hesaplamaya yarar...",
		"İlerde kaç xp almayı hedefliyorsunuz?",
		"NOT: Eğer geçmişteki seviyenizi buldurmasını istiyorsanız EKSİ İŞARETİ koyun.. ",
		"!HATA: LÜTFEN GEÇERLİ BİR DEĞER GİRİN!",
		"Seviyeniz: ",

		//(3)İki Durum Arasındaki Fark
		"...İki farklı seviyede olan oyuncuların arasındaki xp farkını bulur...",
		"Birinci oyuncunun seviyesini girin: ",
		"Birinci oyuncunun birikmiş xp'sini girin (??? / ",
		"İkinci oyuncunun seviyesini girin: ",
		"İkinci oyuncunun birikmiş xp'sini girin (??? / ",
		"Fark: ",
	};

	string calc_coin[]
	{
		//(4)Coin Hesaplayıcı'yı Çalıştır
		"...Değerleri girelim...",
		"	Polis",
		"+Tutuklanan oyuncular: ",
		"	Hırsız",
		"+Soygunlar: ",
		"	Balıkçı",
		"+Avlanan balık: ",
		"	Madenci",
		"+Toplanan altın: ",
		"+Satılan kristal: ",
		" Sarı: ",
		" Mavi: ",
		" Mor: ",
		" Yeşil: ",
		" Kırmızı: ",
		"	Çiftçi",
		"+Satış: ",
		"+Satılan meyveler: ",
		"	Şef",
		"+Tamamlanan siparişler: ",
		" SONUÇLAR",
		" En az: ",
		" Ortalama: ",
		" En çok: ",
		"!HATA: SIFIR YA DA DAHA BÜYÜK BİR DEĞER GİRİN!",
	};

	string coin_howto[]
	{
		//(5)Coin Hesaplayıcı Nasıl Çalışır?
		"...Coin Hesaplayıcı Nasıl Çalışır?...",
		" Bu program, istatistiklerinizi belli standartlara göre paraya dönüştürerek sahip olabileceğiniz parayı hesaplar.",
		" Burada 3 farklı türden hesaplama yapılır:",
		"+En az",
		"+Ortalama",
		"+En çok (Şüpheli Modu)",
		"...Birim Başına Değerler...",
		" En az",
		"+Hırsız = 250$",
		"+Balıkçı = 120$ (kısa vadede) , 169$ (uzun vadede)",
		"+Çiftçi = 10$ (tohum başına) , 1$ (meyve başına)",
		"+Şef = 400$",
		" Ortalama",
		"+Hırsız = 463$",
		"+Balıkçı = 150$ (kısa vadede) , 211$ (uzun vadede)",
		"+Çiftçi = 53$ (tohum başına) , 15$ (meyve başına)",
		"+Şef = 700$",
		" En çok (Şüpheli Modu)",
		"+Hırsız = 1100$",
		"+Balıkçı = 254$",
		"+Çiftçi = 1300$ (tohum başına) , 200$ (meyve başına)",
		"+Şef = 729$",
		"...Sabit Olanlar...",
		"+Polis = 150$",
		"+Madenci:",
		"+Toplanan altın = 115$",
		" +Sarı Kristal = 200$",
		" +Mavi Kristal = 342$",
		" +Mor Kristal = 600$",
		" +Yeşil Kristal = 800$",
		" +Kırmızı Kristal = 1200$",
	};

	string updatelog[]
	{
		//(9)Güncelleme Geçmişi
		"...Güncelleme Geçmişi...",
		" Programda yapılan değişiklikleri burada görebilirsiniz.",
		"*Ayrıntılarını görmek istediğiniz sürümün parantez içindeki numarasını yazıp ENTER tuşuna basın.",
		"*Ana menüye dönmek için M harfini yazıp ENTER tuşuna basın.",
		"	MYCITY XP HESAPLAYICI",
		"	MYCITY COIN HESAPLAYICI",
	};

	string about[]
	{
		//(A)Hakkında
		"	HAKKINDA",
		" Sürüm 1.0.4.1 (Türkçe)",
		" [Yayınlanma Tarihi: 26.05.2024]",
		" Emir Ünlü (@emirunlusoftware) tarafından hazırlandı.",
		" https://github.com/emirunlusoftware",
		" Türkçe Çeviri: ",
		"Emir Ünlü (@emirunlusoftware)",
	};

	string v101[]
	{
		//1.0.1
		" (101)1.0.1",
		"...1.0.1. sürümündeki değişiklikler...",
		"+'İleriye Dönük Seviye Hesaplama' ve 'İki Durum Arasındaki Fark' seçenekleri eklendi.",
		"+Metin düzeninde birkaç değişiklik.",
		"+Değiştirilen değerler:",
		"	Balıkçı",
		" En az (kısa vadede): 125$--->120$",
		" En az (uzun vadede): 239$--->169$",
		" Ortalama (uzun vadede): 253$--->211$",
	};

	string v102[]
	{
		//1.0.2
		" (102)1.0.2",
		"...1.0.2. sürümündeki değişiklikler...",
		"+'Güncelleme Geçmişi' eklendi.",
		"+'Hakkında' kısmı eklendi.",
		"+XP Hesaplayıcı ile Coin Hesaplayıcı arasında geçiş yolu sağlandı.",
		"+Bazı hesaplama hatası düzeltmeleri.",
		"+Artık Mycity XP Hesaplayıcısı ile Coin Hesaplayıcısı bir arada! Bu yüzden ikisi arasında düzen olarak uyumun sağlanabilmesi için birkaç değişikliğe gidildi.",
	};

	string v1021[]
	{
		//1.0.2.1
		" (1021)1.0.2.1",
		"...1.0.2.1. sürümündeki değişiklikler...",
		"+Geriye Dönük Seviye Hesaplama seçeneği. Özellikle sezon kasanların işine yarayacak bir ekleme.",
		"+Yazım hatası düzeltmeleri",
		//"+Değiştirilen değerler:" v101[4]
		"	Hırsız",
		" En çok: 500$--->1100$",
		"	Çiftçi",
		" En çok (tohum başına): 500$--->1300$",
		" En çok (meyve başına): 50$--->130$",
	};

	string v1022[]
	{
		//1.0.2.2
		" (1022)1.0.2.2",
		"...1.0.2.2. sürümündeki değişiklikler...",
		"+Girilen seviyenin 1'den daha düşük girilmesi durumunda [BUNU YAPINCA ELİNE NE GEÇTİ?] artık sistem uyarı mesajı verecek ve bu işlemi gerçekleştirmeyecektir.",
		"+Profilde görülen xp miktarının negatif girilmesi engellendi. Bunun için İleriye/Geriye dönük seviye hesaplama'yı kullanın.",
		//"+Yazım hatası düzeltmeleri." v1021[3]
	};

	string v103[]
	{
		//1.0.3
		" (103)1.0.3",
		"...1.0.3. sürümündeki değişiklikler...",
		"+Kod üzerinde küçük toparlamalar.",
		"+'İki Durum Arasındaki Fark' seçeneğine açıklama eklendi.",
	};

	string v104[]
	{
		//1.0.4
		" (104)1.0.4",
		"...1.0.4. sürümündeki değişiklikler...",
		"+Hepsi bir arada! Artık XP ve Coin hesaplayıcıları tek bir menüde.",
		"+Bu yazılımı tercüme etmek artık daha kolay, kod tabanındaki birkaç değişiklik bu kolaylığı sağladı.",
		"+Ana Menü'ye gitmek için M tuşuna basın, B tuşuna değil. Ve tekrar denemek için R tuşuna basın, T tuşuna değil.",
		//"+Metin düzeninde birkaç değişiklik." v101[3]
		//"+Yazım hatası düzeltmeleri." v1021[3]
		//"+Değiştirilen değerler:" v101[4]
		//" Çiftçi" v1021[7]
		" Ortalama (meyve başına): 5$--->15$",
		" En çok (meyve başına): 130$--->200$",
		"	Madenci",
		" Toplanan altın: 110$--->115$",
	};

	string v1041[]
	{
		//1.0.4.1
		" (1041)1.0.4.1",
		"...1.0.4.1. sürümündeki değişiklikler...",
		"+Artık sayı yerine harf girildiğinde program çökmeyecek.",
		"+Birkaç kod tabanı geliştirmeleri."
	};

	string extras[]
	{
		//Ekstralar
		"Devam etmek için ENTER tuşuna basın...",
	};