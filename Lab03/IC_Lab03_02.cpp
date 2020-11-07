#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,giaithua,n,k,a,b,c;
	printf(" Nhap n : ");
	scanf("%d",&n);
	for( i=n; i>0 ; n-- && i--)
	{
		giaithua = giaithua * i;
		k = giaithua + k; 
	}
	printf(" gia tri giai thua la %d",k);
	return 0;
}

