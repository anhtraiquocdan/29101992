#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	
	int N,i,j,a[9],So_Uoc,dem =0; // so uoc: dem sl uoc cua a[i]
	
	do {
		printf("\nNhap so nguyen 0<N<10: ");
		scanf("%d",&N);
	}
	while(N<=0||N>=10);

	for(i=0;i<N;i++){
		printf("\nNhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nMang vua nhap la: ");
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	
	for(i=0;i<N;i++){
		if(a[i]>=2){					/* Rang buoc neu a[i]<2 thi khong can kiem tra */					
			So_Uoc = 0;					/*bien So_Uoc la bien luu tru so luong uoc cua a[i] */						
			for(j=2;j<=sqrt(a[i]);j++){ //j<a[i]
				if(a[i]%j == 0){
					So_Uoc ++; 
					break;  			 /*Khi j la uoc cua a[i] thi khong can kiem tra j tiep theo nen break luon */
				}
			}
			if(So_Uoc==0) 	dem++;
		}		
	}
	
	if (dem==0)
		printf("Day khong co so nguyen to nao !");
	else 
		printf("\nSo luong so nguyen to co trong day la %d",dem);
	getch();
}
