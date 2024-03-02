#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char, int>mp;
    int f = 0;
    for(int i = 0; i<s.length(); i++){
        mp[s[i]]++;
    }
    int ind = -1;
    char ch ;
    for(auto &it : mp){
        if(it.second == 1)
        {
            ch = it.first;
        }
    }
    for(int i=0; i<s.length(); i++){
        if(s[i] == ch)
        {
            cout<<i+1<<endl;
            break;
        }
    }
} 
