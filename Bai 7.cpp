#include <stdio.h>
#include <conio.h>
main(){
	int N,i,j,a[9],TG;
	do {
		printf("Nhap so nguyen 0<N<10: ");
		scanf("%d",&N);
	}
	while(N<=0||N>=10);
	
	for(i=0;i<N;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nMang vua nhap la:");
	for(i=0;i<N;i++){
			printf("%5d",&a[i]);
	}
  
	if(N==1) printf("\nDay chi co mot phan tu nen ko co so lon thu 2."); 
	else{
		for(i=0;i<N-1;i++){					/*Neu N khac 1 thi sap xep day theo thu tu giam dan */
			for(j=i+1;j<N;j++){
       			if(a[i]<a[j]){
			   		TG=a[i];
			 		a[i]=a[j];
			   		a[j]=TG;
				}
			}
		}	
    }   
    
	if(a[0]==a[N-1]) 
		printf("\nKhong co so lon thu 2 trong day vi cac so deu bang nhau");
    else{
		printf("\nSo lon thu 2 trong day la : ");
	    for(i=1;i<N;i++){
        	if(a[i]!=a[0]){				
				printf("%d",a[i]);
				break;
			}
        }
    }
	getch();
 
}
