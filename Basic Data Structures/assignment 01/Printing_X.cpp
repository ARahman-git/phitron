#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = n/2;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        
        cout << "\\";
        for (int j = 0; j < n - 2 - 2*i ; j++)
        {
            cout << " ";
        }
        cout <<"/" << endl;
        
    }
    for (int i = 0; i <x; i++)
    {
        cout <<" ";
    }
    cout << "X"<< endl;

    for (int i = x-1; i >= 0; i--)
    {
        for(int j = 0; j < i; j++ )
        {
            cout << " ";
        }
        cout<< "/";
        for (int k = 0; k < n -2-2*i; k++)
        {
            cout << " ";
        }
        cout << "\\" << endl;
        

    }
    
    
    return 0;
}

/*
\   /
 \ /

\   /
 \ /
  X
 / \
/   \

\     /
 \   /
  \ /
   X
  / \
 /   \
/     \

*/
