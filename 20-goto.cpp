//Karýþýklýk yaptýðý için pek kullanýlmaz ama bilinmeli.
#include<stdio.h>

int main() {

	int x, kare;
	
	gir:	//gir adlý bir etiket 
	
	printf("sayi:");
	scanf("%d",&x);
	
	if (x<0)
	goto gir;	//if içerisindeki koþul saðlandýðý takdirde goto komutu çalýþýr ve etiketin olduðu yere döner.
	
	kare = x*x;
	printf("Girilen sayinin karesi = %d",kare);

	return 0;
}
	
