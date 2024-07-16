//[M][N] ELEMANLI DÝZÝ OLUÞTURMA VE ELEMAN OKUMA/YAZMA
#include<stdio.h>

int main(){
	
	int m,n;
	printf("Satir sayisi:");
	scanf("%d",&m);

	printf("Sutun sayisi:");
	scanf("%d",&n);
	
	int dizi[m][n],i,j;
	
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			printf("%d|%d:",i,j);
			scanf("%d",&dizi[i][j]);
		}
	}
	
	for (i=0;i<m;i++){
		for (j=0;j<n;j++)
			{printf("%d|%d:%d\t",i,j,dizi[i][j]);}
	}
	
	
	return 0;
}
