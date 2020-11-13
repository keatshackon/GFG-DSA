#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	int flag = 1;
	cin>>t;

	if(t == 1 || (t%2==0 && t!=2 ) || (t % 3 == 0 && t != 3)){
		cout<<"No";
	}else{

		//any prime number can be represented as 6i+1 axcept 2 and 3
		for(int i=5; i*i<=t; i+=6){
		if(t % i == 0){
				flag = 0;
				cout<<"No";
				break;
			}
		}
		if(flag == 1){
			cout<<"Yes";
		}	
	}
	return 0;
}