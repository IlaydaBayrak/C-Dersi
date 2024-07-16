//FOR DÖNGÜSÜ • WHÝLE DÖNGÜSÜ • DO-WHÝLE DÖNGÜSÜ • BREAK KOMUTU • CONTÝNUE KOMUTU
#include<stdio.h>

int main () {
	
	int s, top=0;
	for (s=0; s<=10; s++)
		top = top + s;
	printf("toplam=%d\n",top);
	
	
	int a=1, toplam=0;
	while (a<=5){
		toplam= toplam + a;
		a++;
	}
	printf("toplam2= %d\n",toplam);
	
	int b=1, tplm=0;	//koþul kontrol edilmeden önce yapýlýr sonra kontrol eder.
	do {				//koþul bozulana kadar devam eder. iþlemi koþul saðlanmasa bile bir kere çalýþtýrýr.
		tplm= tplm + b;
		b++;
	}while(b<=5);
	
	printf("toplam3= %d\n",tplm);
	
	int c, tp=0;
	for (c=0; c<=10; c++){
	if (c==3)	//eðer 3 ise
		break;	//döngüden çýk
	tp = tp + c;}
	printf("toplam=%d\n",tp);
	
	int d, tpl=0;
	for (d=0; d<=5; d++){
	if (d==3)	//eðer 3 ise
		continue;	//sonraki deðere geç. bunu atla demek
	tpl = tpl + d;}
	printf("toplam=%d\n",tpl);
	
	return 0;
}
