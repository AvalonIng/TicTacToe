// TicTacToe.cpp : Defines the entry point for the application.
//

#include "TicTacToe.h"

// Include the cmath library
#include <cmath>

using namespace std;

void printMatrix()
{
	string matrix[3][3] =
	{
	  { "_", "_", "_"},
	  { "_", "_", "_"},
	  { "_", "_", "_"}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j];
		}
		cout << "\n";
	}
}

int main()
{
	//cout << "Hello CMake." << endl;
	//cout << "Hello World! \n";
	//cout << "The End" << "\n\n";

	int myNum = 15, secondNum = 30;
	myNum = 15;
	//cout << myNum << "\n";
	//cout << "My num is " << myNum << endl;
	//cout << "sum " << myNum + secondNum;

	int x, y;
	//cout << "Type a number : ";
	//cin >> x;
	//cout << x;

	//cout << max(4, 5);
	//cout << (myNum < secondNum);

	/*if (myNum < secondNum) {
		cout << "My Num is smaller" << endl;
	}
	else {
		cout << "My Num is equal or bigger" << endl;
	}*/

	string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };
	int nums[3] = { 5,10,15 };

	/*for (int num : nums) {
		cout << num << endl;
	}*/

	int myNumbers[5] = { 10, 20, 30, 40, 50 };
	int getArrayLength = sizeof(myNumbers) / sizeof(int);

	/*for (int i = 0; i < getArrayLength; i++) {
		cout << myNumbers[i] << "\n";
	}*/

	//cout << letters[0][2];  // Outputs "C"

	printMatrix();
	return 0;
}
