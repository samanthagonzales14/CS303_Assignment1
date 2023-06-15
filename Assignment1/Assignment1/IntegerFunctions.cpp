#include "IntegerFunctions.h"


int checkForInteger(int* arr, int size) {
	int userNum;	

	cout << "Please enter the integer you would like to search for: ";
	cin >> userNum;		// gets integer value from user

	for (int i = 0; i < size; i++) {	// for loop to search if integer in array matches userNum
		if (arr[i] == userNum) {
			return i;					// returns index if integer is found
		}
	}
	return -1;							// returns -1 if integer is not found
}

void modifyInteger(int* arr, int size) {
	int temp;	// to store original value
	int pos;	// to store user input
	int newVal;	// to store new value

	cout << "Please enter the index you would like to modify: ";
	cin >> pos;		// user picks index to modify

	if (pos < 0 || pos >= size) {	// if user input is less than 0 and greater than 149
		throw out_of_range("Index must between 0 - 149, inclusive.");	// throw exception for out of range index
	}

	temp = arr[pos];	// stores original value in array

	cout << "\nPlease enter the new value: ";
	cin >> newVal;		// user picks new value to replace original value

	arr[pos] = newVal;	// modify array at given index
	
	cout << "\nOld value: " << temp << endl;	// display old value
	cout << "New value: " << arr[pos] << endl;	// display new value
}

void addInteger(int* arr, int size) {
	int userNum;	// to store user input

	cout << "Please enter the value to add: ";
	cin >> userNum;

	if (arr[size - 1] != 0) {		// checks if last value in array is zero, if not throws error
		throw out_of_range("Unable to add new value.\n");
	}

	for (int i = 0; i < size; i++) {	// iterate through array to find the first zero
		if (arr[i] == 0) {
			arr[i] = userNum;			// replace the zero with userNum
			cout << arr[i] << endl;		// print last non-zero value
			break;
		}
		cout << arr[i] << ", ";			// print array 
	}
	
}

void replaceInteger(int* arr, int size) {
	int pos;	// to store user input

	cout << "Please enter an index to replace value with zero: ";
	cin >> pos;				// get user input

	arr[pos] = 0;			// modify value to zero based on user input

	for (int i = 0; i <= pos; i++) {	// print array upto the value replaced by zero
		cout << arr[i] << ", ";
	}
	cout << endl;
}
