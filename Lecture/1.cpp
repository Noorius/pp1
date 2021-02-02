#include <bits/stdc++.h>
using namespace std;
multiset<int> a;
int main()
{
    a.insert(1);
    a.insert(1);
    a.insert(2);
    a.insert(2);
    a.insert(2);
    a.insert(6);
    a.insert(6);
    a.insert(6);
    a.insert(6);
    pair<multiset<int>::iterator, multiset<int>::iterator> pr = a.equal_range(2);
    multiset<int>::iterator it;
    for(it=pr.first; it!=pr.second; it++)
        cout<<*it<<' ';
    return 0;
}