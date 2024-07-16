//1'DEN N'E KADAR OLAN SAYILARIN YAZILMASI
#include<stdio.h>

int main(){
	
	int n, s;
	
	printf("Bir sayi girin:");
	scanf("%d",&n);
	
	for(s=0; s<=n; s++)
	printf("%d\n",s);
	
	printf("\n\n\n");
	s=0;
	while(s<=n){
		printf("%d\n",s);
		s++;
	}
	
	return 0;
}
