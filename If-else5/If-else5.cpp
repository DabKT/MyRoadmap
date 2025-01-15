#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "Input Your integer number : ";
	cin >> number;
	if (number % 2 == 0) {
		cout << "Even Number" << endl;
	}
	else {
		cout << "Odd Number" << endl;
	}
}