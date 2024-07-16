//GÝRÝLEN ÝKÝ DEÐER ARASINDAKÝ SAYILARI YAZDIRMA
#include<stdio.h>

int main(){
	
	int x, y;
	
	printf("Ilk sayiyi giriniz: ");
	scanf("%d",&x);
	
	printf("Ikini sayiyi giriniz: ");
	scanf("%d",&y);	
	
	if (x<y){
		for ( ;x<=y;x++)
		printf("%d\n",x);
	}
	else if (x>y){
		for ( ;y<=x;y++)
		printf("%d\n",y);
	}
	else
		printf("\nGirilen sayilar ayni oldugundan aralarinda deger yoktur.");
	
	return 0;
}
