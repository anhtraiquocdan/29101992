#include<stdio.h>
#include<conio.h>
main(){
	
	int i, j, a[9], N, Tong_Uoc, dem=0;
	
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
	
	for(i=0;i<N;i++){ // voi 1 i tuong duong voi a[i]
		Tong_Uoc = 0; // khoi tao tong uoc = 0
		for(j=1; j<=a[i]; j++)
			if(a[i]%j==0&&a[i]!=0) Tong_Uoc=Tong_Uoc + j; 	/*Neu j la uoc cua a[i] thi tinh tong */
		if(Tong_Uoc == 2*a[i]) // 
			dem ++ ;
	}

	if(dem==0)
		printf("\nKhong co so hoan thien nao!");	
	else 
		printf("\nSo luong so hoan thien co trong day la: %d", dem);
	getch();
}
	
