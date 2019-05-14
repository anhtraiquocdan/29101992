#include <conio.h>
#include <stdio.h>

main(){
	int i,a[9],N,Tong_Uoc,dem=0,j;
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
	
	printf("\nVi tri cac so hoan thien la: ");
	
	for(i=0;i<N;i++){
		Tong_Uoc=0;
		for (j=1;j<=a[i];j++)
			if(a[i]%j==0)
				Tong_Uoc = Tong_Uoc + j; /* Tinh tong cac uoc cua a[i] */
    	if(Tong_Uoc==2*a[i]) 
			printf("%5d,",i+1);
    		if(a[i]<2015) dem++;
    }
	printf("\nSo luong so hoan thien trong day be hon 2015 la: %d",dem);
	getch();
 }



