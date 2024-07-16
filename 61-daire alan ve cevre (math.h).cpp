//DAÝRENÝN ALANI VE ÇEVRESÝ (MATH.H ÝLE)
#include<stdio.h>
#include<math.h>
#define pi 3.14

int main(){
	
	double r, a, c;
	
	printf("Yaricapi girin:");
	scanf("%lf",&r);
	
	a = pi*pow(r,2);
	c = 2*pi*r;
	
	printf("alan= %f\tcevre= %f",a,c);
	
	
	return 0;
} 
