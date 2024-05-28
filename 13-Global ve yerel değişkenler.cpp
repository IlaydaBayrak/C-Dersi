#include<stdio.h>

//global deðiþkenlerimiz
static int s1, s2, toplam=0, fark =0;

int hesapla() {
	fark = s2 - s1;
	printf("fark = %d", fark);
}

int main() {
	
	/*NOT BÖLÜMÜ
	• deðiþkenler kullanýlmadan önce tanýmlanmalýdýr.
	• ilk karekter harf (alfa numerik) olmalýdýr. rakam olmasý hataya sebebiyet verir.
	• boþluk olmamalý. '_' kullanýlabilir. 
	• türkçe karakterler kullanýlmamalý. örn: ð, ç, þ vb.
	• komutlar deðiþken adý olamaz.*/
	
	/*NOT BÖLÜMÜ 2
	main() fonksiyonun içerisine tanýmlanan deðerler sadece o blokta kullanýlýr, diðer bloða geçildiðinde bellekten silinir. yerel deðiþken
	ama main() fonksiyonu dýþýna yazýldýðýnda program bitene kadar bellekte kalýr. bittikten sonra silinir. global deðiþken.
	deðer tanýmlamak gerekli deðil isim verip blok içerisinde de tanýmlayabilirsin.*/
	
	//global deðiþkenlerin aldýðý deðerleri saklamasýný istiyorsak static olarak tanýmlamalýyýz. örnek yukarýda.
	
	s1 = 10;
	s2 = 20;
	toplam = s1 + s2;
	
	printf("toplam = %d\n",toplam);
	
	//hesapla fonksiyonunun çalýþmasýný saðlar.
	//bu fonksiyon main() fonksiyonundan önce gelmeli öteki türlü okunmuyor.
	hesapla();
	
	return 0;
}

