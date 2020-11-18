#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



void print(ll n){
	if(n == 0){
		return;
	}
	cout<<n<<" ";
	print(n-1);
}

int main()
{
	ll t;
	cin>>t;
	print(t);
	return 0;

}