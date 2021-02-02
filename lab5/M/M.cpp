#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string s;
    char t;
    int x, cnt;
    cin >> s >> t >> x;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t)
            cnt++;
    }
    if (cnt == x)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}