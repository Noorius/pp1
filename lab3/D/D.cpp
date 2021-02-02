#include <iostream>

using namespace std;

int main()
{
    int n, mx = -20000000, k, j;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        if (k > mx)
        {
            mx = k;
            j = i;
        }
    }
    cout << j;
    return 0;
}