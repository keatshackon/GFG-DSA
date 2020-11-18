#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void print(ll n){
	if(n == 0){
		return;

	}

	print(n-1);
	cout<<n<<" ";
}

int main()
{
	ll t;
	cin>>t;
	print(t);
	return 0;
}