//FONKS�YONLAR
#include<stdio.h>

int kare(int x){
	int kare;
	kare = x*x;
	return kare;	//e�er fonk. programa bir de�i�ken g�nderecekse return kullan�lmal�d�r.
					//e�er de�er d�nd�rmeyecekse void veri tipi kullan�l�r.
					//fonksiyon, ana programdan �nce tan�mlanmal�d�r.
}
int main(){
	int s=5;
	printf("%d",kare(s));
}
