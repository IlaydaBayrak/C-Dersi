//MATR�S ��LEMLER�
#include<stdio.h>

int main(){
	
	int a[2][3]={1,2,3,4,5,6};	//bu �ekilde de tan�mlanabilir.
	int b[2][3]={6,5,4,3,2,1};
	int c[2][3];
	
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++)
		c[i][j]=a[i][j]+b[i][j];
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++)
		{printf("%d",c[i][j]);}
		
		if(i%2==0) printf("\n"); //iki sat�r yaz.
	}
	
	return 0;
}
