#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        cout<<(((int)(s1[i]-'0'))^((int)(s2[i]-'0')));
    }
}