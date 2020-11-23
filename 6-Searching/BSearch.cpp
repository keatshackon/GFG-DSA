#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int bSearch(vector<ll> &v,int l,int j,int target){
	while(l<=j){
		ll m = (l+j)/2;
		if(v[m] == target){
			return m;
		}else if(v[m] > target){
			j = m-1;
		}else{
			l = m+1;
		}
	}
	return -1;
}

int main()
{
	ll n,q;
	cin>>n;
	std::vector<ll> v;
	for(int i=0;i<n;i++){
		cin>>q;
		v.push_back(q);
	}
	sort(v.begin(), v.end());

	ll target = 0;
	cin>>target;

	ll res = bSearch(v,0,v.size()-1,target);
	if(res == -1){
	 	cout<<"Not Found "<<-1;
	}else{
	 	cout<<"Found "<<res;
	}

	return 0;
}