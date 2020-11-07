#include <stdio.h>
#include <iostream>
using namespace std;
void setArray(int a[],int n);



int main()
{
	int a[1000];
	int n;
	setArray(a,n);
	return 0;
}
void setArray(int a[],int &n)
{
	printf(" Enter the value of n :");
	scanf("%d",&n);
	for( int k = 1; k <= n; k++);
	{
		printf(" Enter an integer: ");
		scanf("%d", &a[k] );
	}
	/*cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];}*/
}
