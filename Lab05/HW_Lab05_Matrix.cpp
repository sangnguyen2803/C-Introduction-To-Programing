#include <stdio.h>
void importMatrix(int a[][100], int n, int m)
{
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
		{
			printf("Enter a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
}
void exportMatrix(int a[][100], int &n, int &m)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
int sumArray(int a[][100],int &n, int &m)
{
	int sum = 0;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
		{
			sum = sum + a[i][j];
		}
	return sum;
}
int sumDiagonal(int a[][100], int &n, int &m)
{
	int sum = 0;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < m; j++)
		{
			if( i == j)
				sum = sum + a[i][j];
		}
	return sum;
}
void minArray(int a[][100], int &n, int &m)
{
	int min;
	for(int i = 0; i < m; i++)
	{
		min = a[0][0];
		for(int j = 0; j < m; j++)
		{
			if(min > a[i][j])
				min = a[i][j];
		}
	}
	printf("\nMin value of this Array is %d ",min);
}
/* 
5  2  3
2  4  1
3  4  6
*/
int primeNumber(int n)
{
	int count = 0;
	for(int i = 1; i <= n; i++)
	{
		if(n%i == 0 && n>0)
			count++;
	}
	if(count == 2)
		return 1;
	return 0;
}
void countNumberofPrime ( int a[][100], int &n, int &m)
{
	int count = 0;
	for(int i = 0; i < m ; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(primeNumber(a[i][j]) == 1)
			{
				printf("\na[%d][%d] : %d is a Prime Number",i,j,a[i][j]);
				count++;
			}	
			else
				printf("\na[%d][%d] : %d is not a Prime Number",i,j,a[i][j]);
		}
	}
	printf("\nThere are %d Prime Numbers",count);
}
int countOccurrences(int a[][100], int &n, int &m, int x)
{
	int count = 0;
	for(int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			if(a[i][j] == x)
				count++;
		}
	}
	return count;
}
void deleteArray(int a[][100],int n, int m, int x)
{
	for(int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			if(a[i][j] == x)
			{
				if(j == n)
				{
					a[i][j] = a[i+1][j-(j-1)];
					n--;
				}
				if(j < m)
				{
					a[i][j] = a[i][j+1];
					j++;
					n--;
				}
			}	
		}
	}		
}
int main()
{
	int a[100][100];
	int n,m,x;
	printf("Enter the number of Column : n = ");
	scanf("%d",&m);
	printf("Enter the number of Row : m = ");
	scanf("%d",&n);
	importMatrix(a,n,m);
	exportMatrix(a,n,m);
	printf("\n%d",sumArray(a,n,m));
	printf("\n%d",sumDiagonal(a,n,m));
	minArray(a,n,m);
	countNumberofPrime(a,n,m);
	printf("\nEnter the number you want to count the occurrence of it x = ");
	scanf("%d",&x);
	printf("\nThe occurrences of %d is %d",x,countOccurrences(a,n,m,x));
	deleteArray(a,n,m,x);
	printf("\n");
	exportMatrix(a,n,m);	
	return 0;
}

