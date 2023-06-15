#include "IntegerFunctions.h"

int main() {
	const int SIZE = 150;
	int nums[SIZE];

	for (int i = 100; i < SIZE; i++) {	// fills array with 0's as placeholder values
		nums[i] = 0;
	}

	ifstream inFile("numbers.txt");	// set input file stream

	if (!inFile.is_open()) {		// if file cannot open output error message
		cout << "Could not open file.";
	}
	else {
		for (int i = 0; i < SIZE; i++) {	// load input file integers into array
			inFile >> nums[i];
		}
	}
	inFile.close();	// close file

	while (true) {
		int userChoice;
		cout << "\nMAIN MENU\n\n";
		cout << "1: Check for Integer in Array\n";
		cout << "2: Modify Integer in Array\n";
		cout << "3: Add Integer to Array\n";
		cout << "4: Remove Integer from Array\n";
		cout << "5: Quit\n\n";

		cout << "Enter choice: ";
		cin >> userChoice;

		if (userChoice == 5) {
			break;
		}
		switch (userChoice)
		{
		case 1:
			cout << "Value found at index (-1 if NOT found): " << checkForInteger(nums, SIZE) << endl << endl; // calls function to check for user integer in array		
			break;
		case 2:
			while (true) {
				try {
					modifyInteger(nums, SIZE);
					break;
				}
				catch (out_of_range& e) {
					cerr << "Out of range error thrown for index position. " << e.what() << endl;
					cerr << "Please try again.\n\n";
				}
			}
			break;
		case 3:
			try {
				addInteger(nums, SIZE);
			}
			catch (out_of_range& excpt) {
				cerr << "Out of range error thrown for full array. " << excpt.what() << endl;
			}
			break;
		case 4:
			replaceInteger(nums, SIZE);
			break;
		default:
			cout << "Invalid input.\n";
		}
	}
}