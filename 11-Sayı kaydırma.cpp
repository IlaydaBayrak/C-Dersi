#include <stdio.h>

int main()

{
	int a = 5;
	int b = 61616;
	float c = 54321.9876;
	

	printf("%d \n",a);	//normal
	printf("%5d \n",a);	//arada yazýlan sayý kadar boþluk býrakýr.
	printf("%-5d \n",a);//yazýlan sayý kadar sola doðru gider.
	
	printf("\n\n");
	
	printf("%d \n",b);	//normal
	printf("%3d \n",b);	//hiç bir iþe yaramaz çünkü alan 3 (yazýlan sayý kadar) ama yazan b'ye atanan daha büyük basamaklý sayýdýr.

	printf("\n\n");
	
	printf("%7.2f \n\n",c);	//yedi basamak gösterilecek iki tanesi noktadan sonrasý olacak.
						//yuvarlama yapar son haneye göre.
		
	double r = 3.1418;
					
	printf("|%f|\n",r);		//noktadan sonra 6 basamak gösterir
	printf("|%10.2f|\n",r);	//10 karakter alan 3.14 (saða yasla)
	printf("|%-10.2f|\n",r);//10 karakter alan 3.14 (sola yasla)
	
	printf("\n\n");
	
	double s = 0.031418;
	
	printf("%e \n",s);		//ondalýk 6 karakter
	printf("%10.2e \n",s);	//toplam 10 karakter, ondalýk için iki karakter
	printf("%-10.2e \n",s);	//" + sola yasla
	
	
	return 0;
}
























































