//KARAKTER D�Z�LER�
/* NOT B�L�M�
	Harf veya kelime tan�mlarken char kullan�l�r.
	char harf = 'h';   harf tan�mlarken tek t�rnak kullan�l�r.
	char kelime[] = "kelime";   kelime tan�mlan�rken �ift t�rnak kullan�l�r. dizi �eklinde tan�mlan�r.
	Kelime dizisinde, dizinin bitti�ini g�stermek i�in \0 (di�er bi ad� NULL/NaN/NONE sabiti) kullan�l�r. */
	
#include<stdio.h>

int main(){
	
	char ad[50];
	printf("Adinizi giriniz:");
	scanf("%s",ad);		//string oldu�u i�in s kulland�k
						//scanf, gelen ilk bo�luk ya da enterda sonlan�r. yani sadece tek bir kelime okuyabilmektedir.
	printf("\n");
	
	printf("Adiniz: %s\n",ad);
	
	return 0;
}
