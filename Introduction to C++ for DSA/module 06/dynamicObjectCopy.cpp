#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    string country;
    int jersey;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};
int main()
{
    Cricketer* asif = new Cricketer("Bangladesh", 100);
    Cricketer* abdur = new Cricketer("Bangladesh", 99);

    // asif->country = abdur->country;
    // asif->jersey = abdur->jersey;

    //easy way, dereference and print

    *asif = *abdur;

    //cout << asif->jersey <<endl;
    delete abdur;

    cout << asif->jersey<< " " << asif->country;
    return 0;
}