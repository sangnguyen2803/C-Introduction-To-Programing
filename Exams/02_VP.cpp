#include <iostream>

using namespace std;

int main() {
	double X;
	cout << "Nhap diem nguong X: ";
	cin >> X;
	
	double score = 0;
	int numberStudent = 1;
	int studentGetReward = 0;
	int highestScoreLast = 0;
	double max = 0;
	while (score != -1) {
		cout << "Nhap diem cua hoc sinh thu " << numberStudent << " (nhap -1 de dung):";
		cin >> score;
		if (score > X) {
			studentGetReward++;
		}
		if (score >= max) {
			max = score;
			highestScoreLast = numberStudent;
		}
		numberStudent++;
	}
	cout << "So luong hoc sinh duoc nhan thuong la: " << studentGetReward << endl;
	cout << "So thu tu hoc sinh nhan phan qua dac biet la: " << highestScoreLast;
	
	return 0;
}

