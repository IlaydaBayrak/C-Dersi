//DÝZÝLER
#include<stdio.h>

int main(){
	
	int dizi[] = {2, 3, 5, 7, 11};
	int l;	//dizi eleman sayýsý
	l = sizeof(dizi)/sizeof(int);
	printf("Dizideki eleman sayisi = %d\n",l);
	
	int i;
	for (i=0;i<=(l-1);i++)
	printf("\n%d",dizi[i]);
	
	return 0;
}
