#include <stdio.h>
#include <math.h>
int kiemtrachinhphuong (int a)
{
	int b;
	b = sqrt(a);
	return b;
}
int main()
{
	int c,d;
	printf("Nhap vao so nguyen duong  = ");
	scanf("%d",&c);
	d = kiemtrachinhphuong(c);
	if (d*d == c)
	printf(" %d la so chinh phuong ",c);
	else
	printf(" %d khong la so chinh phuong ",c);
	return 0;
}

