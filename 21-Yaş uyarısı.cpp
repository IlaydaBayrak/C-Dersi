//yaþ 18'den küçükse uyarý ver deðilse uyarý verme
#include<stdio.h>

int main() {

	int yas;
	
	printf("Yasinizi giriniz:");
	scanf("%d",&yas);
	
	if (yas<18)
		printf("Yasiniz kucuk.\n");
	
	
	printf("Siteye gir....");

	return 0;
}
