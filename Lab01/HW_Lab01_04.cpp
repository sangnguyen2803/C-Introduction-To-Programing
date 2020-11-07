#include <stdio.h>
#include <conio.h>
int main()
{
	const double pi = 3.24;
	double r,S,P;
	printf(" Nhap ban kinh r = ");
	scanf("%lf",&r);
	S = pi*r*r;
	P = 2*pi*r;
	printf(" Dien tich va chu vi hinh trong la luoc la : S = %.2lf , P = %.2lf",S,P);
	getch();
	return 0;
}

