//GÝRÝLEN ÝKÝ DEÐER ARASINDAKÝ SAYILARI TOPLAMA
#include<stdio.h>

int main(){
	
	int x, y, top=0;
	
	printf("Ilk sayiyi giriniz: ");
	scanf("%d",&x);
	
	printf("Ikini sayiyi giriniz: ");
	scanf("%d",&y);	
	
	if (x<y){
		for ( ;x<=y;x++)
		top = top + x;
	}
	else if (x>y){
		for ( ;y<=x;y++)
		top = top + y;
	}
	else
		printf("\nGirilen sayilar ayni oldugundan aralarinda deger yoktur.");
	
	printf("Girilen sayilarin toplami = %d",top);	
	return 0;
}
