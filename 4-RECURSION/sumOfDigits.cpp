#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int digit(ll n){
	if(n == 0){
		return 0;
	}
	return n % 10 + digit(n / 10);
}

int main()
{
	ll n;
	cin>>n;
	cout<<digit(n);

	return 0;
}