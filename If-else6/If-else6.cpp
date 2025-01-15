#include <iostream>
using namespace std;
int main()
{
	string Text;
	cout << "Input Your Text : ";
	cin >> Text;
	for (int i = 0;i <= Text.size();i++) {
		if (Text[i] == 'a') {
			cout << "Have 'a' in text." << endl;
			cout << "Position of 'a' : " << i + 1 << "." << endl;
			break;
		}
		else if (i == Text.size()) {
			cout << "Dont have 'a' in your text." << endl;
		}
	}
	
}