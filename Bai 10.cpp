#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	float a,b,c,delta,d;
	printf("\nNhap vao 3 so thuc: ");
	printf("\na=");scanf("%f",&a);
	printf("\nb=");scanf("%f",&b);
	printf("\nc=");scanf("%f",&c);	
	if(a==0){
		if(b==0&&c==0) printf("\nPt vo so nghiem.");
		if(b==0&&c!=0) printf("\nPt vo nghiem.");
		if(b!=0) printf("\nPt co nghiem x= %.2f",-c/b);
	}
	else{
		delta=b*b-4*a*c;
        if(delta==0)
			printf("\nPt co nghiem kep x= %.2f .",-b/2*a);
        if(delta>0) {
			printf("\nPt co 2 nghiem thuc phan biet:");
			printf("\nx1= %.2f",(-b+sqrt(delta))/2*a);
			printf("\nx2= %.2f",(-b-sqrt(delta))/2*a);
		}
        if(delta<0) {
        
			printf("\nPt co 2 nghiem phuc: ");
			printf("\nx1= %.2f + %.2fi",-b/2*a,sqrt(delta)/2*a);
			printf("\nx2= %.2f - %.2fi",-b/2*a,sqrt(delta)/2*a);
       }
   }
  getch();
}
