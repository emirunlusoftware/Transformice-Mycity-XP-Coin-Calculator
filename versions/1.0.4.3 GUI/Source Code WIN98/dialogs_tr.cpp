#include "main.h"





LPCSTR menu_tr[] =
{
	"Toplam XP'mi Bulma",
	"İleriye/Geriye\nDönük Seviye Hesaplama",
	"İki Durum Arasındaki Fark",
	"Coin Hesaplayıcı'yı\nÇalıştır",
	"Coin Hesaplayıcı\nNasıl Çalışır?",
	"Hakkında",
	"Güncelleme\nGeçmişi",
	"Dil",
	"Hesapla!",
	"Ana Menü",
};



LPCSTR calc_tr[] =
{
	/* [0] - [3] */
	"...Şu ana kadar edindiğiniz toplam XP'yi bulur...",
	"...XP ekleyerek/çıkararak yeni seviyenizi hesaplar...",
	"...İki oyuncu arasındaki XP farkını bulur...",
	"...Profilinizdeki istatistikleri sırayla girin...",

	/* [4] - [7] */
	"Seviyenizi yazın",
	"Şu an kaç XP'ye sahipsiniz?",
	"XP ekle",
	"XP çıkar",

	/* [8] - [11] */
	"Oyuncu 1'in seviyesi",
	"Oyuncu 1 XP'si",
	"Oyuncu 2'nin seviyesi",
	"Oyuncu 2 XP'si",

	/* [12] - [13] */
	"SIFIRDAN BÜYÜK OLMALI",
	"0 - %u ARASINDA OLMALI",

	/* [14] - [25] */
	"Tutuklanan oyuncular:",
	"Soygunlar:",
	"Avlanan balık:",
	"Toplanan altın:",
	"Sarı Kristal:",
	"Mavi Kristal:",
	"Mor Kristal:",
	"Yeşil Kristal:",
	"Kırmızı Kristal:",
	"Satılan tohumlar:",
	"Satılan meyveler:",
	"Tamamlanan siparişler:",

	/* [26] - [28] */
	"En az",
	"Ortalama",
	"En çok",

	/* [29] - [31] */
	"Toplam XP: %lld",
	"Seviye: %d (%lld/%d)",
	"Fark: %llu XP"
};



LPCSTR coin_howto_tr =
{
	"...Coin Hesaplayıcı Nasıl Çalışır?..."
	"\r\n\r\n"
	"Bu program, istatistiklerinizi belli standartlara göre paraya dönüştürerek sahip olabileceğiniz parayı hesaplar."
	"\r\n"
	"Burada 3 farklı türden hesaplama yapılır:"
	"\r\n"
	"+En az"
	"\r\n"
	"+Ortalama"
	"\r\n"
	"+En çok (Şüpheli Modu)"
	"\r\n\r\n\r\n"
	"...Birim Başına Değerler..."
	"\r\n\r\n"
	"-En az-"
	"\r\n"
	"+Hırsız = 250$"
	"\r\n"
	"+Balıkçı = 120$ (kısa vadede) , 169$ (uzun vadede)"
	"\r\n"
	"+Çiftçi = 10$ (tohum başına) , 1$ (meyve başına)"
	"\r\n"
	"+Şef = 400$"
	"\r\n\r\n"
	"-Ortalama-"
	"\r\n"
	"+Hırsız = 463$"
	"\r\n"
	"+Balıkçı = 150$ (kısa vadede) , 211$ (uzun vadede)"
	"\r\n"
	"+Çiftçi = 53$ (tohum başına) , 15$ (meyve başına)"
	"\r\n"
	"+Şef = 700$"
	"\r\n\r\n"
	"-En çok (Şüpheli Modu)-"
	"\r\n"
	"+Hırsız = 1100$"
	"\r\n"
	"+Balıkçı = 254$"
	"\r\n"
	"+Çiftçi = 1300$ (tohum başına) , 200$ (meyve başına)"
	"\r\n"
	"+Şef = 729$"
	"\r\n\r\n\r\n"
	"...Sabit Olanlar..."
	"\r\n"
	"+Polis = 150$"
	"\r\n"
	"+Madenci:"
	"\r\n"
	"+Toplanan altın = 115$"
	"\r\n"
	" +Sarı Kristal = 200$"
	"\r\n"
	" +Mavi Kristal = 342$"
	"\r\n"
	" +Mor Kristal = 600$"
	"\r\n"
	" +Yeşil Kristal = 800$"
	"\r\n"
	" +Kırmızı Kristal = 1200$"
};



LPCSTR updatelog_tr[] =
{
	"Güncelleme Geçmişi",
	"1.0.4.3\nİlk GUI sürümü"
};



LPCSTR about_tr =
	"Sürüm 1.0.4.3"
	"\n"
	"[Yayınlanma Tarihi: 18.03.2025]"
	"\n\n"
	"Emir Ünlü tarafından hazırlandı."
	"\n"
	"github.com/emirunlusoftware"
	"\n\n"
	"Çeviri: Emir Ünlü"
;