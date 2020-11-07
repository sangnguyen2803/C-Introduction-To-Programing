#include <stdio.h>
int factorial(unsigned int n)//f(n)=f(n-1)*n, f(1)=1
{
	if(n <= 1)
	return 1;
	return n*factorial(n-1); 
}
//a(n)= a(n-1)+3, a(0)=1;

//4!=3!*4=2!*3*4
/*f(n-1)=n-1!=>f(n)=n!=f(n-1) *n theo f(n-1),
		dieu kien dung*/
int fib(int n)
{
	if (n == 0)
	return 0;
	if( n == 1)
	return 1;
	return fib(n-1) + fib(n-2);
}
void importArray(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		printf ("\nNhap gia tri cua mang a[%d]", i);
		scanf("%d",&a[i]);
	}
}
int sumArray(int a[], int n)
{
	if(n==1)
		return a[0];
	return a[n-1] + sumArray(a,n-1);
	//1 4 5 6
}
int gcd(int a, int b)
{
	if( a == 0 || b == 0)
		return a + b;
	if( a == b)
		return a;
	else
		{
			if(a > b)
				{
					return gcd(a - b,b);
				}
			else
				{
					return gcd(b - a,a);
				}
		}
			
}
//a[i]
 //0 1 1 2 3 5 8
void binary(int n)
{
	if(n==0)
		printf("0");
	if(n%2==0 && n>0)
	{
		printf("0");
		binary(n/2);
	}
	if(n%2==1 && n>0)
	{
		printf("1");
		binary(n/2);
	}
}
int main()
{
	int n,m , a[100],x,y;
	scanf("%d",&n) ;
	printf("Gia thua la %d",factorial(n));
	printf("\nTong gia tri cua cac phan tu trong day Fibonacci la %d", fib(n));
	importArray(a,n);
	printf("\nTong gia tri cua mang la %d",sumArray(a,n));
	printf("\nNhap hai so a va b de tim boi chung nho nhat : ");
	scanf("%d %d",&x,&y);
	printf("\nBoi chung nho nhat la %d",gcd(x,y));
	printf("\nNhap so ban muon bieu dien duoi he nhi phan : ");
	scanf("%d",&m);
	binary(m);
	return 0;
}



