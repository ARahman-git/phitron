#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }

};
int main()
{
    Student rahim(45, 2, 5);
    Student karim(3, 23, 3.9);

    //shortcurt way to give input in object that is constructor

    cout << rahim.roll <<" "<< rahim.cls <<" "<< rahim.gpa;
    return 0;
}