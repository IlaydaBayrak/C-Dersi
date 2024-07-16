//N ELEMANLI DÝZÝ OLUÞTURMA VE ELEMAN ATAMA
#include<stdio.h>

int main(){
	
	int n;
	
	printf("Dizi kac elemanli olsun? ");
	scanf("%d",&n);
	
	int dizi[n];
	
	int i;
	for (i=0;i<n;i++){
		printf("dizinin %d indisli elemanini girin:",i);
		scanf("%d",&dizi[i]);
		}
	
	printf("\nDIZININ ELEMANLARI\n");
	
	for (i=0;i<n;i++)
	printf("Dizinin %d indisli elemani: %d\n",i,dizi[i]);
	
	return 0;
}
