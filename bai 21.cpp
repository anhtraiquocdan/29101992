#include <stdio.h>
#include <conio.h>
main(){
	int i,N,d=0,a[9],T=0;
	do {
		printf("\nNhap so nguyen N : ");
		scanf("%d",&N);}
	while(N<=0||N>=10);

	for(i=0;i<N;i++) {
		printf("\nNhap phan tu thu %d : ",i+1);
        scanf("%d",&a[i]);
	}
		
	printf("\nMang vua nhap la:\n");
	for(i=0;i<N;i++) printf("%3d",a[i]);
  
	for(i=1;i<=N-2;i++) 
  		if(a[i]==a[i-1]+a[i+1]){ // Voi i =1.ktra a[1] = a[0] + a[2]
	  		T=T+a[i]; 
			d++;
		}
		
	if(d==0)
		printf("\nKhong co phan tu xung quanh trong day!");
	else
		printf("\nTong cac phan tu xung quanh trong day la: %5d",T);
	getch();
 }



