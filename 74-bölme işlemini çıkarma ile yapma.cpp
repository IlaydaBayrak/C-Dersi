//BÖLME ÝÞLEMÝNÝN ÇIKARMA ÝLE YAPILMASI
#include<stdio.h>

int main(){
	
	int bolunen, bolen;
	int sayac = 0;
	
	printf("Bolunen sayiyi giriniz: ");
	scanf("%d",&bolunen);
	
	printf("Bolen sayiyi giriniz: ");
	scanf("%d",&bolen);
	
	while(bolen<=bolunen){
		bolunen = bolunen - bolen;
		sayac += 1;
	}
	
	printf("Bolum = %d",sayac);
	
	return 0;
}
