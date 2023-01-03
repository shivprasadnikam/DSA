#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // creating stack
    stack<int> s;

    // inserting elements in stack
    s.push(1);
    s.push(2);
    s.push(3);

    // top of stack before poping
    cout << "top of stack beforing poping " << s.top() << endl;

    // removing elements from stack

    s.pop();

    // top of stack after poping element
    cout << "top of stack after poping element " << s.top() << endl;

    // size of stack
    cout << "size of stack is " << s.size() << endl;

    // is stack is empty
    if (s.empty())
        cout << "stack is  empty" << endl;
    else
        cout << "stack is  not empty" << endl;
}