#include <stdio.h>

int main()
{
	int n,m;
	m = 0;
	printf("Nhap n");
	scanf("%d",&n);
	for(n; n>0; n--)
	{
		if (n%4 == 0 && n%5 != 0)
		{
			m = m + n;
		}
	}
	printf(" Tong cac so : %d ",m);
	return 0;
}

