#include <bits/stdc++.h>

using namespace std;

class Student
{
    public:
    int id;
    char name[101];
    char section;
    int mark;
};

int main()
{
    int t;
    cin>> t;
    while (t--)
    {
        Student a, b, c;
        cin >> a.id >> a.name >> a.section >> a.mark;
        cin >> b.id >> b.name >> b.section >> b.mark;
        cin >> c.id >> c.name >> c.section >> c.mark;
        
        Student x = a;
        
        if(b.mark > x.mark || (b.mark == x.mark && b.id < x.id))
            x = b;
        if(c.mark > x.mark ||(c.mark == x.mark && c.id < x.id))
        {
            x = c;
        }
        cout<< x.id << " "<<x.name<< " " << x.section<< " " << x.mark<< endl;
        
    }
    return 0;
}