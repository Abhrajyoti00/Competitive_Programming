
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void bfsA(ll amiNije, ll baba, vector<vector<ll>>& amar_pashe, vector<ll>& Adj, vector<ll>& choto_bhai) {
    Adj[amiNije] = 1;  
    choto_bhai[amiNije] = 0;   

    for (ll amar_bhai : amar_pashe[amiNije]) {
        if (amar_bhai == baba){
            continue;
        }
        bfsA(amar_bhai, amiNije, amar_pashe, Adj, choto_bhai);
        Adj[amiNije] += Adj[amar_bhai];
        choto_bhai[amiNije] += choto_bhai[amar_bhai] + Adj[amar_bhai];
    }
}



void bfsB(ll amiNije, ll baba, vector<vector<ll>>& amar_pashe, vector<ll>& Adj, vector<ll>& boroBHai, ll shobCheye_imp_Number) {
    for (ll amar_bhai : amar_pashe[amiNije]) {
        if (amar_bhai == baba){
            continue;
        }
        boroBHai[amar_bhai] = boroBHai[amiNije] + shobCheye_imp_Number - 2 * Adj[amar_bhai];
        bfsB(amar_bhai, amiNije, amar_pashe, Adj, boroBHai, shobCheye_imp_Number);
    }
}


int main(){
    ll shobCheye_imp_Number ;
    cin>>shobCheye_imp_Number;
    vector<vector<ll>>graph(shobCheye_imp_Number+1);
    vector<vector<ll>>dist(shobCheye_imp_Number+1, vector<ll>(shobCheye_imp_Number+1, 0));
    vector<ll> adj(shobCheye_imp_Number + 1, 0);  
    vector<ll> tree(shobCheye_imp_Number + 1, 0);  

    for(ll i=0;i<shobCheye_imp_Number-1;i++){
        ll x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
        dist[x][y] = 1;
        dist[y][x] = 1;
    }
        bfsA(1, -1, graph, adj, tree);

        bfsB(1, -1, graph, adj, tree, shobCheye_imp_Number);

        // for(ll i = 0; i<10; i++){
        //     // Do nothing
        //     // Do something
        //     // cout<<i;
        // }

        for (ll i = 1; i <= shobCheye_imp_Number; i++) {
            cout << tree[i] << "\n";
        }
    return 0;
}
