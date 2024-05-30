#include<stdio.h>

int main() {
	
	char n;			//int de olur.
	
	printf("not giriniz: ",n);
	scanf("%d",&n);
	
	if (n<50)						//tek satýr yazýlacaksa süslü paranteze gerek yok.
	printf("Sinifta kaldiniz.");	//ayrýca NOKTALI VÝRGÜL kullanýlmasýna gerek yoktur.
	
	if(n>=50) {						//iki veya daha fazla satýr yazýlacak ise süslü parantez kullanýlmalý.
	printf("Tebrikler!\n");
	printf("Sinifi gectiniz.");
	}
									//ayný þeyler else komutu için de geçerlidir.
	return 0;
}
