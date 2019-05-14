#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	int M,N,i,Tong_Uoc_Cua_M=0, Tong_Uoc_Cua_N =0,dem=0 ;
		
	do{
		printf("\nNhap so nguyen 1<N<2000: ");
		scanf("%d",&N);
	}
	while(N<=1||N>=2000);

	do{
		printf("Nhap so nguyen 1<M<2000: ");
		scanf("%d",&M);}
	while(M<=1||M>=2000);
	
	for (i=1;i<=N/2;i++)
		if(N%i==0)
			Tong_Uoc_Cua_N= Tong_Uoc_Cua_N+i; /* Cai nay tinh tong uoc cua N */ 
	
	if(Tong_Uoc_Cua_N==M){
		dem++;		
		for (i=1;i<=M/2;i++)
			if(M%i==0) 
				Tong_Uoc_Cua_M=Tong_Uoc_Cua_M+i;
 		if(Tong_Uoc_Cua_M==N) dem++;
	}
	
	if(dem==2)
		printf("Hai so vua nhap la cap so hua hon");
	else
		printf("Hai so vua nhap khong phai la cap so hua hon");
getch();
}


