//ONLUK SAYININ ÝKÝLÝK SAYIYA ÇEVRÝLMESÝ
#include<stdio.h>
#include<string.h>

int main(){
	
	int onluk;
	char ikili[8]={};
	char kalan[1];
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&onluk);
	
	while(onluk>0){
		if(onluk%2==0){
		kalan[0]='0';}
		else kalan[0]='1';
		strncat(ikili,kalan,1);
		onluk = onluk/2;
	}
	
	printf("%s",ikili);
	
	return 0;
}
