#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

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

    int mn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mn = min(mn, arr[i].marks);
    }

    cout << mn << endl;

    return 0;
}