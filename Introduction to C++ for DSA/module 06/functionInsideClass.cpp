#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    // constructor
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void hello()
    {
        cout<< "hello form " << name << endl;
    }
};
int main()
{
    Student abdur("Abdur rahman", 1);
    abdur.hello();
    Student asif("Asif Ahmed", 2);
    asif.hello();
    return 0;
}