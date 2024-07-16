//ÖÐRENCÝ VE SINAV NOTLARI
#include<stdio.h>

int main(){
	
	int d[10][3];
	int ort[10];
	
	int i, j;
	
	for(i=0;i<10;i++){
		printf("%d. ogrenci:",i+1);
		for(j=0;j<3;j++){
			scanf("%d",&d[i][j]);
		}
		ort[i]=d[i][1]*0.4+d[i][2]*0.6; 
	}
	
	for(i=0;i<10;i++)
		printf("Ogrenci no:%d ort=%d \n",d[i][0],ort[i]);
		
	printf("\n");
	
	int enbort,no;
	
	for(i=0;i<10;i++){
		if(enbort<ort[i]){
		enbort = ort[i];
		no = d[i][0];
		}
	}
	
	int enkort,no2;
	enkort=101;
	for(i=9;i>0;i--){
		if(enkort>ort[i]){
		enkort = ort[i];
		no2 = d[i][0];
		}
	}
	
	printf("En yuksek ortalama= %d ogrenci no=%d\n",enbort,no);
	printf("En dusuk ortalama= %d ogrenci no=%d",enkort,no2);	
	return 0;
}
