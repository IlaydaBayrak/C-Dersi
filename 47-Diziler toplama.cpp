//Dizi elemanlarýný konsoldan alýp toplama   ÇALIÞMIYOR :(
#include<stdio.h>

int main(){
	
	int i, toplam = 0;
	int dizi[4];
	
	printf("Arada bosluk birakarak 4 tane sayi giriniz: ");
	scanf("%d %d %d %d",dizi[0],dizi[1],dizi[2],dizi[3]);
	
	toplam = dizi[0]+dizi[1]+dizi[2]+dizi[3];
	
	printf("Toplam = %d",toplam);
	
	return 0;
}
