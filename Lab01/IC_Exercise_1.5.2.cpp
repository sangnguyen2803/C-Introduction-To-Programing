#include <stdio.h>

int main()
{
	int a, b, c, min, max;
	printf("Nhap ba so a, b, c : \n");
	scanf("%d %d %d",&a,&b,&c);
	max = min = a;
		if (max < b)
		{
			max = b;
			min = a;
		}
		if (max < c)
		{
			max = c;
		}
		if ( c < min)
		{
			min = c;
		}
		if ( b < min)
		{
			min = b;
		}
	printf(" Gia tri lon nhat la %d\n",max);
	printf(" Gia tri nho nhat la %d\n",min);
				
	return 0;
}

