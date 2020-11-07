#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i;
	{
		printf(" Nhap so bi nhan : ");
		scanf("%d",&a);
		printf(" Nhap so nhan : ");
		scanf("%d",&b);
		e = b / 100;
		d = ((b % 100) / 10);
		c = b % 10;
		printf("\t%d\nx",a);
		printf("\t%d\n   ------------\n",b);
		f = c * a;
		g = d * a;
		h = e * a;
		printf ("\t%d\n",f);
		printf ("       %d\n",g);
		printf ("      %d\n",h);
		printf("   ------------\n");
		i = a * b;
		printf("      %d",i);
		return 0;
	}
}

