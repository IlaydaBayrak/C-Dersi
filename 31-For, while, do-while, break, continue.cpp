//FOR D�NG�S� � WH�LE D�NG�S� � DO-WH�LE D�NG�S� � BREAK KOMUTU � CONT�NUE KOMUTU
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
	
	int b=1, tplm=0;	//ko�ul kontrol edilmeden �nce yap�l�r sonra kontrol eder.
	do {				//ko�ul bozulana kadar devam eder. i�lemi ko�ul sa�lanmasa bile bir kere �al��t�r�r.
		tplm= tplm + b;
		b++;
	}while(b<=5);
	
	printf("toplam3= %d\n",tplm);
	
	int c, tp=0;
	for (c=0; c<=10; c++){
	if (c==3)	//e�er 3 ise
		break;	//d�ng�den ��k
	tp = tp + c;}
	printf("toplam=%d\n",tp);
	
	int d, tpl=0;
	for (d=0; d<=5; d++){
	if (d==3)	//e�er 3 ise
		continue;	//sonraki de�ere ge�. bunu atla demek
	tpl = tpl + d;}
	printf("toplam=%d\n",tpl);
	
	return 0;
}
