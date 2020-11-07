#include <stdio.h>
#include <conio.h>
double Cen (double F)
{
	return (F - 32)*(5 / 9);
}
int main()
{
	double a;
	printf("Enter the value of Fahhenrit F = \n");
	scanf("%lf",&a);
	printf("The value of Censius C = %lf",Cen(a));
	getch();
	return 0;
}

