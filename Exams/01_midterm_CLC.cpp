#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	int sum = 0;
	
	cout << "Input n: ";
	cin >> n;
	while (n >= 10){
		sum += (n % 100);
		n /= 10;
	}
	cout << "Sum: " << sum;
	
}
