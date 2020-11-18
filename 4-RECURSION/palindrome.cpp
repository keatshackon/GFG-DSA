#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


string palindrome(string n,int i,int j){
	if(i>j){
		return "True";
	}
	if(n[i] != n[j]){
		return "False";
	}
	return palindrome(n,i+1,j-1);
}

int main()
{
	string  n;
	cin>>n;

	cout<<palindrome(n,0,n.size()-1);
	return 0;
}