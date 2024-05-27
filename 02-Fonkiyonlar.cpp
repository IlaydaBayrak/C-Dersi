#include <stdio.h>

	int sonuc;
	int Hesapla(int a, int b);
	int main()
	{

	int n;
	n = Hesapla(6,4);
	sonuc = n;
	printf("%d \n",sonuc);
	
	return 0;
	}
	
	int Hesapla(int a, int b)
	{
		int x, y;
		x =3*a;
		y = b/2;
		
		return x+y;
	}

