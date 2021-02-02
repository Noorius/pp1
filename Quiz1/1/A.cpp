#include <iostream>

using namespace std;

int main()
{
    int n, k = 0, m;
    cin >> n;
    while (n != 0)
    {
        m = n;
        cin >> n;
        if (n > m)
            k++;
    }
    cout << k;
    return 0;
}