//ASCII KODLARI
#include<stdio.h>

int main(){
	
	int i;
	
	for (i=0;i<255;i++){
		printf("%c\t",i);
		
		if(i%20==0) printf("\n");
	}
	
	return 0;
}
