#include <bits/stdc++.h>

using namespace std;

int q;
long long int n,m;
long long int szum[2000];
int rem[10];

int main(){
    cin>>q;

    for(int i=0; i<q; i++){
        cin>>n;
        cin>>m;
        int szum10=0;
        for(int j=1; j<=10; j++){
            rem[j]=(j*m)%10;
            szum10=szum10+rem[j];
        }

        long long int mar=(n/m)%10;
        long long int arany=n/m-mar;
        szum[i]=arany/10*szum10;
        for(int j=1; j<=mar; j++){
            szum[i]=szum[i]+rem[j];
        }
    }

    for (int i=0; i<q; i++){
    cout<<szum[i]<<endl;
}

return 0;
}
