//DÝZÝLER TOPLAMA 2
#include<stdio.h>

int main(){

	int dizi[5];
	
	int i;
	for (i=0;i<5;i++){
		printf("Dizinin %d idisli elemani",i);
		scanf("%d",&dizi[i]);
	}

	printf("\n");
	
	for(i=0;i<5;i++)
		printf("Dizinin %d indisli elemani: %d \n",i,dizi[i]);
		
	return 0;
}
