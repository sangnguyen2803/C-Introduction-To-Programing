#include <stdio.h>

int main()
{
	int a,b,i,sum;
	sum = 0;
	printf(" Enter a random positive integer : ");
	scanf("%d",&a);
	for ( i=0 ; a>0 ; i++ )
	{
		b = a % 10;
		sum = sum + b;
		a = a/10;
	}
	printf(" Tong cua cac chu so nguyen la : %d",sum);
	
	return 0;
}

