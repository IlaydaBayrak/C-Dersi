//fahrenhayt - santigrat dönüşümü
#include<stdio.h>
#define oran 1.8

int main() {
	
	double f,s;
	
	printf("fahrenhayt:");
	scanf("%lf",&f);
	
	s = (f - 32)/oran;
	
	printf("\nfahrenhayt = %.2f ise santigrat = %.2f",f,s);
	
	return 0;
}
