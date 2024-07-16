//N ADET SAYININ ORTALAMASI
#include<stdio.h>

int main(){
	
	int n, s;
	double top=0, sayi;
	
	printf("Kac adet sayi olsun?\t");
	scanf("%d",&n);
	
	for (s=1; s<=n; s++){
		printf("\n%d. sayiyi girin: ",s);
		scanf("%lf",&sayi);
		top = top + sayi;
	}
	
	printf("\nfor ortalama = %f\n",top/n);
	
	s=1; top=0;
	while(s<=n){
		printf("\n%d. sayiyi girin: ",s);
		scanf("%lf",&sayi);
		top = top + sayi;
		s++;
	}
	
	printf("\nWhile ortalama = %f",top/n);
	
	return 0;
}
