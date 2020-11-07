#include <stdio.h>
#include <conio.h>
 
int main()
{
  	int n, i, dem,tong;
  	dem = 0;
  	tong = 0;
	printf("Cho gia tri N = ");
	scanf("%d", &n);
	for ( i = 1; i <=n; i++)
	{
		if ( n%i == 0)
		{
			printf("%d ",i);
			dem++;
			tong = tong + i;
		}	
	}
	printf("\nCo %d uoc so",dem);
	printf("\nTong cac uoc so la %d",tong);
}
