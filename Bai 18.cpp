#include <stdio.h>
#include <conio.h>
main(){
	int N,n,T,i;
	do{
		printf("\nNhap vao so nguyen 0<N<10000 :");
    	scanf("%d",&N);
	}
	while(N<=0||N>=10000);
  
	printf("\n Cac so tu man trong khoang tu 0 den %d la: ",N);
	
	for(i=1;i<N;i++){
		T=0;
		n = i;
        while(n!=0){
			T = T+ (n%10)*(n%10)*(n%10);
        	n = n/10;
		}
  		if(T==i) printf("%5d",i);
	}
	getch();
 }

