#include <stdio.h>
int main()
{
	int a,b,c;
	a=1;
	b=1;
	for( b ;  b <= 9 ; b++  )
		{
			for(a=1 ; a <= 10 ; a++) 
			{
				c = b*a;
				printf(" %d x %d = %d \n",b,a,c);
			}
		}
	return 0;
}

