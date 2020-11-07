#include <stdio.h>
#include <conio.h>
int main()
{
	int x, y;
	y = 0;
	for( x = 0 ; x <= 36 && x + y < 36; x = x + 1 )
		if (2*(36 - y) + 4*y != 100 )
			y = y + 1; 
	printf(" Gia tri cua x = %d va y = %d",x,y);
	getch();
	return 0;
}


