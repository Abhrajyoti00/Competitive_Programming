#include<bits/stdc++.h>
using namespace std;

bool match(string &temp, string &s)
{
    int n = s.length();
    for(int i = 0 ; i < n; i++){
            if(islower(temp[i])){
                if(s[i] != temp[i])
                    return false;
            }
            else if(isupper(temp[i])){
                if(s[i]==tolower(temp[i]))
                    return false;
            }
    }
        return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int f = 0;
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        string temp = "";
        for(int i = 0 ; i<n; i++){
            if(a[i] != c[i] && b[i]!=c[i])
            {
                cout<<"YES \n";
                f = 1;
                break;
            }
        }   
            if(f == 0)
                cout<<"NO \n";
    }
}