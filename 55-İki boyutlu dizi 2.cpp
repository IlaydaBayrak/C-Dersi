//SADECE KONSOLDAN OKUYOR
#include<stdio.h>

int main(){
	
	int satir, sutun;
	
	int dizi[3][2];
	
	for (satir=0;satir<3;satir++){
		for (sutun=0;sutun<2;sutun++){
			printf("indeks %d|%d:\t",satir,sutun);
			scanf("%d",&dizi[satir][sutun]);
		}
	}
	
	return 0;
}
