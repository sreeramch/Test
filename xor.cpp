
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Enter first number: "; cin >> a;
	cout << endl << "Enter second number: "; cin >> b;

	if (a ^ b)
		cout << endl << "Number are not equal";
	else
		cout << endl << "Numbers are equal";

	return 0;
}
