#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	ll n,q;
	cin>>n;
	std::vector<int> v ;
	for(int i=0;i<n-1;i++){
		cin>>q;
		v.push_back(q);
	}
	ll x = v[0];

	for(ll i = 1;i<v.size();i++){
		x ^= v[i];
	}
	ll i=1;
	while(i <= n){
		x = x^i;
		i++;
	}

	cout<<x;

}