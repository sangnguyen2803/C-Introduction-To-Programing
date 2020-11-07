#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, delta,x1,x2,x;
	printf(" Nhap he so a = \n");
	scanf("%lf",&a);
	printf(" Nhap he so b = \n");
	scanf("%lf",&b);
	printf(" Nhap he so c = \n");
	scanf("%lf",&c);
	delta = b * b - 4 * a * c;
	if ( delta > 0)
	{
		x1 = ( - b + sqrt(delta) ) / ( 2 * a );
		x2 = ( - b - sqrt(delta) ) / ( 2 * a );
		printf(" Phuong trinh co hai nghiem x1 = %.2lf ,x2 = %.2lf =",x1,x2);
	}
	else
	{
		if ( delta == 0)
		{
			x = - b / ( 2 * a );
			printf(" Phuong trinh co mot nghiem duy nhat x = %.2lf",x);
		}
		else
		{
			printf(" Phuong trinh vo nghiem");
		}
	}	
	return 0;
}

