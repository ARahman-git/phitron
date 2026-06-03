#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }

};

Student* fun()
{
    Student* abdur = new Student(2,4,5);
    return abdur;
}
int main()
{
    Student rahim(45, 2, 5);
    Student karim(3, 23, 3.9);

    Student* asif = new Student(1,2,3);

    //shortcurt way to give input in object that is constructor

    //cout << rahim.roll <<" "<< rahim.cls <<" "<< rahim.gpa;

    Student* obj = fun();
    cout << obj->roll <<" "<< obj->cls <<" "<< obj->gpa <<endl;
    //cout << asif->roll <<" "<< asif->cls <<" "<< asif->gpa;
    return 0;
}