// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long

// struct Edge{
//     ll u, v;
//     ll weight;
//     bool isQuery;
//     ll index;

//     bool operator<(const Edge& other)const{
//         return weight < other.weight;
//     }
// };

// vector<Edge>edges;

// void addEdge(ll u, ll v, ll weight, bool isQuery, ll index) {
//     edges.push_back({u, v, weight, isQuery, index});
// }


// int findUpar(int node, vector<ll>& parent){
//     if(node == parent[node])
//         return parent[node];
//     return parent[node] = findUpar(parent[node], parent);
// }

// void  unionByRank(int u, int v,  vector<ll>& parent,  vector<ll>& rank){
//     int uPar = findUpar(u, parent);
//     int vPar = findUpar(v, parent);
//     if(uPar == vPar)
//         return;
//     if(rank[uPar] < rank[vPar])
//             parent[uPar] = vPar;
//     else if(rank[uPar] > rank[vPar])
//             parent[vPar] = uPar;
//     else{
//         parent[vPar] = uPar;
//         rank[uPar]++;
//     }
// }

// void solve(){
//     ll n, m, q;
//     cin>>n>>m>>q;
//     vector<ll>rank, parent;
//     vector<string> ans(q, "");
//     rank.resize(n+1, 0);
//     parent.resize(n+1);

//     for(int i = 0; i<m; i++){
//         ll a, b, c;
//         cin>>a>>b>>c;
//         addEdge(a,b,c, false, -1);
//     }
//     for(int i = 0; i<q; i++){
//         ll u,v,w;
//         cin>>u>>v>>w;
//         addEdge(u,v,w, true, i);
//     }

    
//     sort(edges.begin(), edges.end());

//     for(int i = 1; i<=n; i++) parent[i] = i;
    
//     for(auto &edge : edges){
//         int u = edge.u;
//         int v = edge.v;
//         int w = edge.weight;
//         if(edge.isQuery){
//             int queryId = edge.index;
//             int uPar = findUpar(u, parent);
//             int vPar = findUpar(v, parent);
//             if(uPar == vPar){
//                 ans[queryId] = "No";
//             }
//             else{
//                 ans[queryId] = "Yes";
//             }
//         }
//         else{
//             unionByRank(u,v, parent, rank);
//         }
//     }
//      for (auto& it : ans){
//             cout << it << endl;
//     }
//     return;

    
// }

// int main(){
//     solve();
//     return 0;
// }



// Sayan Code
#include <bits/stdc++.h>
using namespace std;

vector<int> Rank, parent;

void sizer(int n) {
    Rank.resize(n, 0);
    parent.resize(n);
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
}

int ultimate_parent(int node) {
    if (parent[node] == node) {
        return node;
    }
    return parent[node] = ultimate_parent(parent[node]);
}

void unionSize(int node1, int node2) {
    int ulp1 = ultimate_parent(node1);
    int ulp2 = ultimate_parent(node2);

    if (ulp1 == ulp2) {
        return;
    } else if (Rank[ulp1] > Rank[ulp2]) {
        parent[ulp2] = ulp1;
    } else if(Rank[ulp1] < Rank[ulp2]) {
        parent[ulp1] = ulp2;
    } else {
        parent[ulp2] = ulp1;
        Rank[ulp1]++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, q;
    cin >> n >> m >> q;

    priority_queue<pair<long long, pair<int, pair<int, int>>>, 
                   vector<pair<long long, pair<int, pair<int, int>>>>, 
                   greater<pair<long long, pair<int, pair<int, int>>>>> pq;

    for (int i = 0; i < m + q; i++) {
        int a, b;
        long long c;
        cin >> a >> b >> c;

        if (i < m) {
            pq.push({c, {1, {a - 1, b - 1}}});  
        } else {
            pq.push({c, {0, {a - 1, b - 1}}});
        }
    }

    sizer(n);

    while (!pq.empty()) {
        auto p = pq.top();
        pq.pop();

        long long weight = p.first;
        int querye = p.second.first;
        int node1 = p.second.second.first;
        int node2 = p.second.second.second;

        if (querye == 1) {
            unionSize(node1, node2);
        } else {
            if (ultimate_parent(node1) != ultimate_parent(node2)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
