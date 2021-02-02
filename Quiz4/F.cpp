#include <iostream>
#include <string>

using namespace std;

void answer(string s) {
	string t, result;

	for (int i = 0; i<s.length(); i++){
		if (s[i]!=' ')
			result.push_back(s[i]);
		else
			break;
	}

   for(int i=0; i<s.length(); i++){
		if (s[i]!=' ')
		{
            t.push_back(s[i]);
			if(s.length()==i+1 && (result.length()>t.length()))
				result = t;
		}
		else{
			if(result.length()<t.length())
				result = t;
			t.clear();
		}
	}
	cout<<result<<" ";
}

int main() {
    string s;
    getline(cin,s);
	answer(s);
	return 0;
}