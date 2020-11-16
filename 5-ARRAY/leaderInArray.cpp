#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//time Complexity :: o(n)

void leader2(vector<int> &v){

	vector<int> temp;
	temp.push_back(v[v.size()-1]);
	int cur_leader = v[v.size()-1];
	for(int i=v.size()-2;i>=0;i--){
		if(v[i] > cur_leader){
			temp.push_back(v[i]);
			cur_leader = v[i];
		}
	}

	for(int i=temp.size()-1;i>=0;i--){
		cout<<temp[i]<<" ";
	}

}



//time Complexity :: o(n^2)
void leader1(vector<int> &v){

	for(int i=0;i<v.size();i++){
		int flag = 1;
		for(int j=i+1;j<v.size();j++){
			if(v[i] <= v[j]){
				flag = 0;
				break;
			}
			
		}
		if(flag == 1)
			cout<<v[i]<<" ";
	}
}


int main()
{
	ll t,n,q;
	cin>>n;
	std::vector<int> v;
	while(n--){
		cin>>q;
		v.push_back(q);
	}

	leader1(v);

	

	return 0;

}