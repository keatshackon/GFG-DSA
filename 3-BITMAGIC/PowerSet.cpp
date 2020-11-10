#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	ll t;
	cin>>t;

	while(t--){
		string s;
		cin>>s;
		int len = s.length();
		int itr = pow(2,len);
		for(int i=0; i<itr; i++){
			for(int j = 0; j<len; j++){
				if((i & (1<<j)) != 0){
					cout<<s[j];
				}
			}
			cout<<"\n";
		}
	}
} 