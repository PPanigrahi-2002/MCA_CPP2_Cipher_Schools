#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(9);
    st.push(3);
    st.pop();
    cout << st.top() << endl;
    cout << st.empty();
}