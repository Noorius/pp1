#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a = 0, b = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            a++;
        else
            b++;
    }
    cout << b << " " << a;

    return 0;
}