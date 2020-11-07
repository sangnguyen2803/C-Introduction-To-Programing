//YOUR ID: 18000000
#include "functions.h"
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100

int rhailstone(int n)
{
	int sum = n;
	while (n != 1)
	{
		if(n%2 == 1)
			return n + rhailstone(3*n + 1);
		if(n%2 == 0)
			return n + rhailstone(n/2);
	}
  // TODO: write recursion hailstone function
  return sum; // -1 here must be CHANGED
}
int fib (int n)
{
	if( n == 0)
		return 0;
	if( n <= 2)
		return 1;
	return fib(n-1) + fib(n-2);
}
void setFibArray(int a[], int n)
{
	for(int i = n; i >= 0 ; i--)
	{
		a[i] = fib(i);
	}
  // TODO: write set Fibonacci array function
}

int countPairsAdjacentOddNumber(int a[], int n)
{
	int count = 0;
	for(int i = 0 ; i < n-1; i++)
		if(a[i]%2 == 1 && a[i+1]%2 == 1)
			count++;
  // TODO: write function that count the number of pairs of adjacent odd numbers
  return count; // -1 here must be CHANGED
}

void sortByHeight(int a[], int len, int tree, int b[])
{
	int c[100];
	int k=0; int j = 0;
	for(int i = 0; i < len; i++)
		if(a[i] != -1)
			c[j++] = a[i];
	sort(c,c+(len-tree));
	for(int j = 0; j < len; j++)
		b[j] = a[j];
	for(int j = 0; j < len; j++)	
		if(b[j] != -1)
			b[j] = c[k++];
  // TODO: write sort by height function
}

// change 0 into 1 to test your functions with FINAL TEST
volatile int flag = 1;

int mainStudent()
{
  return 0;
}
