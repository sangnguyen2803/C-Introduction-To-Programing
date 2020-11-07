#include <stdio.h>
void kiemtratinhhople (int gio, int phut, int giay )
{
	if ( phut < 0 || phut >= 60 )
	printf(" Ban nhap sai");
	else
	{
		if ( giay < 0 || giay >= 60)
		printf(" Ban nhap sai");
		else
		{
			if (gio < 0 || gio > 24)
			printf("Ban nhap sai");
			else
			printf("Ban nhap dung");
		}
	}	 
}

void diemthi (int toan, int ly, int hoa)
{
	int trungbinh;
	trungbinh = (toan+ly+hoa);
	if ( trungbinh >= 15 && toan >= 4 && ly >= 4 && hoa >= 4)
	{
		printf("Dau\n");
		if ( toan >= 5 && ly >= 5 && hoa >= 5 )
		printf("Hoc deu cac mon\n");
		if ( toan < 5 || ly < 5 || hoa < 5)
		printf("Chua hoc deu cac mon\n");
	}
	else
	printf("Hong");
}

int main()
{
	kiemtratinhhople(3,5,34);
	diemthi(5,5,5);
	return 0;
}

