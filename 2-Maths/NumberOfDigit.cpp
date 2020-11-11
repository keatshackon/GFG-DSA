#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


/*
	METHOD: 3HJ 
*/
int countDigit(int n){
	if(n == 0){
		return 0;
	}
	return 1 + countDigit(n/10);
}


int main()
{
	ll t;
	int cnt = 0 ;
	cin>>t;

	/*
		//METHOD :: 1 
		//============

		while(t){
			t=t/10;
			cnt++;
		}
	
	*/

	
		//METHOD :: 2 
		//===========

		cout<<floor((log10(t))+1);
	
	

	/*
		//METHOD 3:
		//=========
		//RECURSIVE SOLUTION: 

		if(n == 0){
			cout<<1<<"\n"l
		}else{
			cout<<countDigit(t);
		}


	*/

	return 0;
}