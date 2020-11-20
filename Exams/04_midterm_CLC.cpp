#include <iostream>

using namespace std;

int main(){
	int a, b;
	float sum = 0;
	int countValid = 0, n;
	int countInvalid = 0;
	
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	
	do{
		cout << "Input a number (-1 to stop): ";
		cin >> n;
		if (n > a && n < b){
			sum += n;
			countValid ++;
		}
		else if (n != -1)
			countInvalid++;
	}
	while(n != -1);
	
	cout << "The average of all the numbers which is greater than " << a << " and smaller than " << b << ": " << sum/countValid << endl;
	cout << "The number of invalid inputs: " << countInvalid;	
	
}
