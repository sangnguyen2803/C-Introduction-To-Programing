#include <stdio.h>
int xuatnguocso (int n)
{
	for(int i = n; i >= 1;i/=10)
	{
		printf("%d",i%10);
	}
}
int demsoluong (int n)
{
	int le,chan;
	for(int i = n; i >= 1 ; i = i/10)
	{
		if ((i%10)%2 == 1 )
		{
			printf("%d",i%10);
			le = le + 1;
		}
		else
		{
			printf("%d",i%10);
			chan = chan + 1;
		}
	}
	printf("\n co %d so chan ",chan);
	printf("\n co %d so le ",le);
}
int main()
{
	int n;
	scanf("%d", &n);
	demsoluong(n);
	return 0;
}




