//TOPLA FONKSÝYONU
#include<stdio.h>

double topla(double x, double y){
	
	double topla=x+y;
	return topla;
}

int main(){
	
	double s1,s2;
	printf("Birinci sayi girin: ");
	scanf("%lf",&s1);
	
	printf("Ikinci sayiyi girin: ");
	scanf("%lf",&s2);
	
	printf("toplam = %lf",topla(s1,s2));	
}
