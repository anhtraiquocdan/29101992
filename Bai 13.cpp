#include <stdio.h>
#include <conio.h>

main(){
	int i,N,a[9],X,dem=0;
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
		printf("\nNhap so nguyen X<10 : ");
    	scanf("%d",&X);
	}
	while(X>=10);

	for(i=0;i<N;i++)
		if(X==a[i]) dem ++;
	printf("\nSo luong phan tu trong day co gia tri bang X la %d",dem);
	getch();
}



