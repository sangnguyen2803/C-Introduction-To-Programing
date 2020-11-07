#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	double x,y;
	printf("Enter the value of x - x = ");
	scanf("%lf",&x);
	y = ((pow(x,1/3))+10*x*sqrt(fabs(x)) + (3/pow(x,-5)));
	printf(" With x = %.lf, we have the corresponding result y = %.lf",x,y);
	getch();
	return 0;
}

