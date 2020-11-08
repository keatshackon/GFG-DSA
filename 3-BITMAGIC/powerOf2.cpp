#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n,flag = 0;
	cin>>n;
	// if( (n & (n-1)) == 0){
	// 	cout<<"True";
	// }else{
	// 	cout<<"False";
	// }

	
	// or

	if(n == 0){
		cout<<"False";
	}
	while(n>=2){
		if(n%2 == 1){
			cout<<"False";
			flag = 1;
			break;
			
		}
		n/=2;
	}

	if(flag == 0){
		cout<<"True";
	}

	return 0;
}