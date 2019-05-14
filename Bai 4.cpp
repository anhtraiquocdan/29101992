#include <stdio.h>
#include <conio.h>

main(){
	int i,N,d=0;
	float a[9],T=0;
	
	do {
		printf("\nNhap so nguyen N : ");
		scanf("%d",&N);
	}
	while(N<=0||N>=10);
  
	for(i=0;i<N;i++) {
		printf("\nNhapso thu %d : ",i+1);
        scanf("%f",&a[i]);
	}
		
	printf("\nMang vua nhap la:");
	for(i=0;i<N;i++)
		printf("%5.2f",a[i]);
  
	for(i=1;i<N-1;i++) 
  		if(a[i]>a[i-1] && a[i]>a[i+1]){
	  		T=T+a[i]; 
			d++;
		}
		
	if(d==0)
		printf("\nKhong co phan tu cuc dai trong day!");
	else
		printf("\nTong cac phan tu cuc dai trong day la: %5.2f",T);
	getch();
 }



