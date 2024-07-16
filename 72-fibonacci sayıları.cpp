//FÝBONACCÝ SAYILARI
#include<stdio.h>

int main(){
	
	int s1 = 1, s2 = 1, s3, i;
	
	printf("%d,%d",s1,s2);
	
	for (i=2;i<=10;i++){
		s3 = s1 + s2;
		printf(",%d",s3);
		s1 = s2;
		s2 = s3;
	}
	
	return 0;
}
