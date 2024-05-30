//SWÝTCH - CASE KOMUTU
#include<stdio.h>

int main() {
	
	int a;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&a);
	
	switch(a) {
		case 5:
		printf("Girilen sayi 5");
		break;
		
		case 10:
		printf("Girilen sayi 10");
		break;
		
		case 15:
		printf("Girilen sayi 15");
		break;
		
		case 20:
		printf("Girilen sayi 20");
		break;
		
		default:	//olasý durumlar gerekleþmezse kullanýlýr. else gibi.
			printf("Girilen sayi farkli bir degere sahiptir.");
		
	}
	
	return 0;
}
