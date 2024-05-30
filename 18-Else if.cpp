#include<stdio.h>

int main() {

	int n;
	
	printf("not giriniz: ",n);
	scanf("%d",&n);
	
	if (n<50)
	printf("Kaldiniz.");
	
	else if (n<=65)
	printf("Orta.");
	
	else if (n<=80)
	printf("Iyi.");
	
	else
	printf("Pekiyi.");

	return 0;
}
