//YOUR ID: 18000000
#include "functions.h"
#include <stdio.h>

int findab(int m, int n)
{
  // TODO: write findab function, 
  int i,a,b,count;
  count = 0;
  for ( i = m; i < n; i++ )
	{
	a = i/10;
	b = i%10;
	if (a*b == 2*(a+b))
	count++;
	}
  return count; // -1 here must be CHANGED
}

int bruteforce(int buffaloes, int bunches_of_grass)
{
	int i,j,k,count;
	count=0;
	for(i = 1; i <= buffaloes ; i++)
		for(j = 1; j <= buffaloes ;j++)
			for(k = 1; k <= buffaloes ; k++)
				{
				if((i*5 + j*3 + k/3 == bunches_of_grass ) && (i + j + k == buffaloes) && (i>0) && (j>0) && (k>0))
				{count++;}
				}							
  // TODO: write bruteforce function
  return count; // -1 here must be CHANGED
}

int hailstone(int n)
{
	int i,a;
	a = 0;
	for ( i = 0; n != 1; i++)
	{
		if((n%2==0))
		{
			n = n/2;
			a = a + n;
			if(n%2==1)
			{
				n = 3*n + 1;
				a = a + n;
			}
		else
		{
			n = 3*n + 1;
			a = a + n;
			if( n%2 == 0)
			{	
				n = n/2;
				a = a + n;
			}
		}
	}
}
  // TODO: write hailstone function
  return a; // -1 here must be CHANGED
}

