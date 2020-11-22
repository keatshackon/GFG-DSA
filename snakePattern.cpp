#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void snake(vector<vector<int>> &arr){
	int right = 1,q;
	for(int i=0;i<arr.size();i++){
		if(right == 1){
			for(int j = 0;j<arr[i].size();j++){
				cout<<arr[i][j]<<" ";
			}
			right = 0;
		}else{
			for(int j = arr[i].size()-1; j>=0 ;j--){
				cout<<arr[i][j]<<" ";
			}
			right = 1;
		}
		cout<<"\n";
		
	}
}


int main()
{
	vector<vector<int>> arr;
	int m,n,q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		vector<int> v;
		for(int j=0;j<m;j++){
			cin>>q;
			v.push_back(q);
		}
		arr.push_back(v);
	}
	snake(arr);
}