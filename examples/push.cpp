#include <iostream>
#include "stack.hpp"
using namespace std;

void StackPop()
{
	try {
		cout << "File pop.cpp" << endl;
		stack<size_t>sizetStack;
		sizetStack.push(1);
		cout << "Content file pop.cpp\t" << sizetStack.pop() << endl;
	}

	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
}

int main()
{
	StackPop();
	return 0;
}
