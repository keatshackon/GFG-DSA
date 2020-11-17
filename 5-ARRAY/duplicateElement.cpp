/*
	Return The Size Of Distinct Array!
*/

#include<bits/stdc++.h>
using namespace std;
typedef int ll;

//Time Complexity t(n) = O(n) and Space Complaxity = O(1)
int sizee2(std::vector<ll> &v){

	int res = 1;
	for(int i=0;i<v.size()-1;i++){
		if(v[i]  != v[i+1] ){
			res++;
		}
	}
	return res;
}

//Time Complexity t(n) = O(n) and Space Complaxity = O(N)
int  sizee(vector<ll> &v, vector<ll> &temp){

	temp.push_back(v[0]);

	for(ll i=1;i<v.size();i++){
		if(v[i] > v[i-1]){
			temp.push_back(v[i]);
		}
	}

	return temp.size()-1;
}

int main()
{
	ll t,n,q;
	cin>>n;
	vector<ll> v,temp;
	while(n--) {
		cin>>q;
		v.push_back(q);
	}
	//Given sorted element in Vector!
	sort(v.begin(), v.end());

	cout<<sizee2(v);
	return 0;
}