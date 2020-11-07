#include <stdio.h>
#include <math.h>
int main()
{
	int xh,xm,xs,yh,ym,ys,zh,zm,zs,th,tm,ts;
	printf(" Nhap gio, phut, giay thu 1 :  ");
	scanf("%d %d %d",&xh,&xm,&xs);
	printf(" Nhap gio, phut, giay thu 2 :  ");
	scanf("%d %d %d",&yh,&ym,&ys);
	zh = xh + yh;
	zm = xm + ym;
	zs = xs + ys;
	th = xh - yh;
	tm = xm - ym;
	ts = xs - ys;
	if ( zs < 60)
	{
		if ( zm < 60)
		{
			printf(" Tong cua hai gio la %d gio %d phut %d giay\n",zh,zm,zs);
		}
		else
		{
			zm = zm - 60;
			zh++;
			printf(" Tong cua hai gio la %d gio %d phut %d giay\n",zh,zm,zs);
		}
	}
	else
	{
		zs = zs - 60;
		if ( zm < 60 )
		{
			zm++;
			printf(" Tong cua hai gio la %d gio %d phut %d giay\n",zh,zm,zs);
		}
		else
		{
			zh++;
			zm++;
			zm = zm - 60;
			printf(" Tong cua hai gio la %d gio %d phut %d giay\n",zh,zm,zs);
		}
		
	}
	if ( ts >= 0)
	{
		if ( tm >= 0)
		{
			printf(" Hieu cua hai gio la %d gio %d phut %d giay",th,tm,ts);
		}
		else
		{
			th--;
			tm = tm + 60;
			printf(" Hieu cua hai gio la %d gio %d phut %d giay",th,tm,ts);
		}
	}
	else
	{
		ts = ts + 60;
		if ( tm > 0 )
		{
			tm--;
			printf(" Hieu cua hai gio la %d gio %d phut %d giay",th,tm,ts);
		}
		else
		{
			th--;
			tm--;
			tm = tm + 60;
			printf(" Hieu cua hai gio la %d gio %d phut %d giay",th,tm,ts);
		}
	}
	return 0;
}

