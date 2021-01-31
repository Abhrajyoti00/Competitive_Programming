#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;                             
    int a[1005],c[1005];
     int l[1100];

    for(int i=2;i<=n;i++){
            cin>>a[i];

            ++c[a[i]];
            }
        for (int i = 1; i <= n; ++i) 
        if (c[i] == 0) ++l[a[i]];
    for (int i = 1; i <= n; ++i)
        if (c[i] != 0 && l[i] < 3) {
            puts ("No");
            return 0;
        }
    puts ("Yes");
}

