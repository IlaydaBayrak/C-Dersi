//N!(fonksiyon)
#include<stdio.h>

int factoriyel(int b){
	
	int a, f=1;
	
	for (a=1;a<=b;a++)
		f=f*a;
	return f;	//f'yi d�nd�r demek
} 

int main(){
	
	int b;
	
	printf("Bir say� girin: ");
	scanf("%d",&b);
	
	printf("%d! = %d",b,factoriyel(b));
}
