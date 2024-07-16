//ÝKÝ  BOYUTLU DÝZÝLER
/*NOT BÖLÜMÜ
	int x[1][2];  þeklinde tanýmlanabilir. 
	x[0][0] = 11;
	x[0][1] = 12;
	x[0][2] = 13;
	x[1][0] = 14;
	x[1][1] = 15;
	x[1][2] = 16;  mümkünse bunu kullanma :|
	
	int x[2][3] = {{1, 3, 5},{7, 11, 13}}; þeklinde tanýmlamak daha mantýklý :)
	bu iki satýr üç sütun dizi demek*/	
#include<stdio.h>

int main(){
	
	int satir, sutun;
	
	int dizi[3][2]={{1,2,},{3,4},{5,6}};
	
	for (satir=0;satir<3;satir++){
		for (sutun=0;sutun<2;sutun++)
			printf("%d|%d : %d\t\t",satir,sutun,dizi[satir][sutun]);
		
		if(sutun%2==0)	//her iki sütunda 
		printf("\n");	//alt satýra geç
	}
	
	return 0;
}
