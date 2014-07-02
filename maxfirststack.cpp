#include <iostream>
#include <stack>

using namespace std;

template <class T>
class MaxStack
{
	stack<T> original;
	stack<T> internal;

public:

	void Push(T& item);

	bool Pop(T& item);

	bool Max(T& item);
};

template <class T>
void MaxStack<T>::Push(T &item)
{
	if (original.empty()) {
		original.push(item);
		internal.push(item);
	} else {

		original.push(item);
		T& top = internal.top();

		if (item > top)
			internal.push(item);
		else 
			internal.push(top);
	}
}

template <class T>
bool MaxStack<T>::Pop(T& item)
{
	if (original.empty())
		return false;

	internal.pop();
	item = original.top();
	original.pop();
	return true;
}


template <class T>
bool MaxStack<T>::Max(T& item)
{
	if (original.empty())
		return false;

	item = internal.top();
	return true;
}


int main()
{
	MaxStack<float> s1;
	float temp;

	int option;
	float f, max;
	bool b;

	do {
		cout << "************** Max Stack ***************" << endl;
		cout << "1. Push" << endl << "2. Pop" << endl << "3. Max" << endl << "4. Quit" << endl;
		cout << "Enter an option : ";
		cin >> option;

		switch(option) {

			case 1:
				cout << "Enter a float number to push : ";
				cin >> temp;

				s1.Push(temp);
				break;

			case 2:
				
				b = s1.Pop(f);
				if (!b)
					cout << "Stack is empty!!" << endl;
				else
					cout << "Popped out " << f << endl;
				break;

			case 3:
				b = s1.Max(max);
				if (!b)
					cout << "Stack is empty!!" << endl;
				else
					cout << "Maximum: " << max << endl;
				break;
		}

	} while (option != 4);
}


