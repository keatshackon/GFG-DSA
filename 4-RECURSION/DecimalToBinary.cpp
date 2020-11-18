#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void  DToB(ll t){
	if(t == 0 ){
		return;
	}
	DToB(t/2);
	cout<<(t%2);

}

int main()
{
	ll t;
	cin>>t;
	DToB(t);
	return 0;
}