//VÝZE %40 + FÝNAL %60 OLACAK ÞEKÝLDE NOT HESAPLAMA
#include<stdio.h>

int main() {
	
	int n, v, f;
	
	v_gir:	//etiket
	printf("Vize notunu giriniz:");
	scanf("%d",&v);
	
	if (v<0 || v>100)
		goto v_gir;
	
	f_gir:	//etiket
	printf("Final notunu giriniz:");
	scanf("%d",&f);
	
	if (f<0 || f>100)
		goto f_gir;
	
	n = (v*0.4)+(f*0.6);
	
	printf("\nNotunuz: %d",n);
	
	if (n<50)
	printf("\nKaldiniz.");
	else
	printf("\nGectiniz.");
	return 0;
}
