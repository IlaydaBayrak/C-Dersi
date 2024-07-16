#include<stdio.h>

int main(){
	
	char as[50];
	
	printf("Adinizi ve soyadinizi giriniz:");
	gets(as);			//gets ise entera kadar okumakta, boþluk býrakmak sorun deðil.
						//gets yapýsýnda týrnak iþareti, yüzde falan bulunmaz. sadece dizi adý olur. 
	printf("\n");
	
	printf("Adiniz ve soyadiniz: %s\n",as);
	return 0;
}
