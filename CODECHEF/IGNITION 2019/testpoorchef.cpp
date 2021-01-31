#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0,p=0,s,ss,c=0;
    cin>>n>>m;
    int a[n][m];
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
               
            }
    }
for(int i=0;i<n;i++)
    {
            for(int j=0;j<m;j++)
            {
                mp.insert(pair<int, int>(a[i][j],j));
               
            }
    }

     
    unordered_map<int, int>::iterator itr;  
    for (itr = mp.begin(); itr != mp.end(); ++itr) { 
         
    } 
    cout << endl; 
}