#include<stdio.h>

int main(){
	
	char as[50];
	
	printf("Adinizi ve soyadinizi giriniz:");
	gets(as);			//gets ise entera kadar okumakta, bo�luk b�rakmak sorun de�il.
						//gets yap�s�nda t�rnak i�areti, y�zde falan bulunmaz. sadece dizi ad� olur. 
	printf("\n");
	
	printf("Adiniz ve soyadiniz: %s\n",as);
	return 0;
}
