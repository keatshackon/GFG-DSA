#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

	string s = "listen";
	string r = "silent";
	int flag = 0;

	vector<int> v(26);

	if(s.length() == r.length()){
		for(int i = 0; i < s.length(); i++){
			v[s[i] - 'a'] +=1;
			v[r[i] - 'a'] -=1;
		}	
	}else{
		cout<<"Not Anagram";
		flag=1;
	}

	for(int i=0;i<26;i++){

		if(v[i] != 0){
			cout<<"Not Anagram";
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		cout<<"Anagram";
	}

}
