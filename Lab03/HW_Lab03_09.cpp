#include <stdio.h>
int dayfibonaci( int n)
{
	int a,b,c;
	a = 0;
	b = 1;
	int S = 0;
	for( int i = 1; i<=n; i++ )
	{
		c = a + b;
		printf("%d ",c);
		a = b;
		b = c;
		S = S + b;
		printf("%d",S);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	dayfibonaci(n);
	return 0;
}

