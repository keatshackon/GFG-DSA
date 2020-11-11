#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	cin>>t;
	ll res = t,rev=0;

	while(t){
		rev = rev*10 + t%10;
		t/=10;
	}

	if(rev == res){
		cout<<"Yes";
	}else{
		cout<<"No";
	}

	return 0;

}