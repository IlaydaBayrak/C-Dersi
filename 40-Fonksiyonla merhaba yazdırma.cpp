//FONKSÝYONLARLA MERHABA YAZDRMA
#include<stdio.h>

void merhaba(){
	printf("Say 'Hello!'\n");
}

int main(){
	
	int k,s;
	
	printf("Kac defa: ");
	scanf("%d",&k);
	
	for (s=1;s<=k;s++){
		merhaba();	
	}
	
}
