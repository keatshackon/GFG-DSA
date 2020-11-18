#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


ll natural(ll n){
	if(n == 0) {   
		return 0;
	}
	return n + natural(n-1);
}


int main()
{
	ll t;
	cin>>t;

	cout<<natural(t);

	return 0;
}