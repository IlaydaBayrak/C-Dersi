#include <stdio.h>

int main()
{
	int a = 7, b = 3;
	int integerdiv, modulus;
	float floatdiv;
	
	integerdiv = a / b; 		//tam sayý bölme
	modulus = a % b; 	  		//kalan
	floatdiv = (float) a / b;	//float'a dönüþüm, virgüllü olarak yazacaktýr.
	
	printf("a / b = %d\n", integerdiv);
	printf("a % b = %d\n", modulus);
	
	printf("(float) a / b = %f\n", floatdiv);
	
	return 0;
}
