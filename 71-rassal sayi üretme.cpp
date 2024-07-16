#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int sayi, rassayi;
	
	srand(time(NULL));	//Kod her çalýþtýðýnda farklý sayýlar üretmesini saðlar.
	
	rassayi = rand()%10+1;
	
	do{
		printf("Sayi giriniz: "); scanf("%d",&sayi);
		if(sayi>rassayi)	printf("Daha kucuk bir sayi giriniz.\n");
		if(sayi<rassayi)	printf("Daha buyuk bir sayi giriniz.\n");
	}while(sayi!=rassayi);
	
	printf("Tebrikler! %d dogru tahmin.",sayi);
	
	return 0;
}
