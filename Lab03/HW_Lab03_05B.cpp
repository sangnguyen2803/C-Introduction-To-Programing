#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int bcnn,k,a,b;
	printf("Nhap a va b");
	scanf("%d %d",&a,&b);
	(a < b) ? a : b ;
		k = a*b;
		bcnn = k/(b-a);		
	printf("%d",bcnn);
	return 0;
}

