#include<iostream>
using namespace std;


// Recursive Implementations
int fNumber(int n)
{
	if(n == 0 || n==1)
		return n;

	return fNumber(n-1) + fNumber(n-2);
}

int main()
{
	int n;
	cin>>n;
	cout<<fNumber(n);
	return 0;
}