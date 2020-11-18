#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int fact(ll n){
	if(n == 0){
		return 1;
	}
	return n*fact(n-1);
}


int main()
{
	ll t ;
	cin>>t;
	cout<<fact(t);
	return 0;
}