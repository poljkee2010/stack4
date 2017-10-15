#include <iostream>
#include "stack.hpp"
using namespace std;

void StackEmpty()
{
	try {
		cout << "File empty.cpp" << endl;
		stack<float>FloatSt;
		for (int i = 0; i != 10; ++i)
		{
			FloatSt.push(i);
		}

		while (!FloatSt.empty())
		{
			cout << FloatSt.pop() << " " << endl;
		}
		cout << "File  empty.cpp have 0 elements" << endl;
	}

		catch (const exception& e) //Обработка исключений
		{
			cout << e.what() << endl;
		}
}
	
int main()
{
		StackEmpty();
		return 0;
}
