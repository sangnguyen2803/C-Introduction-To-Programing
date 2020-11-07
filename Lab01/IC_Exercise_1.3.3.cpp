#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	double fah,cen;
	restartpoint:
	int code;
	printf(" Press number 1 to exchange from F to C or Press number 2 to exchange from C to F : ");
	scanf("%d",&code);
	switch (code)
	{
		case 1:
			printf(" Enter the value of the Fahrenherit scale - F = \n");
			scanf("%lf",&fah);
			cen = (fah - 32) / 1.8;
			printf(" The value of Censius scale which exchanged by Fahrenherit scale - C = %2lf \n",cen);
			break;
		case 2:
			printf(" Enter the value of the Censius scale - C = \n");
			scanf("%lf",&cen);
			fah = (cen * (1.8)) + 32;
			printf(" The value of Fahrenherit scale which exchanged by Censius scale - F = %2lf \n",fah);
			break;
		default:
			printf(" You typed wrong, please try again!");
			goto restartpoint;
	}
	return 0;
}

