#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, p, s;

	printf("nhap ba canh cua tam giac: ", a, b, c);
	scanf("%lf%lf%lf", &a, &b, &c);

	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));

	printf("dien tich tam giac la: %.2lf", s);
	return 0;
}

