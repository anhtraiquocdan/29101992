#include <stdio.h>
#include <conio.h>
main(){
	int N,i,d=0,a[9];
	float tong=0, tb;
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
	
  	for(i=0;i<N;i++){
		if(a[i]%2==0){
			tong=tong+a[i];
			d++;
		}
	}
		
	if(d==0) 
		printf("\nDay vua nhap khong co so chan nao");
	else{
		tb=tong/d; /*Bien tong khai bao la so thuc nen k can ep kieu nua */
    	printf("\nTrung binh cong cua cac so chan (chia het cho 2) co trong day la:  %.2f",tb);
	}
	getch();
}
