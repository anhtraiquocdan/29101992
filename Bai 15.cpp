#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	int N,i,j,So_Uoc,a[9],dem=0;
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
  
  	printf("\nVi tri cac so nguyen to la: ");
  	
	for(i=0;i<N;i++)
    	if(a[i]>=2){
			So_Uoc=0; /* bien nay dung de dem cac uoc trong khoang tu 2 den a[i] - 1 */
        	for(j=2;j<a[i];j++)
            	if(a[i]%j==0){
					So_Uoc++;
					break;
				}
			if(So_Uoc==0) {
				printf("%5d,",i+1);
                if(a[i]<2015) dem++;
			}
       }
 	printf("\nSo luong cac so nguyen to co trong day be hon 2015 la: %d",dem);
	getch();
 }



