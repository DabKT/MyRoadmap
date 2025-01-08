#include <iostream>
using namespace std;
int main()
{
	int number1, number2;
	cout << "Input number1 = ";
	cin >> number1;
	cout << "Input number2 = ";
	cin >> number2;
	if (number1 > number2) {
		cout << "Result = " << number1 << "," << number2 << endl;
	}
	else if (number2 > number1) {
		cout << "Result = " << number2 << "," << number1 << endl;
	}
	else {
		cout << "Result = " << number1 << "," << number2 << endl;
	}
}

