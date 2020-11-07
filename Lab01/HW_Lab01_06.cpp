#include <stdio.h>

int main()
{
	int soluong, dongia, tongtien, tiencuaban;
	printf(" So luong chai nuoc ban muon mua : SL = ");
	scanf("%d",&soluong);
	printf(" Nhap don gia cua mot chai nuoc : DG = ");
	scanf("%d",&dongia);
	tongtien = soluong * dongia;
	printf(" So tien cua ban : T = ");
	scanf("%d",&tiencuaban);
	int tiendu;
	tiendu = tiencuaban - tongtien;
	int a,b,c,d;
	a = tiendu/10;
	b = (tiendu - a*10)/5;
	c = (tiendu - a*10 - b*5)/2;
	d = (tiendu - a*10 - b*5 - c*2);
	printf(" So luong to 10 dong  : %d\n",a);
	printf(" So luong to 5 dong : %d\n",b);
	printf(" So luong to 2 dong : %d\n",c);
	printf(" So luong to 1 dong : %d\n",d);
	return 0;
}

