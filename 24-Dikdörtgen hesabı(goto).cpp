//DÝKDÖRTGENÝN ALANI VE ÇEVRESÝNÝN HESAPLANMASI
//GÝRÝLEN DEÐERÝN KONTROL EDÝLMESÝYLE
#include<stdio.h>

int main(){
	
	double a, c, x, y;
	
	x_gir:	//etiket
	printf("Dikdortgenin kenarlarindan birini giriniz:");
	scanf("%lf",&x);
	
	if (x<=0)
	goto x_gir;
	printf("\n");
	y_gir:	//etiket
	printf("Dikdortgenin kenarlarindan digerini giriniz:");
	scanf("%lf",&y);
	
	if (y<=0)
	goto y_gir;
	
	a = x * y;
	c = 2 * (x + y);
	
	printf("\nDikdortgenin alani = %f\nDikdorgenin cevresi = %f",a,c);
	
	return 0;
}
