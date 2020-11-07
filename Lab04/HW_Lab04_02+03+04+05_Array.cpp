#include <stdio.h>
void setArray (int a[], int n)
{
	for(int i = 0; i < n ; i++ )
	{
		printf("gia tri cua phan tu thu a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void printArray (int a[], int &n)
{
	for(int i = 0; i < n; i++ )
		printf("a[%d] = %d\n",i,a[i]);
}
int minArray (int a[], int &n)
{
	int min = a[0];
	for(int i = 0; i < n; i++)
	{
		if(min > a[i])
			min = a[i];
		else
			min = min;
	}
	return min;
}
int checkPrime( int &n )
{
	int count1 = 0; 
	if(n == 1)
		return 1;
	for(int i=1; i <= n; i++)
	{
		if(n%i == 0)
			count1++;
	}
	if(count1 == 2)
		return 1;
	else
		return 0;
}
int countNumberofPrime(int a[], int &n)
{
	int count2 = 0;
	for(int i = 0; i < n ; i++)
	{
		if(checkPrime(a[i]) == 1);
		{
			printf("%d ",a[i]);
			count2++;
		}
	}
	return count2;
}
int main()
{
	int n, a[500],m,check;
	printf("nhap n : ");
	scanf("%d",&n);
	setArray(a,n);
	printArray(a,n);
	printf("\n Min = %d \n",minArray(a,n));
	printf("\nSo cac so nguyen to trong mang la %d",countNumberofPrime(a,n));
	return 0;
	
}

