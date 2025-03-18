#include "main.h"





LPCWSTR menu_tr[] =
{
	L"Toplam XP'mi Bulma",
	L"İleriye/Geriye\nDönük Seviye Hesaplama",
	L"İki Durum Arasındaki Fark",
	L"Coin Hesaplayıcı'yı\nÇalıştır",
	L"Coin Hesaplayıcı\nNasıl Çalışır?",
	L"Hakkında",
	L"Güncelleme\nGeçmişi",
	L"Dil",
	L"Hesapla!",
	L"Ana Menü",
};



LPCWSTR calc_tr[] =
{
	/* [0] - [3] */
	L"...Şu ana kadar edindiğiniz toplam XP'yi bulur...",
	L"...XP ekleyerek/çıkararak yeni seviyenizi hesaplar...",
	L"...İki oyuncu arasındaki XP farkını bulur...",
	L"...Profilinizdeki istatistikleri sırayla girin...",

	/* [4] - [7] */
	L"Seviyenizi yazın",
	L"Şu an kaç XP'ye sahipsiniz?",
	L"XP ekle",
	L"XP çıkar",

	/* [8] - [11] */
	L"Oyuncu 1'in seviyesi",
	L"Oyuncu 1 XP'si",
	L"Oyuncu 2'nin seviyesi",
	L"Oyuncu 2 XP'si",

	/* [12] - [13] */
	L"SIFIRDAN BÜYÜK OLMALI",
	L"0 - %u ARASINDA OLMALI",

	/* [14] - [25] */
	L"Tutuklanan oyuncular:",
	L"Soygunlar:",
	L"Avlanan balık:",
	L"Toplanan altın:",
	L"Sarı Kristal:",
	L"Mavi Kristal:",
	L"Mor Kristal:",
	L"Yeşil Kristal:",
	L"Kırmızı Kristal:",
	L"Satılan tohumlar:",
	L"Satılan meyveler:",
	L"Tamamlanan siparişler:",

	/* [26] - [28] */
	L"En az",
	L"Ortalama",
	L"En çok",

	/* [29] - [31] */
	L"Toplam XP: %lld",
	L"Seviye: %d (%lld/%d)",
	L"Fark: %llu XP"
};



LPCWSTR coin_howto_tr =
{
	L"...Coin Hesaplayıcı Nasıl Çalışır?..."
	L"\r\n\r\n"
	L"Bu program, istatistiklerinizi belli standartlara göre paraya dönüştürerek sahip olabileceğiniz parayı hesaplar."
	L"\r\n"
	L"Burada 3 farklı türden hesaplama yapılır:"
	L"\r\n"
	L"+En az"
	L"\r\n"
	L"+Ortalama"
	L"\r\n"
	L"+En çok (Şüpheli Modu)"
	L"\r\n\r\n\r\n"
	L"...Birim Başına Değerler..."
	L"\r\n\r\n"
	L"-En az-"
	L"\r\n"
	L"+Hırsız = 250$"
	L"\r\n"
	L"+Balıkçı = 120$ (kısa vadede) , 169$ (uzun vadede)"
	L"\r\n"
	L"+Çiftçi = 10$ (tohum başına) , 1$ (meyve başına)"
	L"\r\n"
	L"+Şef = 400$"
	L"\r\n\r\n"
	L"-Ortalama-"
	L"\r\n"
	L"+Hırsız = 463$"
	L"\r\n"
	L"+Balıkçı = 150$ (kısa vadede) , 211$ (uzun vadede)"
	L"\r\n"
	L"+Çiftçi = 53$ (tohum başına) , 15$ (meyve başına)"
	L"\r\n"
	L"+Şef = 700$"
	L"\r\n\r\n"
	L"-En çok (Şüpheli Modu)-"
	L"\r\n"
	L"+Hırsız = 1100$"
	L"\r\n"
	L"+Balıkçı = 254$"
	L"\r\n"
	L"+Çiftçi = 1300$ (tohum başına) , 200$ (meyve başına)"
	L"\r\n"
	L"+Şef = 729$"
	L"\r\n\r\n\r\n"
	L"...Sabit Olanlar..."
	L"\r\n"
	L"+Polis = 150$"
	L"\r\n"
	L"+Madenci:"
	L"\r\n"
	L"+Toplanan altın = 115$"
	L"\r\n"
	L" +Sarı Kristal = 200$"
	L"\r\n"
	L" +Mavi Kristal = 342$"
	L"\r\n"
	L" +Mor Kristal = 600$"
	L"\r\n"
	L" +Yeşil Kristal = 800$"
	L"\r\n"
	L" +Kırmızı Kristal = 1200$"
};



LPCWSTR updatelog_tr[] =
{
	L"Güncelleme Geçmişi",
	L"1.0.4.3\nİlk GUI sürümü"
};



LPCWSTR about_tr =
	L"Sürüm 1.0.4.3"
	L"\n"
	L"[Yayınlanma Tarihi: 18.03.2025]"
	L"\n\n"
	L"Emir Ünlü tarafından hazırlandı."
	L"\n"
	L"github.com/emirunlusoftware"
	L"\n\n"
	L"Çeviri: Emir Ünlü"
;