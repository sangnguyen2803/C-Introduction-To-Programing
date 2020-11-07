#include <stdio.h>
int kiemtranam ( int year)
{
	int value;
	if ( year%4 == 0 && year%100 != 0 || year%400 == 0)
	value = 1;
	else
	value = 2;
	return value;
}
int main()
{
	int check,num;
	printf("Nhap nam : \n");
	scanf("%d",&check);
	num = kiemtranam(check);
	if ( num == 1 )
	printf("Nam nay la nam nhuan");
	if ( num == 2 )
	printf("Nam nay khong la nam nhuan");
	return 0;
}

