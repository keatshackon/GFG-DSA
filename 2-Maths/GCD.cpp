#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	 ll a,b,c;
	 cin>>a>>b;
	 while((c = a%b) != 0){
	 	a=b;
	 	b=c;

	 }
	 cout<<b;
}