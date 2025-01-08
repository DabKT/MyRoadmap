#include <iostream>
using namespace std;
int main()
{
	int number1, number2, number3;
	cout << "Input number1 = ";
	cin >> number1;
	cout << "Input number2 = ";
	cin >> number2;
	cout << "Input number3 = ";
	cin >> number3;
	if (number1 < number2 && number1 < number3) {
		cout << "Result = " << number1 << endl;
	}
	else if (number2 < number1 && number2 < number3) {
		cout << "Result = " << number2 << endl;
	}
	else if (number3 < number1 && number3 < number2) {
		cout << "Result = " << number3 << endl;
	}
	else {
		cout << "Result = " << number1 << endl;
	}
}