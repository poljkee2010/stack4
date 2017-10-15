#include <iostream>
#include "stack.hpp"
using namespace std;

void StackPop(); //сигнатура функций
void StackEmpty();
void StackInit();
void StackPush();

int main() 
{
        void StackPop(); //вызов функций
        void StackEmpty();
        void StackInit();
        void StackPush();  
        
        try 
        {
                stack<int>headStack;
                headStack.push(0);
                headStack.push(1);
                headStack.push(2);
                headStack.push(3);
                headStack.push(4);
                headStack.push(5);
                headStack.push(6);
                headStack.push(7);
                headStack.push(8);
                headStack.push(9);

                cout << "Number of elements in Stack = " << headStack.count() << endl;  //Terminal Message: 10
                headStack.pop();
                headStack.pop();
                headStack.pop();
                headStack.pop();
                headStack.pop();
                headStack.pop();
                headStack.pop();
                headStack.pop();
                headStack.pop();
                headStack.pop();
                cout << "Number of elements in Stack = " << headStack.count() << endl; //Terminal Message: 0
                headStack.pop(); //Вызов исключения т.к. стек пустой         
        }
        catch (const exception& e) //Обработка исключений
        { 
                cout << e.what() << endl;
        }
        return 0;
}
