#include <stdio.h>
int kiemtrasonguyento(int n)
{
	int i,count,value;
	count = 0;
	for(i = 1; i<=n; i++)
	{
		if (n%i == 0)
		{
			count++;
		}
	}	
	if (count == 2 && n>= 2)
		value = 1;
	else
		value = 0;
	return value;
}	

int main()
{
	int d,num,giatri;
	printf("Nhap so n : ");
	scanf("%d",&num);
	d = num;
	giatri = kiemtrasonguyento(num);
	if(giatri == 1)
	printf("%d la so nguyen to",d);
	if(giatri == 0)
	printf("%d khong la so nguyen to",d);
}

