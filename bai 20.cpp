#include <conio.h>
#include <stdio.h>
main() {
 	int i,M,N,d=0,T=0;
	do {
		printf("\n Nhap so nguyen duong M,N : ");
		printf("\n M= ");scanf("%d",&M);
		printf("\n N= ");scanf("%d",&N);
	}
	while(N<=0||M<=0);
	
  	for(i=1;i<=N;i++) 
  		if(M%i==0&&N%i==0){
	 		 d++;
	 		 T=T+i;
		}
		
	printf("\n Hai so vua nhap co %d uoc chung",d);
	printf("\n Tong cac uoc chung l�: %d",T);
	getch();
 }



