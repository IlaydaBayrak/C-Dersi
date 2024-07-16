//SAYISAL LOTO
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int sayisal[6], s;
	
	for(s=0;s<6;s++)
		sayisal[s]=rand()%49+1;		//x+rand()%y ifadesi x-y arasý sayý üretmek için kullanýlýr. Kodda x'in yeri deðiþmiþ sadece.

	for(s=0;s<6;s++)
	printf("%d\n",sayisal[s]);	
	
	return 0;
}
