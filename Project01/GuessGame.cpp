#include <iostream>
#include <time.h> // 
#include <stdlib.h> //rand(), srand()
#include <string>

using namespace std;

int chooseRandomNumber(){
	int min, max;
	srand((int)time(0));
	cout<<"Enter min: ";
	cin>>min;
	cout<<"Enter max: ";
	cin>>max;
	int random = min + rand()%( max + 1 - min);
	return random;
}
bool simulateGuessingGame(int secret_number){
	int guess, count = 0;
	cout<<endl<<"Secret number: "<<secret_number<<endl;
	while( guess != secret_number){
		count++;
		cout<<"Your guess: ";
		cin>>guess;
		if(guess > secret_number)
			cout<<"Your guess is higher :("<<endl;
		else if(guess < secret_number)
			cout<<"Your guess is lower :("<<endl;
		else
			return true;
		if(count > 2)
			return false;
	}
	return true;
}
bool simulateGuessingGame2(int secret_number){
	int guess;
	cout<<secret_number<<endl;
	for(int i = 0; i < 3; i++)
	{
		cout<<"Your guess: ";
		cin>>guess;
		if(guess == secret_number)
			return true;
		else if(guess > secret_number)
			cout<<"Your guess is higher"<<endl;
		else if(guess < secret_number)
			cout<<"Your guess is lower"<<endl;
	}
	return false;
}

bool checkPrimeNumber(int n){	
	if(n <= 1)
		return false;
	for(int i = 2; i < n; i++){
		if(n % i == 0)
			return false;
	}
	return true;
}
/*
bool checkXNumber(int n){
	int count = 0, count1 = 0;
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			count++;
			if(count > 2)
				return false;
			else{
				if(checkPrimeNumber(i)==true){
					cout<<i<<endl;
					count1++;
					if(count1 == 2 && i == n-1)
						return true;
				}
			}
		}
	}
	return false;
}
*/
/*
int findSmallestXWithSecretNumber(int secret_number){
		int i=secret_number+1;
		while(checkXNumber(i) == false){		
			i++;
			if(checkXNumber(i) == true){
				return i;
				break;
			}
	}
}
*/
int getUserInput(){
	int number;
	cout<<"Input your number to check whether it is an X number: ";
	cin>>number;
	return number;
}

bool checkXNumber(int n){
	int count = 0;
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			if(checkPrimeNumber(i) != true)
				return false;
			else
				count++;
		}
	}
	if(count != 2)
		return false;		
	return true;
}

int findSmallestXWithSecretNumber(int secret_number){
	int i = secret_number + 1;
	while(true)
	{
		if(checkXNumber(i) == true)
			break;
		i = i + 1;
		
	}
	return i;
}

bool checkWhoWin(int user_input, int smallest_X_with_secretNumber){
	if(user_input != smallest_X_with_secretNumber){
		return false;
	}
	return true;
}

/*
tìm các uoc cua no
>2 uoc thi tra ve ko phai so X
=2 check 2 so co phai so nguyen to
<=2 so la so nguyen to thi tra ve ko la so x
else tra ve la so x
*/
//xuat 1 so random
//doan 1 so
//dung choi tiep
//sai doan lai
//3 lan bi loai



int main(){
	int randomNumber = chooseRandomNumber();
	while(simulateGuessingGame(randomNumber) == true){
		cout<<"YOU WON! CONGRATULATIONS! LET'S CONTINUE!'"<<endl;
		int userInput = getUserInput();
		int smallestXNumber = findSmallestXWithSecretNumber(randomNumber);
		checkWhoWin(userInput, smallestXNumber);
		cout<<"YOU WON";
		
	}
	cout<<"YOU LOST";
	/*
	int X = getUserInput();
	string check;
	check = (checkXNumber(X) == true)? " is the X number":" is not the X number";
	cout<<X<<check;

	*/
	int num = findSmallestXWithSecretNumber(25);
	cout<<num;
	return 0;
}

//type conversion (very important)
//float a = 3.0 + 8.24; *a=11.24
//int b = (int)a; *b=11
//standard libraries along 
//srand(), rand()
//generate number = sinh so
//1 - rand() -to generate a random number cout<<rand();

//2 - srand() - to generate a random number from a seed, 
//srand() is often combined with rand() function to generate the different random numbers.

//3 - how to generate a random number in [min, max]
//[20;50] min = 20; max = 50;
// random number = 20 + (4000)%(50 + 1 - 20)


//4 - how to generate a random float number in [min, max]
// -RAND_MAX (the biggest number in rand() function
// 1-2 -> infinite numbers (float)
// 1-2 -> 2 numbers

//5 srand()+rand()+switch()case

/*
214
31*6=186 -> 28 + 20 = 48

216
31*6=186 -> 30 + 20 = 50
214-186 = 28

217
31*7=217 -> 0 + 20 = 20
*/

