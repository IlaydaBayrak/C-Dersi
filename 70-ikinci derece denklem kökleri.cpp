//ÝKÝNCÝ DERECEDEN DENKLEM KÖKLERÝ
#include<stdio.h>
#include<math.h>

int main(){

	double a, b, c, x1, x2, d;
	
	printf("a: ");	scanf("%lf",&a);
	printf("b: ");	scanf("%lf",&b);
	printf("c: ");	scanf("%lf",&c);
	
	d = b*b - 4 * a * c;
	
	if (d<0)
		printf("Reel kok yok!");
	else if (d==0){
		x1 = (-b)/(2 * a);
		printf("Tek katli kok var. x=%.2f",x1);
	}
	else{
		x1 = (-b+sqrt(d))/(2 * a);
		x2 = (-b-sqrt(d))/(2 * a);
		printf("Cift katli kok var. x1=%.2f ve x2=%.2f",x1,x2);
	}

	return 0;	
}
