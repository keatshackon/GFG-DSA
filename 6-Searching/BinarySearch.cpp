#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll binarySearch(vector<ll> &v,int l,int j,int target){
	if(l>j){
		return -1;
	}

	ll mid = (l+j)/2;
	if(target == v[mid]){
		return mid;
	}else if(v[mid] < target){
		binarySearch(v,mid+1,j,target);
	}else{
		binarySearch(v,l,mid-1,target);
	}

}


int main()
{
	ll t,n,i,j,q;
	cin>>n;
	vector<ll> v;
	for(int i=0;i<n;i++){
		cin>>q;
		v.push_back(q);
	}
	sort(v.begin(), v.end());
	ll target = 0;
	cin>>target;
	ll res = binarySearch(v,0,v.size()-1,target);
	if(res == -1){

		cout<<"Not Found "<<res;
	}else{
		cout<<"Found At "<<res;
	}

	return 0;
}