#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


// GFG Solutions : time complexity :: o(n)
vector<int> rotate2(std::vector<int > &v){
	int i=0;
	int j=v.size()-1;
	int temp = v[0];
	while(i<j){
		v[i] = v[i+1];
		i++;
	}
	v[v.size()-1] = temp;
	return v;
}

// time complexity :: o(n)
vector<int> rotate(std::vector<int > &v){
	int i=1;
	int j=v.size()-1;
	while(i<j){
		int temp = v[i];
		v[i] = v[j];
		v[j] = temp;
		i++;
		j--;
	}
	i=0;
	j=v.size()-1;
	while(i<j){
		int temp = v[i];
		v[i] = v[j] ;
		v[j] = temp;
		i++;
		j--;
	}
	return v;
}


int main()
{
	ll n,q;
	cin>>n;
	std::vector<int> v;
	while(n--){
		cin>>q;
		v.push_back(q);
	}

	v = rotate2(v);

	for(auto q:v){
		cout<<q<<" ";
	}
	return 0;
}