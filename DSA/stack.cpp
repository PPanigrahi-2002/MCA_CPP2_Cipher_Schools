// create a stack
#include <iostream>
using namespace std;
class mystack
{
public:
    int *arr;
    int top;
    int size;
    mystack()
    {
        arr = new int[size];
        top = -1;
    }
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = value;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        top--;
    }
    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
};
int main()
{
    mystack st;
    st.push(7);
    st.push(6);
    st.push(5);
    st.push(3);
    st.push(1);
    st.pop();
    cout << st.peek();
}