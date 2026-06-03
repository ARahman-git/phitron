#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    Student a,b, c;
    char temp[100] = "shakib";
    strcpy(a.name, temp);
    a.roll = 21;
    cin.getline(b.name, 100);
    cin >>b.roll >> b.gpa;
    cin.ignore();

    cin.getline(c.name, 100);
    cin >> c.roll >> c.gpa;

    cout << b.name <<" "<< b.roll <<" "<< b.gpa << endl;
    cout << c.name <<" "<< c.roll <<" "<< c.gpa;
    
    return 0;
}