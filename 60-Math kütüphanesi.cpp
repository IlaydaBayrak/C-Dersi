//MATH.H K�T�PHANES�
#include<stdio.h>
#include<math.h>

int main(){
	//KAREK�K
	double x;
	printf("x: ");
	scanf("%lf",&x);
	
	printf("x=%.2f karekoku=%.2f\n\n",x,sqrt(x));
	
	//�S ALMA
	double z, y;
	printf("sayi:");
	scanf("%lf",&z);
	
	printf("kuvvet:");
	scanf("%lf",&y);
	
	printf("%.2f^%.2f=%.2f",z,y,pow(z,y));

	return 0;
}
