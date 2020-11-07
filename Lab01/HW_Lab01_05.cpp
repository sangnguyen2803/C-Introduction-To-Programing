#include <stdio.h>

int main()
{
	int money, a, b, c, d;
	printf(" Nhap so tien hien co : \n");
	scanf("%d",&money);
	a = money/10;
	b = (money - a*10)/5;
	c = (money - a*10 - b*5)/2;
	d = (money - a*10 - b*5 - c*2);
	printf(" So to 10 dong : %d\n",a);
	printf(" So to 5 dong : %d\n",b);
	printf(" So to 2 dong : %d\n",c);
	printf(" So to 1 dong : %d\n",d);
	
	return 0;
}

