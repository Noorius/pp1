#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int mx = -20000000;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if (mx < a[i])
            mx = a[i];

    cout << mx;

    return 0;
}