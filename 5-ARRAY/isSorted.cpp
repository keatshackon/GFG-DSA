#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool isSorted(vector<ll> v){
	
	for(int i=0;i<v.size()-1;i++){
		if(v[i+1] < v[i] ){
			return false;
		}
	}
	return true;
}


int main()
{
	std::vector<ll> v;
	int n,q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>q;
		v.push_back(q);
	}
	if(isSorted(v)){
		cout<<"Yes";
	}else{
		cout<<"No";
	}

	return 0;

}