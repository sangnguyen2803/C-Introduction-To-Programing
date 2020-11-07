#include <stdio.h>
#include <conio.h>
int main()
{
	int x, result;
	printf("Nhap so nguyen x = ");
	scanf("%d",&x);
	result = x*x*x - 5*x*x + 6;
	printf("Gia tri cua bieu thuc là : %d",result);
	getch();
	return 0;
}

