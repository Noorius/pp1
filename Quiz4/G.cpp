#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,A,B;
    char w;
    vector<char> low;
    vector<char> up;

    cin>>N>>A>>B;
    for(int i=0; i<N; i++){
        cin>>w;
        if(w>='a' && w<='z')
            low.push_back(w);
        if(w>='A' && w<='Z')
            up.push_back(w);
    }
    if((up.size()*A)>(low.size()*B))
        cout<<(low.size()*B);
    else
        cout<<(up.size()*A);
    return 0;
}