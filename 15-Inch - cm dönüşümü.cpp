//inch - cm dönüþümü
#include<stdio.h>
#define oran 2.54

int main() {
	
	double i,cm;
	
	printf("inch degerini giriniz: "); 
	scanf("%lf",&i);					//scanf iken lf, printf iken f kullanmalýyýz.
	
	cm = i * oran;
	
	printf("\ninch=%.2f ise cm=%.2f",i,cm);
	
	return 0;
}

