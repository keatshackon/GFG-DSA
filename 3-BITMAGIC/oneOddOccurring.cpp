#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int x = 0;
	std::vector<int> v = {2,2,1,3,4,5,5,4,1};
	x = v[0];

	for(int i=1;i<v.size();i++){
		x ^= v[i]; 
	}

	cout<<x;

}