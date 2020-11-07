#include <stdio.h>

int main() {
	int a,b,c,min,max;
	printf(" Nhap 3 so a,b,c : \n");
	scanf("%d %d %d",&a,&b,&c);
	min=max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	printf("\nSo lon nhat la %d\n", max);
	if(b<min)
	min=b;
    if(c<min)
    min=c;
	printf("\nSo nho nhat la %d\n", min);
	if (min < b && b < max)
	printf("\nThu tu cac so la %d %d %d ",min,b,max);
	if (min < a && a < max)
	printf("\nThu tu cac so la %d %d %d ",min,a,max);
	if (min < c && c < max)
	printf("\nThu tu cac so la %d %d %d ",min,c,max);
}
