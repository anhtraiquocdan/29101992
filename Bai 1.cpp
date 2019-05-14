#include "stdio.h"
#include <conio.h>

main(){
	int N,i,X,a[9],tong=0;
 	float tb = 0;
 	
  	do {
	  	printf("\nNhap so nguyen 0<N<10: ");
      	scanf("%d",&N);
	}
 	while(N<=0||N>=10);
 	
	for(i=0;i<N;i++){
	  	printf("\nNhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	
  	printf("\nMang vua nhap la:");
  	for(i=0;i<N;i++){
	  	printf("%5d",a[i]);
	}  	
  
  	do{
	  printf("\nNhap so nguyen X>0: ");
      scanf("%d",&X);
	}
	while(X<=0);
	
	if (X<=N){
		for(i=0;i<X;i++)
			tb = tb +a[i]; /* Bien tb vua tinh la tong vua tinh la trung binh cong */
		tb=tb/X; /* Tinh TBC*/
    	printf("\nGia tri trung binh %d so dau tien trong day la %.2f",X,tb);
	}
    else{
  		for(i=0;i<N;i++) 
			tong=tong+ a[i];//Tong cac so trong mang
        printf("\nTong cac so trong day la %d",tong);
	}
	getch();
}
