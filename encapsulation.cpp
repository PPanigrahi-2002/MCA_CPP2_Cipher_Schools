#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int roll_number;
    int age;
    char grade;

public:
    student(string name, int roll_number, int age, char grade)
    {
        this->name = name;
        this->roll_number = roll_number;
        this->age = age;
        this->grade = grade;
    }
    string getname()
    {
        return name;
    }
    int getrollnumber()
    {
        return roll_number;
    }
    int getage()
    {
        return age;
    }
    char getgrade()
    {
        return grade;
    }
};
int main()
{
    student s1("priyanka", 12, 22, 'A');
    cout << s1.getname() << endl;
    cout << s1.getage() << endl;
    cout << s1.getrollnumber() << endl;
    cout << s1.getgrade() << endl;
}