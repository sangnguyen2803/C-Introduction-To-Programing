#include <stdio.h>

int main()
{
	int tien;
	int km;
	printf(" Nhap so km ");
	scanf("%d",&km);
	if (km == 1)
	{
		tien = km*15;
		printf("so tien : %d",tien);
	}
	if (km >= 2 && km <= 5)
	{
		tien = km*13.5;
		printf("so tien : %d",tien);
	}
	if (km >=6 && km < 120)
	{
	tien = 11*km;
	printf("so tien : %d",tien);
	}
	if ( km >= 120)
	{
		tien = 11*km*0.9;
		printf("so tien : %d",tien);
	}
	
	return 0;
}

