#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int one(std::vector<ll> &v){
	int res = 0;
	int n = v.size();
	for(int i=0;i<n;i++){
		int cur = 0;
		for(int j=i ;j<n;j++){
			if(v[j] == 1){
				cur++;
			}else{
				break;
			}
		}
		res = max(cur,res); 
	}
	return res;
}


int main()
{
	ll n,t;
	std::vector<ll> v={0,1,1,1,0,1,1};
	cout<<one(v);
	return 0;
}
