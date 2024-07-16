#include<stdio.h>

int main(){
	
	int sonuc=1, sayac=2, sayi;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for ( ;sayac<=sayi-1;sayac++){
		if (sayi%sayac==0){
			sonuc = 0;
			break;
		}
	}
	
	if (sonuc==1)
	printf("%d sayisi asal sayidir.",sayi);
	
	else
	printf("%d sayisi asal sayi degildir.",sayi);
	return 0;
}
