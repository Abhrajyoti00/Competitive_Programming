#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,r,x,a,b;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        cin>>r;
        v.push_back(r);
    }
    cin>>x;
    v.erase(v.begin()+(x-1));
    cin>>a>>b;
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
