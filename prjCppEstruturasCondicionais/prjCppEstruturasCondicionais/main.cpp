#include<iostream>
using namespace std;

void main() {

	int val1, val2;

	cout << "\tNUMBER COMPARATOR" << endl;
	cout << "\t-----------------" << endl;

	cout << "Please, enter value 1: ";
	cin >> val1;
	cout << "Please, enter value 2: " ;
	cin >> val2;
	cout << "" << endl;

	if (val1 > val2)
	{
		cout << "The value " << val1 << " is great than " << val2 << ".";
	}
	else
	{
		cout << "The value " << val1 << " is smaller than " << val2 << ".";
	}
	}