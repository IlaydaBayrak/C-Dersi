#include <stdio.h>

int main()
{
	double d;									//sayý girme ekraný açýldýðýnda int deðerine ondalýklý sayý girersen otomatik olarak double deðerine atama
	int i;										//yapacaktýr ve deðer girmeni istemeyecektir.
	
	printf("tamsayi giriniz:");
	scanf("%d",&i);
	
	printf("ondalikli sayi giriniz:");
	scanf("%lf",&d);
	
	
	printf("\n");
	
	printf("d = %lf \ni = %d",d,i);

	return 0;
}
