#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll  fib(ll n){
	if(n == 0 || n == 1){
		return n;
	}
	return fib(n-1) + fib(n-2);
}

int main()
{
	ll t;
	cin>>t;
	cout<<fib(t);

	return 0; 
}