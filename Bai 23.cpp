#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
main(){
	int M=0,L,i=0;
	char N[100];
	while(i!=-1){
		printf("\nNhap vao so nguyen N>=0 he co so 2 :");
               fflush(stdin);gets(N);
		L=strlen(N)-1;
 		for(i=L;i>=0;i--)
		if(N[i]!='0'&&N[i]!='1') break;
	}
 	i=L;
 	while(i!=-1){
 	if (N[i]=='1')
		M=M+pow(2,L-i);
        i--;
		}
 printf("\nGia tri so vua nhap o he co so 10 la : %d",M);
 getch();
