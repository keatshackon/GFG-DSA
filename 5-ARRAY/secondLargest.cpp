#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int Secondlargest(vector<int> v){


	// time cmplexit t(n) = o(2n)
	int l1 = 0;
	for(int i = 1; i<v.size() ; i++){
		if(v[l1] < v[i]){
			l1 = i;
		}
	}

	int res = -1; 
	for(int i=0 ;i < v.size(); i++){
		if(v[l1] != v[i]){

			if(res == -1){
				res = i;
			}
			else if(v[i] > v[res]){
				res = i;
			}
		}
	}
	
	return res; 
}



int Secondlarge(vector<int> v){

	int res = -100000000;
	int largest = 0;
	for(int i=0;i<v.size();i++){
		if(v[i] > v[largest] ){
			res = largest;
			largest = i;
		}else if(v[i] != v[largest]){
			if(res == -100000000 || v[i] > v[res]){
				res = i;
			}
		}
	}
	return res;
}

int main()
{
	ll t,q;
	cin>>t;
	std::vector<int> v;
	for(int i=0;i<t;i++){
		cin>>q;
		v.push_back(q);
	}
	// cout<<Secondlargest(v);

	cout<<Secondlarge(v);
	
	return 0;	
}