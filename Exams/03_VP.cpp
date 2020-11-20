#include <iostream>

using namespace std;

int main () {
	int x;
	cout << "Nhap x: ";
	cin >> x;
	
	int count = 0;
	double thickness = 0.1;
	while (thickness < x*10) {
		thickness *= 2;
		count++;
	}
	
	cout << "So lan can gap doi la: " << count; 
	
	return 0;
}
