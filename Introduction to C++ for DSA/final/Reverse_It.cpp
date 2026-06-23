#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    int n;
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
    }

    char sec[n];

    for (int i = 0; i < n; i++)
    {
        sec[i] = arr[i].s;
    }

    reverse(sec, sec + n);

    for (int i = 0; i < n; i++)
        {
            arr[i].s = sec[i];
        }

    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm <<" "<< arr[i].cls << " "<<arr[i].s << " "<< arr[i].id<<endl;
    }
    return 0;
}