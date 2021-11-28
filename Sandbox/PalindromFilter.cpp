#include <bits/stdc++.h>
using namespace std;

bool Pal(string i){
    for(int k=0; k<i.size()/2; k++){
        if(i[k]!=i[i.size()-k-1])
            return false;
        else
            continue;
    }
    return true;
}


vector<string> PalindromFilter(vector<string> words, int minLength){
    vector<string> result;
    for(string i : words){
        if(i.size()>=minLength && Pal(i))
            result.push_back(i);
    }
    return result;
}

int main(){
    vector<string> words={"anna", "mamm", "madam", "ana"};
    int minLength = 3;
    vector<string> result=PalindromFilter(words,minLength);
    for(string i : result)
        cout<<i<<' ';
    return 0;
}