#include <stdio.h>

int main()
{
	int n,a,b,c,d,e,f,g,h,i,m;
	printf("Nhap so nguyen n gom toi da 4 chu so :");
	scanf("%d",&n);
	for (i=1;n>1;i++)
	{
		m = n%2;
		n = n/2;
		if (m == 0)
		printf("0");
		if (m != 0)
		printf("1");
	}
	return 0;
}

