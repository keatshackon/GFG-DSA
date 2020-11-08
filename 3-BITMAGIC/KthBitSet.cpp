#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t,k;
	cin>>t>>k;
	k = 1<<(k-1);
	if(t&k > 0){
		cout<<"Yes\n";
	}else{
		cout<<"No";
	}

	
	// USING RIGHT OPERATOR
	// ===========================

	t = t>>(k-1);
	if(t&1 == 1){
		cout<<"Yes";
	}else{
		cout<<"No";
	}

	return 0;
}