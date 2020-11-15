#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


vector<ll> reverse(vector<ll> &v){
	ll i=0;
	ll j = v.size()-1;
	while(i<j){
		ll temp = v[i];
		v[i] = v[j];
		v[j] = temp;
		i++;
		j--;
	}

	return v;
}

int main()
{
	ll t,n,q;
	std::vector<ll> v;
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>q;
		v.push_back(q);
	}
	v = reverse(v);
	for(auto q:v){
		cout<<q<<" ";
	}
}