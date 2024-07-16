//1'den n'e kadar olan sayýlarýn toplanmasý(fonksiyonla)
#include<stdio.h>

int topla(int x){
	
	int s, toplam = 0;
	
	for(s=1;s<=x;s++)
		toplam += s;
	printf("Toplam=%d",toplam);
}

int main(){
	
	int n;
	
	printf("Bir sayi girin: ");
	scanf("%d",&n);
	
	topla(n);
	
	return 0;
}
