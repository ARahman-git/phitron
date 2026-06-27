#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N), B(N);

    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < N; i++)
        cin >> B[i];

    B.insert(B.end(), A.begin(), A.end());

    for (int x : B)
        cout << x << " ";

    return 0;
}