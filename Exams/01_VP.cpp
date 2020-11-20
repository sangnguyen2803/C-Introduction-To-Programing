#include <iostream>
#include <math.h>

using namespace std;

int main () {
	double d = abs(5*2 - 2*3);
	double d1 = abs(67*2 - 37*3);
	double d2 = abs(5*37 - 2*67);
	
	cout << "Gia 1 lon pepsi: " << d1/d << endl;
	cout << "Gia 1 lon cola: " << d2/d;
	
	return 0;
}
