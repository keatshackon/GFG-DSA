#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void fun(int *arr,int n) {
	
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}

}

int main()
{
	int *arr = new int[10];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[4] = 3;
	arr[5] = 4;

	fun(arr,10);

	return 0;
}