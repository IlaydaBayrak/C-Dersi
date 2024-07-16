//DÝZÝ ELEMANLARINI TOPLANMA, ORTALAMA BULMA VE TERSTEN YAZDIRMA
#include<stdio.h>

int main(){
	
	int i, l, ort=0, top=0;
	
	int dizi[]= {1,2,3,4,5};
	
	l = sizeof(dizi)/sizeof(int);
	
	for (i=0;i<l;i++)
		top= top + dizi[i];
	
	ort = top/l;
	
	printf("Dizideki elemanlarin toplami=%d\n",top);
	printf("Dizideki elemanlarin ortalamasi=%d\n",ort);
	
	printf("\n");
	
	for (i=(l-1);i>=0;i--)
		printf("%d\n",dizi[i]);
	
	return 0;
}
