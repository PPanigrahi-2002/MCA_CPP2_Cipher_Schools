#include <iostream>
#include <stack>
using namespace std;

void reversesentence(string s)
{
    stack<string> st;

    for (int i = 0; i < s.size(); i++)
    {
        string word = "";
        while (i < s.length() && s[i] != ' ')
        {
            word += s[i];
            i++;
        }
        if (!word.empty())
        {
            st.push(word);
        }
    }

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
        if (!st.empty())
        {
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    string sentence = "Hello world this is a test";
    reversesentence(sentence);
    return 0;
}
