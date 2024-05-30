//sadece pozitif sayýlarýn karesini alan kod
#include<stdio.h>

int main() {

	int x, kare;
	
	sayigir:	//etiket
	
	printf("Sayi giriniz:");
	scanf("%d",&x);
	
	if (x<0)
	{
		printf("Hata!!! Girilen sayi negatif.\n");
		goto sayigir;
	}
	
	kare=x*x;
	printf("Girilen sayinin karesi = %d ",kare);

	return 0;
}
