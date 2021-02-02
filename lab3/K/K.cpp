#include <iostream>

using namespace std;

int main()
{
    int n, l = 0, i, j;
    cin >> n;
    int a[n], b[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < l; j++)
        {
            if (a[i] == b[j])
                break;
        }
        if (j == l)
        {
            b[l] = a[i];
            l++;
        }
    }

    for (i = 0; i < l; i++)
        cout << b[i] << " ";
    return 0;
}