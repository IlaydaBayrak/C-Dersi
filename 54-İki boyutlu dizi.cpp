//�K�  BOYUTLU D�Z�LER
/*NOT B�L�M�
	int x[1][2];  �eklinde tan�mlanabilir. 
	x[0][0] = 11;
	x[0][1] = 12;
	x[0][2] = 13;
	x[1][0] = 14;
	x[1][1] = 15;
	x[1][2] = 16;  m�mk�nse bunu kullanma :|
	
	int x[2][3] = {{1, 3, 5},{7, 11, 13}}; �eklinde tan�mlamak daha mant�kl� :)
	bu iki sat�r �� s�tun dizi demek*/	
#include<stdio.h>

int main(){
	
	int satir, sutun;
	
	int dizi[3][2]={{1,2,},{3,4},{5,6}};
	
	for (satir=0;satir<3;satir++){
		for (sutun=0;sutun<2;sutun++)
			printf("%d|%d : %d\t\t",satir,sutun,dizi[satir][sutun]);
		
		if(sutun%2==0)	//her iki s�tunda 
		printf("\n");	//alt sat�ra ge�
	}
	
	return 0;
}
