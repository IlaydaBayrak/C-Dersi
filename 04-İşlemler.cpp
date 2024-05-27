#include <stdio.h>

int puan;

int main()
{
	puan = 73;
	printf("%5d",puan - 2);					//d'nin yanýna yazdýðýmýz sayý kadar boþluk býrakýyor.
	printf("%5d",puan * 2);
	printf("%5d",puan / 2);
	printf("%5d",puan % 2);
	printf("%5d",123 + 456);
	printf("%5d \n", 12 * 2 + 2 - 8 / 4);
	printf("%4d%4d \n\n\n",10,20);					//yan yana yazmak da bir þeyi deðiþtirmiyor.
	
	
	printf("%d \n", puan);		//ilk deðerimiz 73'tü.
	puan = puan + 5;			//beþ ekledik.
	printf("%d \n\n\n", puan);		//þimdi ise puan yeni bir deðere sahip oldu.
	
	
	int a, b;
	printf("a sayisini giriniz: ");
	scanf("%d",&a);
	
	printf("b sayisini giriniz:");
	scanf("%d",&b);
	
	printf("Toplam = %d\n",a+b);
	printf("Fark = %d\n", a-b);
	printf("Carpim = %d\n", a*b);
	printf("Bolum = %d\n", a/b);	//bölmede sadece tam sayý kýsmýný alýyor.
	printf("Kalan = %d\n", a%b);
	printf("Artim = %d\n", ++a);
	printf("Eksilme = %d\n", --b);	
	
	puan = ++puan;
	printf("%d\n",puan);  //çýktý 79
	
	
	
	return 0;
}
