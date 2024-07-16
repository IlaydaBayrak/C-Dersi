//FAKTORÝYEL HESABI • FOR VE WHÝLE ÝLE
#include<stdio.h>

int main(){
	
	int n, s, f =1;
	
	printf("Bir sayi girin: ");
	scanf("%d",&n);
	
	for (s=1; s<=n; s++)
		f = f * s;
	
	printf("for ile olan %d!=%d\n",n,f);
	
	s=1; f=1;
	while (s<=n){
		f = f * s;
		s++;
	}
	
	printf("while ile olan %d!=%d",n,f);
	
	return 0;
}
