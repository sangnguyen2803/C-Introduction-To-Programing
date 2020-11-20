#include <iostream>

using namespace std;

bool checkPrimeNumber (int n) {
	if (n <= 1)
		return 0;
	else if (n <= 3)
		return 1;
	else {
		for (int i = 4; i < n; i++) {
			if (n % i == 0)
				return 0;
		}
		return 1;		
	}
}

int main () {
	int n;
	int count;
	cout << "Input n: ";
	cin >> n;
	
	int j = 0;
	int temp;
	int a[1000];
	for (int i = 1; i <= 1000; i++) {
		if (checkPrimeNumber(i) == 1) {
			a[j] = i;
			j++;
		}
		else {
			temp = i;
			for (int k = 1; k < i; k++) {
				if (checkPrimeNumber(k) == 1) {
					while (temp % k == 0)
						temp = temp/k;
				}
			}
			if (temp == 0) {
				a[j] = i;
				j++;
			}
		}
	}
	
	cout << "Result: " << a[n - 1];
	
	
}
