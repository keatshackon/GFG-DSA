#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


// time complaxit :: o(n)
int one2(vector<ll> &v){
	ll res = 0;
	ll cur = 0;
	for(int i=0;i<v.size();i++){
		if(v[i] == 0){
			cur = 0;
		}else{
			cur++;
			res = max(cur,res);
		}
	}

	return res;
}


// Time compplaxity :: o(n^2)
int one(vector<ll> &v){
	ll largest = 0;
	ll i=0;

	for(ll i = 0; i < v.size(); i++){
		ll cnt = 1;
		if(v[i] == 1) {
			ll temp = i+1;
			while(v[temp] == 1 && temp < v.size()){
				cnt++;
				temp++;
			}
			if(largest < cnt ){
				largest = cnt;
			}
		}
	}

	return largest;
}


int main()
{
	ll n,t;
	cin>>n;
	std::vector<ll> v;
	while(n--){
		cin>>t;
		v.push_back(t);
	}
	cout<<one2(v);

	return 0;
}