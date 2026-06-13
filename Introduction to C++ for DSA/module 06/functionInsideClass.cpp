#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;
    // constructor
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void hello()
    {
        cout<< "hello form " << name << endl;
    }

    void total()
    {
        cout << "total marks of "<< name<< " " << math + english << endl;
    }
};
int main()
{
    Student abdur("Abdur rahman", 1, 99, 99);
    abdur.total();
    Student asif("Asif Ahmed", 2, 95, 97);
    asif.total();
    return 0;
}