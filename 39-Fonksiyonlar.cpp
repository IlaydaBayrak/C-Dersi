//FONKSİYONLAR
#include<stdio.h>

int kare(int x){
	int kare;
	kare = x*x;
	return kare;	//eğer fonk. programa bir değişken gönderecekse return kullanılmalıdır.
					//eğer değer döndürmeyecekse void veri tipi kullanılır.
					//fonksiyon, ana programdan önce tanımlanmalıdır.
}
int main(){
	int s=5;
	printf("%d",kare(s));
}
