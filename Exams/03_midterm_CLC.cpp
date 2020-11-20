#include <iostream>
#include <math.h>

using namespace std;

int main(){
	//Bài 1.1
	int Sum = 0;
	for (int Max = 1990; Max < 1950; Max + 5){
		Sum = Sum + (Max - 1900);
		cout << "Sum: " << Sum << "\n";
	}
	
	//Bài 1.2
	int n = 0;
	int i = 0;
	while (i < 100){
		if (i % 10 == 0)
			cout << '\n';
		n += i*2;
		cout << n << ' ';
		i++;
	}
	
	//Bài 1.3
	int t = 0;
	int h;
	
	while (h >= 0){
		h = 3 + 10*t - t*t;
		if (h >= 0)
			cout << "t = " << t << "; h = " << h << endl;
		t++;
	}
	
	return 0;
}
