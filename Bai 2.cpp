#include<stdio.h>
#include<conio.h>
main(){
	int N[7],i,j,n=0,k;
	
	for(i=0;i<7;i++) {						
		printf("Nhap phan thu %d: ",i+1);
		scanf("%d",&N[i]);
		if(N[i]==0)break;
		n++;
	}
	
	printf("\nMang vua nhap la:");
		for(i=0; i<n; i++)
			printf("%5d",N[i]);
				
	for(i=0; i<n-1; i++){ 		/* Doan nay la sap xep day tang dan */
			for(j=i+1; j<n; j++){
				if(N[i]>N[j]){ 
					k = N[i];
					N[i]=N[j];
					N[j] = k;
				}
			}
	}
		
	printf("\nMang da duoc sap xep tang dan la :");
	for(i=0;i<n;i++)
			printf("%5d",N[i]);
	getch();
}
