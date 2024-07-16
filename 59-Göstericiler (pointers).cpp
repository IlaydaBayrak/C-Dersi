//GÖSTERÝCÝLER (POÝNTERS)
//Bir deðiþkenin bellek adresini tutan deðiþkenlere denir.
#include<stdio.h>

int main(){
	
	char harf='a';
	
	printf("degiskenin degeri = %c\n",harf);
	
	printf("degiskenin adresi = %X\n",&harf);
	
	char *g=&harf;
	
	printf("gosterici degeri = %X\n",g);	//gösterici de bir deðiþkendir ve baþka bir deðiþkenin adresini saklar.
	
	g++;	//göstericileri arttýrýp azaltabiliriz.
	
	printf("gosterici degeri 2 = %X\n",g);
	
	g=g+4;	//iþlem de yapabiliriz. bu da RAM'de dolaþmayý saðlýyor.
	
	printf("gosterici degeri 3 = %X\n",g);
	
	char harfler[5]={'a','b','c','d','e'};	//dizilerde de kullanýlabilir.
	
	printf("Ýlk elemanin adresi = %X\n",&harfler[0]);	//harfler[0] demek ile
	printf("Dizi adi........... = %X\n",harfler);		//harfler demek ayný þey. her ikisi de dizinin ilk teriminin adresine gider.
	printf("\n");										//harfler+1=harfler[1], harfler+2=harfler[2]...
	
	int i;
	for (i=0;i<5;i++)
	printf("%c\t",*(harfler+i));	/*harfler deðiþkeni &harfler[0] elemanýnýn adresini taþýyor ise
									*harfler göstericisi de harfler[0] elemanýnýn deðerini taþýyor demektir.*/
	
	return 0;
}
