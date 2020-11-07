#include <stdio.h>
#include <conio.h>
int uocchunglonnhat1 ( int a, int b)
{
	int r;
	while ( (r = (a % b )) != 0)
	{
		a = b;
		b = r;
	}
	return b;
}
int uocchunglonnhat2 ( int a, int b)
{
	int r,c,d,x,y;
	c=a;
	d=b;
	while ( (r = (a % b )) != 0)
	{
		a = b;
		b = r;
	}
	while ( b != x*c + y*d )
	
int main()
{
	int ucln;
	ucln = uocchunglonnhat1(68,12);
	printf(" Uoc chung lon nhat la %d ",ucln);
	getch();
	return 0;
}

