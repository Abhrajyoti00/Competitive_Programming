#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int n;
        cin>>n;
        int s = 0;
        for(int i = 0; i<n; i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
            s+=ele;
        }
        int equal_amt = s/n;
        int acc = 0;
        int flag = 0;
        for(int i = 0; i<n; i++){
            if(v[i]>equal_amt){
                acc += v[i]-equal_amt;
            }

            else if(v[i]<equal_amt){
                int need = equal_amt - v[i];
                if(acc < need)
                {
                    cout<<"No\n";
                    flag = 1;
                    break;
                }
                acc -= need;
            }
        }

        if(flag == 0)
            cout<<"yes \n";
    }
}