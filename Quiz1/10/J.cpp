#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int y, k;
    double p ,pf,t;
    cin >> t >> p >> y;
    p = (double)p / 100;

    while (t <= y)
    {
        pf=t * p;
        t +=pf;
        int t=(double)t;
        k++;
    }
    cout << k;
    return 0;
}