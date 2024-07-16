//G�STER�C�LER (PO�NTERS)
//Bir de�i�kenin bellek adresini tutan de�i�kenlere denir.
#include<stdio.h>

int main(){
	
	char harf='a';
	
	printf("degiskenin degeri = %c\n",harf);
	
	printf("degiskenin adresi = %X\n",&harf);
	
	char *g=&harf;
	
	printf("gosterici degeri = %X\n",g);	//g�sterici de bir de�i�kendir ve ba�ka bir de�i�kenin adresini saklar.
	
	g++;	//g�stericileri artt�r�p azaltabiliriz.
	
	printf("gosterici degeri 2 = %X\n",g);
	
	g=g+4;	//i�lem de yapabiliriz. bu da RAM'de dola�may� sa�l�yor.
	
	printf("gosterici degeri 3 = %X\n",g);
	
	char harfler[5]={'a','b','c','d','e'};	//dizilerde de kullan�labilir.
	
	printf("�lk elemanin adresi = %X\n",&harfler[0]);	//harfler[0] demek ile
	printf("Dizi adi........... = %X\n",harfler);		//harfler demek ayn� �ey. her ikisi de dizinin ilk teriminin adresine gider.
	printf("\n");										//harfler+1=harfler[1], harfler+2=harfler[2]...
	
	int i;
	for (i=0;i<5;i++)
	printf("%c\t",*(harfler+i));	/*harfler de�i�keni &harfler[0] eleman�n�n adresini ta��yor ise
									*harfler g�stericisi de harfler[0] eleman�n�n de�erini ta��yor demektir.*/
	
	return 0;
}
