#include <iostream>
#include <fstream>

using namespace std;

int checkForInteger(int* arr, int size); // Pre: takes array and array size as parameters -- Post: returns index if user integer is found otherwise returns -1

void modifyInteger(int* arr, int size); // Pre: takes array and array size as parameters -- Post: modifies array to user picked value at user picked index

void addInteger(int* arr, int size);	// Pre: takes array and array size as parameters -- Post: add user value to first available zero at end of array

void replaceInteger(int* arr, int size);// Pre: takes array and array size as parameters -- Post: replaces user picked index with a zero

