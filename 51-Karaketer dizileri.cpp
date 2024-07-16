//KARAKTER DÝZÝLERÝ
/* NOT BÖLÜMÜ
	Harf veya kelime tanýmlarken char kullanýlýr.
	char harf = 'h';   harf tanýmlarken tek týrnak kullanýlýr.
	char kelime[] = "kelime";   kelime tanýmlanýrken çift týrnak kullanýlýr. dizi þeklinde tanýmlanýr.
	Kelime dizisinde, dizinin bittiðini göstermek için \0 (diðer bi adý NULL/NaN/NONE sabiti) kullanýlýr. */
	
#include<stdio.h>

int main(){
	
	char ad[50];
	printf("Adinizi giriniz:");
	scanf("%s",ad);		//string olduðu için s kullandýk
						//scanf, gelen ilk boþluk ya da enterda sonlanýr. yani sadece tek bir kelime okuyabilmektedir.
	printf("\n");
	
	printf("Adiniz: %s\n",ad);
	
	return 0;
}
