#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<string, int> a;
    a.insert(make_pair("abc",1));
    a.insert(make_pair("abc",1));
    a.insert(make_pair("abc",1));
    a.insert(make_pair("abc",1));
    a.insert(make_pair("abc",1));
    a.insert(make_pair("abc",1));

    

    multimap<string,int>::iterator it;
    for (it = a.begin(); it!=a.end(); it++)
        cout<<(*it).first<<" "<<(*it).second<<endl;


    return 0;
}