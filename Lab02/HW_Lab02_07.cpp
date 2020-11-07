#include <stdio.h>
int kiemtra (int d, int e, int f)
{
	int value;
	if (d+e>f && d+f>e && e+f>d)
	value = 1;
	else
	value = 2;
	return value;
} 
int main()
{
	int a, b, c, check;
	printf(" Nhap gia tri a, b va c : \n");
	scanf("%d %d %d",&a,&b,&c);
	check = kiemtra(a,b,c);
	if (check == 1)
	printf(" La tam giac\n");
	else
	printf(" Khong la tam giac\n"); 
	if ( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
	printf(" Tam giac vuong\n");
	if ( a == b != c || a == c != b || b == c != a)
	printf(" Tam giac can\n");
	if ( a == b == c)
	printf(" Tam giac deu\n");
	return 0;
}

