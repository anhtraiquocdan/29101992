#include<stdio.h>
#include<conio.h>
int main(){
	int i, j, N, Tong_Uoc, tong = 0;
	
 	do {
	 	printf("Nhap so nguyen 0<N<1000:");
		scanf("%d",&N);
	}
	while(N<=0||N>=1000);

	printf("\nCac so hoan thien trong khoang 0 den N la: ");
	
	for(i=1;i<N;i++){
		Tong_Uoc= 0;
		for(j=1;j<=i;j++)
			if(i%j==0)	Tong_Uoc=Tong_Uoc + j; 
		if(Tong_Uoc==2*i) { // suy ra i la 1 so hoan thien
			printf("%5d",i);
			tong+=i;
		}
	}
	if(tong==0)
		printf("\nKhong co so hoan thien nao!");
	else 
		printf("\nTong cac so hoan thien trong day la: %d",tong);
	getch();
}
