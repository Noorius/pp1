#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    if (s.find(t, 0) != string::npos)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}