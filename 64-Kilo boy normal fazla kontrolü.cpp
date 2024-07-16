#include<stdio.h>
#include<math.h>

double fark(int s , double r){
	
	double f = fabs(s - r); 
	
	return f;
}

int main(){
	
	int a,c;
	double b;
	
	printf("Boyunuzu cm cinsinden giriniz:");
	scanf("%d",&a);
	
	scanf("%lf",&b);
	
	printf("Kilonuzu giriniz:");
	scanf("%d",&c);
	
	printf("\n");
	
	if (fark(b,c)<=10)
	printf("Normal");
	
	else
	printf("Fazla");
	
	return 0;
}
