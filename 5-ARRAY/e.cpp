/*

	GRAPH :: Implemenation Using  Adjacency Matrix And 
			Adjacency List!

*/


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	vector<vector<int>> v;
	int q;

	for (int i = 0; i < vect.size(); i++){
        for (int j = 0; j < vect[i].size(); j++){
            v.push_back(v[i][j]);
        }    
        cout << endl;
    }


	for(int i = 0; i<2; i++){
		for(int j = 0;j<3 ; j++){
			cin>>q;
			v[i].push_back(q);
		}
	}

	for(int i = 0; i < 2; i++){
		for(int j = 0;j < 3 ; j++){
			cout<<v[i][j];
		}
		cout<<"\n";
	}
}