#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,k,n,m;
	int count;
	for(i = 50,j = 1; i>0 && 50%j==0; i--,j++)
	{
		n = i;
		for(k=1;k<=n;k++)
		{
			if(n%k==0)
			{
				count++;
				if(count==2)
				m = n;
			}
		}
		
	}	
	printf("So nguyen to lon nhat la %d",m);
	return 0;
}

