#include <bits/stdc++.h>
using namespace std;

int BitwiseX(int i, int j){
    return i^j;
}

int main()
{
    int n, cnt=0;
    cin>>n;
    vector<int> init(n);

    for(auto& c : init)
        cin>>c;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(find(init.begin(),init.end(),BitwiseX(init[i],init[j]))!=init.end())
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
}