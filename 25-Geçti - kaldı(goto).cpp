//GEÇTÝ - KALDI PROGRAMI
#include<stdio.h>

int main() {
	
	int n1, n2, ort;
	
	n1_gir:	//etiket
	printf("Ilk notu giriniz:");
	scanf("%d",&n1);
	if (n1<0 || n1>100)
	goto n1_gir;
	
	printf("\n");
	
	n2_gir:	//etiket
	printf("Ikinci notu giriniz:");
	scanf("%d",&n2);
	if (n2<0 || n2>100)
	goto n2_gir;
	
	ort = (n1 + n2)/2;
	
	printf("\nOrtalama = %d",ort);
	
	if (ort<50)
	printf("\nKaldiniz.");
	else
	printf("\nGectiniz.");
	
	
	return 0;
}
