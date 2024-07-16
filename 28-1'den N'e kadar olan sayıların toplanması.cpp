//1'DEN N'E KADAR OLAN SAYILARIN TOPLANMASI
#include<stdio.h>

int main() {
	
	int n, sayac=0, toplam=0;
	
	printf("Bir sayi girin:");
	scanf("%d",&n);
	
	say:	//etiket
	
	sayac= sayac+ 1;
	toplam = toplam +sayac;
	
	if (sayac<n)
		goto say;
	
	printf("toplam = %d",toplam);
	
	return 0;
}
