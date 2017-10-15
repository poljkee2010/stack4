#include <iostream>
#include "stack.hpp"
using namespace std;

void StackPush()
{
	try {
		cout << "File push.cpp" << endl;
		stack<char>charSt;
		charSt.push('b');
		charSt.push('m');
		charSt.push('s');
		charSt.push('t');
		charSt.push('u');
		charSt.push('1'); // reallocate()

		cout << "Number symbols in file push.cpp" << charSt.count() << endl;
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
}

int main()
{
	StackPush();
	return 0;
}
