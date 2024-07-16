//FONKSÝYONLAR
#include<stdio.h>

int kare(int x){
	int kare;
	kare = x*x;
	return kare;	//eðer fonk. programa bir deðiþken gönderecekse return kullanýlmalýdýr.
					//eðer deðer döndürmeyecekse void veri tipi kullanýlýr.
					//fonksiyon, ana programdan önce tanýmlanmalýdýr.
}
int main(){
	int s=5;
	printf("%d",kare(s));
}
