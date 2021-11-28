#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> even;
    vector<int> odd;
    vector<int>::reverse_iterator rit;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        if(t%2==0)
            even.push_back(t);
        else
            odd.push_back(t);
    }
    sort(begin(even),end(even));
    sort(begin(odd),end(odd));
    for(rit=even.rbegin(); rit!=even.rend(); rit++)
        cout<<*rit<<" ";
    for(const auto& c : odd)
        cout<<c<<" ";

    return 0;
}