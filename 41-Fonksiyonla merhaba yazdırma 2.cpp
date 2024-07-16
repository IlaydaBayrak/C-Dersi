//FONKSÝYONLARLA MERHABA YAZDRMA 2
#include<stdio.h>

void merhaba(int n){
	int s;
	
	for (s=1;s<=n;s++)
	printf("Say 'Hello!'\n");
}

int main(){
	
	int k;
	
	printf("Kac defa: ");
	scanf("%d",&k);
	

		merhaba(k);	
}
