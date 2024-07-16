//KOMBÝNASYON HESABI
//C(n,r)=n!/r!(n-r)!
#include<stdio.h>

int f(int x){
	
	int f=1 ,s;
	
	for (s=1;s<=x;s++)
	f = f * s;
	
	return f;
}

int main(){
	
	int n, r, c;
	
	printf("n:"); scanf("%d",&n);
	printf("r:"); scanf("%d",&r);	
	
	c = f(n)/(f(r)*f(n-r));
	
	printf("Kombinasyon = %d",c);
	
	return 0;
}
