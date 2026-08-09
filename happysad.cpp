#include<iostream>
using namespace std;
int main()
{
    double happy,sad=0;
    cin>>happy;
    for(int i=0;i<4;i++)
    {
        double newHappy = 0.3 * happy + 0.5 * sad;
        double newSad = 0.7 * happy + 0.5 * sad;
        happy = newHappy;
        sad = newSad;
    }
    cout << happy << " " << sad << endl;
    return 0;
}