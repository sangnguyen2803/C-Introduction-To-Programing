#include <stdio.h>
void setArray(int a[], int n)
{
	printf("so phan tu cua mang la: ");
	scanf("%d", &n);
	for (int i = 0; i<n ; i++)
	{
		printf("gia tri cua phan tu thu a[%d] = ", i);
		scanf("%f", &a[i]);
	}
}

bool isAscendingOrder(int a[], int n)
{
	int count = 1;
	for( int i = 0; i <= n; i++)
	{
		if( a[i+1] > a[i] )
			return true;
	}
	return false;
}
int countOccurrences(int a[], int n, int x)
{
	int count = 0;
	for(int i = 1 ; i <= n ; i++)
	{
		if(a[i] == x)
			count++;
	}
	return count;
	
}
int main()
{
	int n,x;
	int a[100];
	setArray(a,n);
	if( isAscendingOrder(a,n) == true)
		printf(" Mang tang lien tuc");
	else
		printf(" Mang khong tang lien tuc");
		
	printf("\nNhap gia tri x");
	scanf("%d",&x);
	printf (" %d ", countOccurrences(a,n,x));
	return 0;
}

