#include <iostream>

using namespace std;

int main()
{
    int n, mx, mn, k;
    cin >> n;
    int a[n];
    mx = -20000000;
    mn = 20000000;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)
        {
            mx = a[i];
            k = i;
        }
        mn = min(a[i], mn);
    }
    a[k] = mn;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}