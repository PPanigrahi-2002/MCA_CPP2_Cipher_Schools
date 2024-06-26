// string -> string is a collection of characters.
// 2 types -> string that are objects of string class(STL)
#include <iostream>
using namespace std;
int findlengt(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    // char arr[] ="Hello";
    // char arr[] ={'H','e','l',};
    char arr[100];
    cout << "Enter your name:" << endl;
    cin.getline(arr, 100);
    cout << findlengt(arr);
}