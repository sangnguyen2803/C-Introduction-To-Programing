#include <stdio.h>
//1
void setArray(int a[], int &n)
{
	printf("so phan tu cua mang la: ");
	scanf("%d", &n);
	for (int i = 0; i<n ; i++)
	{
		printf("gia tri cua phan tu thu a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
//7
/*int countOccurrences(int a[], int n, int x)
{
	int count = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] == x)
			count = count + 1;
	}
	return count;
}*/
//8
void deleteItems(int a[], int &n, int x)
{	
	
	for(int i = 1; i <= n ; i++)
	{
		if(a[i] == x)
			a[i] = a[i-1];
		else
			printf("a[%d]",i);
	}
	
}
/* Bai 9
input: index, arr, n, no_items
//kiem tra hop le, neu invalid thi khong xoa
		//kiem tra dieu kien: 
	neu khong thi xoa


		// khoi tao i=1 // dem so lan xoa
				while(i<=no_items) thi xoa tai vi tri index sau do i++
		//ket thuc xoa

*/
// 1 2 3 4 5 6 7 - index4 , m=5,
void exportArray(int a[],int &n)
{
	for(int i=0; i <= n-1; i++)
	{
		printf("%d ",a[i]);
	}
}

void deleteanItemfromIndex(int a[], int &n, int index)
{
// xoa khi thoa dieu kien
		if ( index<n && index>=0 )
		{
			for(int i=index; i<n-1; i++)
			{
				a[i]=a[i+1];
			}
			n--;// index= n-1 thi khong lam gi, giam chi so n
		}
		else return;
}

//index		 0 1 2 3 4 5 6
// 			 1 2 3 6 5 8 9
//xoa tai 2: 1 2 6 5 8 9
void deleteItemsFromIndex(int a[],int &n,int index,int no_items)
{
	if( index + no_items < n)
	{
		for(int j = 1; j<= no_items; j++)
			deleteanItemfromIndex(a,n,index);
	}
	else return;//khong tra ve gia tri at all
}
//9
void concatTwoArrays(int a[], int n, int b[], int m, int c[])
{
	//c=a;c=c+b;
// variable = x
	for(int i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	//phan tu cuoi cung cua c co index la n-1;
	for(int i = n; i< n + m; i++)
	{
		c[i]=b[i-n];
	}
}
void concatInterspersedlyTwoArrays(int a[], int n, int b[], int m, int c[])
{
	//vi tri chan thi 2i: copy a vo c,
	//vi tri le 2i+1 thi copy b vo c
	for(int i=0; i<n; i++)
	{
		c[2*i] = a[i];
		// c: 0,2,4,6,8 // a, 0,1,2,3,4		
	}
	for(int i=0; i<m;i++)
		c[2*i+1] = b[i];
		
}
int main()
{
	int c[500];
	int a[100];
	int n,x,index,no_items;
	int f_array[]={1,3,5,7,9};
	int nf=sizeof(f_array)/sizeof(f_array[0]);

	int s_array[]={2,4,6,8,10};
	int ns=sizeof(s_array)/sizeof(s_array[0]);
//1
//	setArray(a,n);
//7
//	printf("Nhap x : ");
//	scanf("%d",&x);
	//printf("%d",countOccurrences(a,n,x));
//8
//	deleteItems(a,n,x);
/*	printf("Nhap index : \n");
	scanf("%d",&index);
	printf("Nhap so phan tu muon xoa : ");
	scanf("%d",&no_items);
	deleteItemsFromIndex(a,n,index,no_items);
	exportArray(a,n);*/
	//concatTwoArrays(f_array,nf,s_array,ns,c);
	int nc= nf+ns;
	//exportArray(c,nc);
//9
//10
//11
	concatInterspersedlyTwoArrays(f_array,nf,s_array,ns,c);
	exportArray(c,nc);
	return 0;
}
//9

