#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n,q;
	cin>>t;
	while(t--){
		cin>>n;
		std::vector<int> v;
		for(int i=0;i<n;i++){
			cin>>q;
			v.push_back(q);
		}
		int x = 0;
		for(auto q:v){
			x = x^q;
		}
		x = x & (~(x -1));

		int res = 0,res2 = 0; 
		for(int i=0; i<n; i++){
			if(v[i] & x == 1){
				res ^= v[i];
			}else{
				res2 ^= v[i];
			}
		}

		cout<<res<<" "<<res2;

	}
}