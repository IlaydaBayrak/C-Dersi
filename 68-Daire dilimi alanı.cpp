//DAÝRE DÝLÝMÝNÝN ALANINI HESAPLAMA
#include<stdio.h>
#define PI 3.1415

int main(){
	
	double r, aci, alan;
	
	printf("r:"); scanf("%lf",&r);
	printf("aci:"); scanf("%lf",&aci);
	
	alan = aci * PI * r * r / 360;
	
	printf("Alan = %f",alan);
		
	return 0;
}
