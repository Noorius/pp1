#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, k;
    cin >> n;

    for (int j = 2; j <= n; j++)
    {
        for (int i = j; i > 0; i--)
        {
            if (j % i == 0)
            {
                k++;
            }
        }
        if (k == 2)
            cout << j << " is prime" << endl;
        k = 0;
    }

    return 0;
}