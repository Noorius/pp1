#include <bits/stdc++.h>
using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination){
    for(auto c : source){
        destination.push_back(c);
    }
    source.clear();
}

int main()
{
    vector<string> source={"apple", "pear", "banana"};
    vector<string> destination={"fruits"};
    MoveStrings(source,destination);

    for(auto c : destination)
        cout<<c<<' ';
    for(auto c : source)
        cout<<c<<' ';
    return 0;
}