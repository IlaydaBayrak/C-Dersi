#include <stdio.h>

int main()
{
		
	int x = 10;			// 1 = doðru
	int y = 4;			// 0 = yanlýþ
	int sonuc;
	
	sonuc = (x>y);					//büyük
	printf("x>y = %d \n", sonuc);
	
	sonuc = (x<y);					//küçük
	printf("x<y = %d \n", sonuc);
	
	sonuc = (x<=y);					//küçük eþit
	printf("x<=y = %d \n", sonuc);
	
	sonuc = (x>=y);					//büyük eþit
	printf("x>=y = %d \n", sonuc);
	
	sonuc = (x==y);					//eþit mi
	printf("x==y = %d \n", sonuc);
	
	sonuc = (x!=y);					//eþit deðil mi
	printf("x!=y = %d \n", sonuc);
	
	printf("\n\n\n");


	return 0;
}
