#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double l = (double)(sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));

    cout << setprecision(10) << l;
    return 0;
}