#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    t = 1;
    while(t--){
        int n;
        cin>>n;
        string s, t;
        cin>>s>>t;
        int c = 0;
        // int i = 0, j = 0;
        // while(i<n){
        //     if(s[i] == t[i])
        //     {
        //         i++;
        //         continue;
        //     }
        //     if(s[i] != t[i] && s[i] == 'B'){
        //         j = i+1;
        //         while(j<n){
        //             if(s[j]!=t[j] && s[j] == 'A'){
        //                 swap(s[i], s[j]);
        //                 c++;
        //                 break;
        //             }
        //             j++;
        //         }
        //     }
        //     i++;
        // }
        // cout<<s<<" "<<t<<" "<<c<<endl;
        // if(s == t)
        //     cout<<c;
        // else
        //     cout<<-1;


        int ba = 0, ab = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == 'B' && t[i] == 'A')
                ba++;
            else if(s[i] == 'A' && t[i] == 'B'){
                if(ba<=0){
                    cout<<-1<<endl;
                    return 0;
                }
                else{
                    ba--;
                    c++;
                }
            }
        }
        if(ba == n ){
            cout<<-1;
            return 0;}
        // cout<<ba<<" "<<c;
        if(ba > 0 && c == 0 ){
            cout<<-1;
            return 0;}

        cout<<c+ba;
    }
    return 0;
}