#include <bits/stdc++.h>
using namespace std;

int Trans(string s, int i){
    int n=(int)s[i];
    return n;
}

string vigenere(string word, string code){
    string crypt;
    string n;
    for(int i=0;i<word.size();i++)
        n+=(char)((Trans(word,i)-97+ Trans(code,i)-97) % 26)+97;

    crypt += n;
    return crypt;
}

int main()
{
    string word, code;
    cin>>word>>code;
    if(word.size()>code.size()){
        int i=0;
        while(word.size()!=code.size()){
            code+=code[i++];
        }
    }
    cout<<vigenere(code, word);

    return 0;
}