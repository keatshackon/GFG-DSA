#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n;
	cin>>n;
	int cnt = 0; 
	for(int i = 5;i <= n; i+=5){
		if(i % 5 != 0){
			cnt++;
		}else {
			int k = i;
			while(k){
				cnt++;
				k/=5;
			}	
		}
	}

	cout<<cnt;
}