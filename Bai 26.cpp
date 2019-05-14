#include<stdio.h>
#include<conio.h>
main(){ 
	int i=0,a[7];
	printf("Nhap vao 7 so nguyen giam dan:");
	
	while(i<7){
		printf("\nNhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
		if(i>0&&a[i]>=a[i-1]){
			printf("\nNhap sai. Yeu cau nhap lai so be so dung truoc!");
    		continue;}
 		i++;
	}
	
	printf("\nDay so vua nhap la: ");
	for(i=0;i<7;i++) printf("%5d",a[i]);
	getch();
}

