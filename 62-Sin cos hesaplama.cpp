//G�R�LEN A�ININ S�N�S VE COS�N�S�
#include<stdio.h>
#include<math.h>
#define pi 3.141592

int main(){
	
	double d, r;
	
	printf("Bir aci girin:");
	scanf("%lf",&d);
	
	r = d*pi/180;
	
	printf("Aci=%.2f\nsin(%.2f)=%.2f\ncos(%.2f)=%.2f",d,d,sin(r),d,cos(r));
	
	return 0;
}
