//��GEN ALANI
#include<stdio.h>
#include<math.h>	//sin() i�in

#define PI 3.1415

int main(){
	
	double a, b, alan, aci;
	
	printf("a:"); scanf("%lf",&a);
	printf("b:"); scanf("%lf",&b);
	printf("aci:"); scanf("%lf",&aci);
	
	alan = a * b * sin(aci*PI/180)/2;	//verilen a�� radyana �evrilir ��nk� derece cinsinden hesaplanamaz.
	
	printf("Alan= %f",alan);
	return 0;
}
