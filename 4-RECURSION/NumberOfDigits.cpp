#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll digits(ll n){
	if(n == 0){
		return 0;
	}
	return 1 + digits(n / 10);

}


int main()
{
	ll n;
	cin>>n;
	cout<<digits(n);
	return 0;
}