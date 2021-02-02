#include <bits/stdc++.h>
using namespace std;

void formula(int n, int i, set<int> &mySet){
    for (int i=1;i<=n;i++) {
        if (n%i==0) 
            mySet.insert(i);
    }
}

int sum(set<int> &mySet, set<int>::reverse_iterator it){
    if(it==rend())
        return 0;
    return mySet.size()+*it+sum(mySet,it+1);
}

int main()
{
    int n,i=1;
    set<int> mySet;
    set<int>::reverse_iterator it;
    cin>>n;
    formula(n,i,mySet);
    it=rbegin();
    cout<<sum(mySet,it);

    for(it=mySet.begin();it!=mySet.end();it++)
        cout<<(*it)<<" ";

    return 0;
}