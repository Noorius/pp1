#include <bits/stdc++.h>
using namespace std;

map<char, int> addCount(map<char, int> result){
    string word;
    cin>>word;
    for(auto& c : word)
        result[c]++;
    return result;
}

bool Counter(const map<char, int>& m1, const map<char, int>& m2){
    if(m1!=m2)
        return false;
    return true;
}

int main()
{
    int n;
    map<char, int> w1;
    map<char, int> w2;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<(Counter(addCount(w1),addCount(w2)) ? "YES" : "NO")<<endl;
    }

    return 0;
}