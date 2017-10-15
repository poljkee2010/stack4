#include <iostream>
#include "stack.hpp"
using namespace std;

void StackInit()
{
	cout << "File init.cpp" << endl;
	stack<int>intStack;
	cout << "Created intStack" << endl;
}

int main()
{
	StackInit();
	return 0;
}
