#include <stdio.h>
const int MAX = 10;
// Bai 1
void reverseCharArray(char a[MAX])
{
	for(int i = MAX-1; i>=0 ; i-- )
	{
		printf("%d",a[i]);	
	}
}
// c[5]="abcde";
//	"edcba"
int main()
{
	char b[MAX]="123456789";
	reverseCharArray(b);
	return 0;
}

