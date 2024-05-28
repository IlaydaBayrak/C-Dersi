//VERÝ TÝPÝ DÖNÜÞTÜRMESÝ
#include<stdio.h>

int main() {
	
	int n1 = 1, n2 = 2;
	double ort;
	
	ort = (double)(n1 + n2)/2;	//hesaplanan deðer double deðerinde olacaðý için yanlýþ sonuç vermez.
	
	printf("ortalama =%.2f",ort);
	
	return 0;
}
