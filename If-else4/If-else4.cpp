#include <iostream>
using namespace std;
int main()
{
	int number, sum = 0, num;
	cout << "Input number[1000-9999] = ";
	cin >> number;
	if (number >= 1000 && number <= 9999) {
		for (int i = 0;i <= 4;i++) {
			num = number % 10;
			sum += num;
			number /= 10;
		}
	}
	else {
		cout << "Try again." << endl;
		return main();
	}
	cout << "Sum = " << sum << endl;
}