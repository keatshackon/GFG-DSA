#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

	/*
		time complexity t(n) = o(n)
	*/
	ll t;
	cin>>t;
	int x = 0;
	int q=0;
	std::vector<int> v;
	while(t--){
		cin>>q;
		v.push_back(q);
	}
	int res = -1;
	for(int i=1;i<v.size();i++){
		if(v[i] > v[x]){
			x = i;
		}
	}

	cout<<x+1;

}