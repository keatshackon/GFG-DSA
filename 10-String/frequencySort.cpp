#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// print frequency of all character of string in sorted order!

int main()
{
	string s;
	std::vector<int> v(26);
	cin>>s;
	for(int i=0;i<s.length();i++){
		v[s[i] - 'a']+=1;
	}

	for(int i=0;i<26;i++){
		if(v[i] != 0)
			cout<<(char)(i + 'a')<<" : "<<v[i]<<"\n";
	}

	return 0;
}