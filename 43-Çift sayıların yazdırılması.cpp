//1'den n'e kadar olan �ift say�lar�n yazd�r�lmas�
#include<stdio.h>

int ciftsayi(int n){
	
	int s;
	
	for (s=2;s<=n;s+=2)
	printf("%d\n",s);
}

int main(){
	
	int s;
	
	printf("Bir sayi girin: ");
	scanf("%d",&s);
	
	ciftsayi(s);
	
	return 0;
}
