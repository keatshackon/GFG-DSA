#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Time Complexity T(n) = o(N)
int main()
{
	int t,n,d,q;
	cin>>n>>d;
	vector<int> v;
	int k = d;
	while(n--){
		cin>>q;
		v.push_back(q);
	}
	int i = 0;
	 q = d-1;
	while(i <= q){
		int temp = v[i];
		v[i] = v[q];
		v[q] = temp;
		i++;
		q--;
	}
	i = k;
	int j = v.size() - 1;
	while(i < j){
		int temp = v[i];
		v[i] = v[j];
		v[j] = temp;
		i++;
		j--;
	}
	i = 0;
	j = v.size()-1;

	while(i < j){
		int temp = v[i];
		v[i] = v[j];
		v[j] = temp;
		i++;
		j--;

	}

	for(auto q:v){
		cout<<q<<" ";
	}
}