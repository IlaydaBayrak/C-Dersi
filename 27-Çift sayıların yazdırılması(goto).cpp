//1'DEN N'E KADAR OLAN ÇÝFT SAYILARIN YAZDIRILMASI
#include<stdio.h>

int main() {
	
	int n, sayac=0;
	
	printf("Bir sayi girin:");
	scanf("%d",&n);
	
	say:	//etiket
	
	sayac= sayac+ 2;
	printf("%d\n",sayac);
	
	if (sayac<n)
		goto say;
	
	return 0;
}
