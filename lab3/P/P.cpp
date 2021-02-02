#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned int n;

    cin >> n;

    if (sqrt(n) == (int)sqrt(n))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}