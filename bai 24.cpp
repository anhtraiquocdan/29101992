/* Viet chuong trinh tinh tien dien hang thang:
Nhap so nguyen N( 0<n<10000) là so kW dien su dung. 
Tinh so tien phai tra chua bao gom thue theo bang duoi day :
Bac 1: Cho kWh tu 0-50	1484
Bac 2: Cho kWh tu 51-100		-	1533
Bac 3: Cho kWh tu 101-200		-	1786
Bac 4: Cho kWh tu 201-300		-	2242
Bac 5: Cho kWh tu 301-400		-	2503
Bac 6: Cho kWh tu 401 tro lên	-	2587
Bai nay code don gian nen ai cung hieu
*/
#include <stdio.h>
#include <conio.h>
main() {
	int X,T=0;
	do {
		printf("\n Nhap so nguyen N: ");
		scanf("%d",&X);
	}
	while(X<=0||X>=10000);
	
	if ( X<=50 ) T = X*1484;
	if( 51<=X && X<=100) T =50*1484 + (X-50)*1533;
	if(101<=X&& X<=200) T = 50 *1484+ 50 * 1533 + (X-100)*1786;
	if(201<=X&& X<=300) T = 50 *1484+ 50 * 1533 + 100*1786 + (X-200)* 2242;
	if(301<=X&& X<=400) T = 50 *1484+ 50 * 1533 + 100*1786 + 100 *2242 + (X-300) *2503;
	if( X>400) T = 50 *1484+ 50 * 1533 + 100*1786 + 100 *2242 + 100 *2503 + (X-400)*2587;

	printf("\n So tien dien can phai tra la %5d",T);
	getch();
}



