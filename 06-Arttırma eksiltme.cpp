#include <stdio.h>

int main()
{
	int x;
	x =5;
	
	printf("x = %d\n", x);
	printf("++x = %d\n", ++x);
	printf("x = %d\n\n\n", x);      //atrýk x'in deðeri deðiþtiði için altý olarak çýktý veriyor.
	
	x = 5;							//x'in deðerini tekrardan 5 yaptýk.
	printf("x++ = %d\n", x++);   	//önce x'i okudu.
	printf("x = %d\n", x);			//sonrasýnda x'i buraya yazarken arttýrdý çünkü artý iþareti x'den sonra.
	
	printf("\n\n\n");
	
	
	int a = 35;			//ÜZERÝNDE ÇALIÞILACAK!!!!!
	float b = 12.7;
		printf("a = %d iken --a = %d ve a = %d olur.\n",a, --a, a);
		printf("a = %d iken ++a = %d ve a = %d olur.\n",a, ++a, a);
		printf("a = %d iken a-- = %d ve a = %d olur.\n",a, a--, a);
		printf("a = %d iken a++ = %d ve a = %d olur.\n",a, a++, a);
	
	printf("\n\n");
	
		printf("b = %f iken --b = %f ve b = %f olur.\n",b, --b, b);
		printf("b = %f iken ++b = %f ve b = %f olur.\n",b, ++b, b);
		printf("b = %f iken b-- = %f ve b = %f olur.\n",b, b--, b);
		printf("b = %f iken b++ = %f ve b = %f olur.\n",b, b++, b);
		
		printf("\n\n\n");
		
		int z = 7, y = 3;			//iþlemleri böyle de yapabiliriz.
		printf("z + y = %d\n",z+=y); 
		printf("z - y = %d\n",z-=y);
		printf("z * y = %d\n",z*=y);
		printf("z / y = %d\n",z/=y);
		printf("z % y = %d\n",z%=y);	
		
	return 0;
}
