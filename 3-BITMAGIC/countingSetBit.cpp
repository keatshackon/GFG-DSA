#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	int x,cnt=0;
	cin>>x;

	//iterate over all bits of number
	while(t){
		if((t & 1) == 1){
			cnt++;
		}
		t=t>>1;

	}

	//iterate over only set bit using BRIAN KERNINGAM ALGORITHM!

	while(t !=0){
		t = t & (t-1);
		cnt++;
	}
	cout<<x;

	return 0;
}