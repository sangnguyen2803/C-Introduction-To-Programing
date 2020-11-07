#include <stdio.h>
#include <math.h>
double heron( double a, double b, double c)
{
	double p,s;
	p = ((a+b+c)/2.0);
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int main()
{
	double a,b,c;
	printf(" Nhap 3 so a, b, c");
	scanf("%lf %lf %lf",&a,&b,&c);
	printf(" Dien tich tam giac la : %.2lf", heron(a,b,c));
	return 0;
}

