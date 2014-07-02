#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	char* y = (char*)&x;

	if (*y+48 == 49)
	{
		cout << "Little endian";
	} else {
		cout << "Big endian";
	}

	return 0;
}