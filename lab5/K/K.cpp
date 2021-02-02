#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            cnt++;
    }
    cout << cnt;
    return 0;
}
