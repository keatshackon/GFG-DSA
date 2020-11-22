#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void vecIntialize4(int **arr,int m,int n){

	// Here you can change column size but it will create 3 X N size matrix!

	
	arr = new int* [m];
	for(int i=0;i<m;i++){
		arr[i] = new int[n];
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}


}

void vecIntialize3(std::vector<std::vector<int>> &main){

	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		std::vector<int> v;
		cin>>m;
		for(int j=0;j<m;j++){
			v.push_back(10);
		}
		main.push_back(v);
	}


	for(int i=0;i<main.size();i++){
		for(int j=0;j<main[i].size();j++){
			cout<<main[i][j]<<" ";
		}
		cout<<"\n";
	}

}

void vecIntialize2(){

	
	int m,n;
	cin>>n;

	vector<int> v[n];

	for(int i=0;i<n;i++){
		cin>>m;
		for(int j=0;j<m;j++){
			v[i].push_back(10);
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void vecIntialize1(){

	int n = 0, m = 0;
	cin>>n>>m;
	int arr[n][m];

	for(int i = 0 ;i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin>>arr[i][j];
		}
	}

	for(int i=0;i < n; i++) {
		for(int j = 0;j < m; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}

}

int main()
{
	// vecIntialize1();
	// vecIntialize2();
	// vecIntialize3();

	// int m = 3 ,n = 2;
	// this will create the dnamic size 2-D array!
	// this will create all memory in heap section of memory!
	int **r;
	r  = new int* [3];



	// this will create the static array pointer of 2-D array!
	// Actually This will create memor in stack area but each 1-D 
	// arra will be in heap area!
	// int *ar[m];

	vector<vector<int>> v;
	vecIntialize3(v);
}