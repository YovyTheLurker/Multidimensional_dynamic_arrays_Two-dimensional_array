// Multidimensional_dynamic_arrays_Two-dimensional_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{//arrays store data in continuous memory
	
	int size;
	cout << "Size: ";
	cin >> size;
	//int myArray[size];
	int* myArray = new int[size];//the 'new' command will allocate memory when needed.
	for (int i = 0; i < size; i++) {
		cout << "Array [" << i << "] ";
		cin >> myArray[i];
		
	}
	for (int i = 0; i < size; i++) {
		cout << myArray[i] << " ";
		//*(myArrey+i)<---another way to derefference array.
	}

	delete[]myArray;//when you don't need the memory you must deallocate it using 'delete'command
	myArray = NULL;//will assign value of 'null' to array

	system("pause>0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
