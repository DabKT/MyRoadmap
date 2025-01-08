#include <iostream>
using namespace std;
int main()
{
	double salary = 0, tax = 0;
	cout << "Input your slary = ";
	cin >> salary;
	if (salary > 0 && salary <= 22000) {
		tax = salary * 0.15;
		cout << "Tax = " << tax << endl;
	}
	else if (salary > 22000 && salary <= 53000) {
		salary -= 22000;
		tax = 3315 + (salary * 0.28);
		cout << "Tax = " << tax << endl;
	}
	else if (salary > 53000 && salary <= 115000) {
		salary -= 53000;
		tax = 12107 + (salary * 0.31);
		cout << "Tax = " << tax << endl;
	}
	else if (salary > 115000 && salary <= 250000) {
		salary -= 115000;
		tax = 31172 + (salary * 0.36);
		cout << "Tax = " << tax << endl;
	}
	else if (salary > 250000) {
		salary -= 250000;
		tax = 79772 + (salary * 0.396);
		cout << "Tax = " << tax << endl;
	}
	else {
		cout << "Incorrect information" << endl;
	}
}