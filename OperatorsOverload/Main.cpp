#include <iostream>
#include "Array.h"
using namespace std;

int main(int argc, char** argv)
{
	srand(time(0));

	Array<int> arr1(5);
	arr1.FillArray();
	cout << "Array #1: ";
	arr1.PrintArray();

	Array<int> arr2(5);
	arr2.FillArray();
	cout << "Array #2: ";
	arr2.PrintArray();
	cout << endl;

	cout << "--- Operations ---" << endl;
	Array<int> rez = arr1 + arr2;
	cout << "Plus #1: ";
	cout << rez;
	cout << endl;
	cout << "Plus-equal: ";
	arr1 += 5;
	cout << arr1;
	cout << endl;
	cout << "Minus-equal: ";
	arr2 -= 2;
	cout << arr2;
	cout << endl;
	cout << "Plus #2: ";
	rez = arr1 + 5;
	cout << rez;
	cout << endl;

	system("pause");
}