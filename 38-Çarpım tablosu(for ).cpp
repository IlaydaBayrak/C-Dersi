//ÇARPIM TABLOSU
#include<stdio.h>

int main(){
	
	int a, b, s;
	
	for (a=1;a<=9;a++){
		for (b=1;b<=9;b++){
		s=a*b;
		printf("%d*%d=%d\n",a,b,s);
		}
	printf("\n");
	}
		
	
	return 0;
}
