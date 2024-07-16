//SAYI BASAMAKLARI
#include<stdio.h>

int main(){
	
	int a, sayac=0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&a);
	
	while(a!=0){
		a = a / 10;
		sayac += 1;
	}
	
	printf("Girdiginiz sayi %d basamakli bir sayidir.",sayac);
	
	return 0;
}
