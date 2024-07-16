//FAKTORÝYEL HESABI
#include<stdio.h>

int main() {
	
	int n, sayac=0, f=1;
	
	printf("Bir sayi girin:");
	scanf("%d",&n);
	
	say:	//etiket
	
	sayac++;
	f = f * sayac;
	
	if (sayac<n)
		goto say;
	
	printf("f=%d",f);
	
	return 0;
}
