#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //unsigned int ;
    unsigned long long n;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}