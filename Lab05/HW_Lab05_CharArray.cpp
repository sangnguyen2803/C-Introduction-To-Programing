#include <stdio.h>
#include <string.h>
void reverseCharArray(char a[])
{
	int len =0;
	while(a[len]!='\0')
		len++;// tinh do dai chuoi
	for(int i = len-1; i>=0 ;i--)
		printf("%c",a[i]);
}
int checkSymmetricArray(char a[])
{
	int len =0;
	while(a[len]!='\0')
		len++;
	int mid = (len)/2;
	
	for(int i=0; i<mid;i++)
		if(a[i] != a[len-1-i])
			return 0;
	return 1;
}
int countOccurrencesChar(char a[], char c)
{
	int count = 0;
	for( int i = 0; i <= strlen(a) ; i++)
		if( a[i] == c)
			count++;
	return count;		
}
void findMostFrequentChar(char a[], char &chr)
{
	int count = 1;
	int max = 0;
	for(int i = 0; i <= strlen(a) ; i++)
	{
		if(a[i] == x);
		count++;
	}
	printf("/nSo lan xuat hien nhieu nhat cua ky tu %c la %d",chr,count);
}
int main()
{
	char a[256];
	char c;
	int count;
/*	printf("Nhap chuoi ky tu : ");
	gets(a);
	puts(a);
	printf("\nNhap ky tu can tim : ");
	scanf("%c",&c);
	printf("%c ",c);
	int check = -1;
	reverseCharArray(a);
	check = checkSymmetricArray(a);
	printf("\nMenh de chuoi tren la doi xung la %d",check);
	count = countOccurrencesChar(a,c);
	printf("\nSo lan xuat hien cua ky tu %c là %d",c,count);
	return 0;
*/
	findMostFrequentChar(a,chr);
}
