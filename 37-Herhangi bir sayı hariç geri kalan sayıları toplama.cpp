//1-10 ARASI 5 HARÝÇ SAYIALRIN TOPLAMI
#include<stdio.h>

int main(){
	
	int a=1,b=10,top =0;
	
	for ( ;a<=b;a++){
		if (a==5)
		continue;
	top = top +a;
	}
	
	printf("toplam=%d",top);
	
	return 0;
}
