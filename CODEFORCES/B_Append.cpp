#include<bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin>>q;
  vector<int>v;
  while(q--){
    int type, k;
    cin>>type>>k;
    if(type == 1){
        v.push_back(k);
    }
    else{
        int s = v.size()-1;
        cout<<v[s-k+1]<<endl;
    }
  }
  return 0;
}