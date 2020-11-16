#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


// Time Complexity t(n) = o(N^2)
vector<ll> moveZero2(vector<ll> &v){

	for(int i=0;i<v.size();i++){
		if(v[i] == 0){
			for(int j=i+1;j<v.size();j++){
				int temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
	return v;
}



// Time Complexity t(n) = o(n)
vector<ll> moveZero1(vector<ll> &v){

	std::vector<ll> temp;
	ll cnt = 0; 
	for(auto q:v){
		if(q != 0){
			temp.push_back(q);
		}else{
			cnt++;
		}
	}
	while(cnt--){
		temp.push_back(0);
	}

	return temp;
}

// GFG Solutions -> Time Complexity t(n) = o(n)
vector<ll> moveZero3(vector<ll> &v){

	int cnt = 0;
	for(int i = 0;i < v.size();i++){
		if(v[i] != 0){
			int temp = v[i];
			v[i] = v[cnt];
			v[cnt] = temp;
			cnt++;
		}
	}
	return v;
}




int main()
{
	ll t,n,q;
	cin>>n;
	std::vector<ll> v;
	for(int i=0;i<n;i++){
		cin>>q;
		v.push_back(q);
	}

	v = moveZero3(v);

	for(auto q:v){
		cout<<q<<" ";
	}
	return 0;
}