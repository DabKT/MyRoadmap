#include <iostream>
using namespace std;
int main()
{
	string text,finaltext;
	float checktext;
	cout << "Input your text : ";
	cin >> text;
	for (int i = 0; i <= text.size(); i++) {
		checktext = text[i];
		if (checktext >= 65 && checktext <= 90) {
			finaltext += (checktext + 32);
		}
		else if (checktext >= 97 && checktext <= 122) {
			finaltext += (checktext - 32);
		}
	}
	cout << finaltext << endl;
}