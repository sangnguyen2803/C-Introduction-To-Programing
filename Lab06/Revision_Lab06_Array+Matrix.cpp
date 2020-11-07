#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

void naturalNumber(int n); //1
int sumNumbers(int n); //2
int exportFib(int n); //3
void elementNumber(int n); //4
int countDigit(int n); //5
int sumDigit(int n ); //6
int findGCD(int a, int b);//7
int largestNumberinArray(int a[], int n); //8
int reverseStr(char a[], int n); //9
void even_odd_Num (int n,int code); //10

int main()
{
//1
	naturalNumber(10);
//2
	printf("\n%d",sumNumbers(4));
//3
	printf("\n");for(int i=0; i < 10; i++)printf("%d ",exportFib(i));
//4
	printf("\n");elementNumber(10);
//5
	printf("\n");printf("%d",countDigit(5678910432));
//6
	printf("\n");printf("%d",sumDigit(1144));
//7	
	printf("\n");printf("%d",findGCD(60,40));
//8
	printf("\n");int a[]={3,5,7,5000,9}; printf("%d",largestNumberinArray(a,5));
//9
	printf("\n");char b[]="GNASNEYUGN"; int m = strlen(b);reverseStr(b,m);
//10
	printf("\nEven numbers : "); even_odd_Num(10,0);
	printf("\nOdd numbers : "); even_odd_Num(10,1);
//11
	return 0;
}
void naturalNumber(int n) //1
{
	if( n >= 0)
	{	
		printf("%d ",n);
		naturalNumber(n-1);
	}
}
int sumNumbers(int n) //2
{
	if( n > 0)
	return sumNumbers(n-1) + n;
}
int exportFib(int n) //3
{
	
	if( n == 0)
		return 0;
	if( n == 1)
		return 1;
	return exportFib(n-1) + exportFib(n-2);	
}	
void elementNumber(int n)//4
{
	if(n>=0)
	{
		printf("%d ",n);
		elementNumber(n-2);
	}
}
int countDigit(int n ) //5
{
	static int count = 0; // static de co dinh count
	if(n != 0)
	{
		count++;
		return(countDigit( n/10));
	}
	return count;
}
int sumDigit(int n ) //6
{
	if(n == 0)
		return 0;
	return n%10 + sumDigit((n/10));
}
int findGCD( int a, int b) //7
{
	while(a != b)
	{
		if(a>b)
			return findGCD(a-b,b);
		else
			return findGCD(a,b-a);
	}
	return a;
}
int largestNumberinArray( int a[], int n) //8
{
	static int max = a[n-1];
	if(a[n-1] < a[n-2] && n > 0)
	{	
		max = a[n-2]; 
		return largestNumberinArray(a,n-1);
	}
	if(a[n-1]  && n > 0)
		return largestNumberinArray(a,n-1);
	return max;
}
int reverseStr(char a[], int n)//9
{
	if(n>0)
	{
		printf("%c",a[n-1]);
		return reverseStr(a,n-1);
	}	
}
void even_odd_Num (int n,int code) //10
{
	if( n> 0 && code == 0)
	{
		printf("%d ",n);
		even_odd_Num(n-2,0);
	}
	if( n> 0 && code == 1)
	{
		printf("%d ",n-1);
		even_odd_Num(n-2,1);
	}
}
