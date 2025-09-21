//Math Tutor
//This program acts as a math tutor for addition. 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(0)); //seed random number generator

	//Generate two random numbers between 100 and 999
	int num1 = rand() % 900 + 100;
	int num2 = rand() % 900 + 100;

	int answer;

	//Display the problem to the user
	cout << "What is " << num1 << " + " << num2 << "? ";
	cin >> answer;

	//Pause for student to solve
	cout << "Press Enter when you have your answer...";
	cin.ignore();
	cin.get();

	//Check the answer
	cout << "The correct answer is " << num1 + num2 << "." << endl;

	return 0;
	
}

