//SAYISAL LOTO
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int sayisal[6], s;
	
	for(s=0;s<6;s++)
		sayisal[s]=rand()%49+1;		//x+rand()%y ifadesi x-y aras� say� �retmek i�in kullan�l�r. Kodda x'in yeri de�i�mi� sadece.

	for(s=0;s<6;s++)
	printf("%d\n",sayisal[s]);	
	
	return 0;
}
