#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	cin>>t;
	int res = 0; 
	int k = 1;
	int q = 5;
	while(q<=t){
		q = pow(5,k);
		res += t/q; 
		k++;

	}
	cout<<res;


}