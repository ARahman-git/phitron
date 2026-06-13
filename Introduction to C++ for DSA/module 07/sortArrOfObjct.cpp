#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r)
{
    if (l.marks == r.marks)
        return l.roll < r.roll;
    
    return l.marks < r.marks;;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();  // ignore newline after n

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
        cin.ignore(); // ignore newline after marks
    }

    sort(arr, arr+n, cmp);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name <<" "<< arr[i].roll << " "<<arr[i].marks <<endl;
    }
    return 0;
}