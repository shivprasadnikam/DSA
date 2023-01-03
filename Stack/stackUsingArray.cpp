                                                // Stack implementation using array  //
                                                
                                            
#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // behevious
    // constructor for size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        // check wheather there is space or not
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack is overflowing" << endl;
        }
    }

    void pop()
    {
        // check if there is element present stack or not
        if (top < 0)
            cout << "stack is underflowing" << endl;
        else
            top--;
    }

    bool empty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }

    int peek()
    {
        if (top == -1)
            cout << "stack is underflowing" << endl;
        else
            return arr[top];
    }
};

int main()
{
    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    // top before pop
    cout << "top before pop " << st.peek() << endl;

    st.pop();
    cout << "top after pop " << st.peek() << endl;

    if (st.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
        cout << "stack is not empty" << endl;
}
