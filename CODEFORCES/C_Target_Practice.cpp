#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<vector<char>>v(10,vector<char>(10,'0'));

    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            cin>>v[i][j];
        }
    }
    int score = 0;
    int sc[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};
    for(int i =0; i<10; i++){
        for(int j =0; j<10; j++)
            if(v[i][j] == 'X')
                score+=sc[i][j];
    }
    cout<<score<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
