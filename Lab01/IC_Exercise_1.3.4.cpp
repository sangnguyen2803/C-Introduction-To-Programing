#include <stdio.h>
#include <math.h>

int main()
{
	double x, result;
	printf(" Enter the value of x : ");
	scanf("%lf", &x);
	result = (pow (x,5)) - 4 * (pow (x, 2)) + (pow (x-1, 2)) - 1;
	printf(" The value of the algebraic expression (x^5 - 4x^2 + (x-1)^2 - 1 ) is %.2lf ",result);
}

