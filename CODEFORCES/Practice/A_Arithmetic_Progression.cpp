#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,d;
  cin>>a>>b>>d;
  int i = a;
  while(i<=b){
    cout<<i<<" ";
    i+=d;
  }
  return 0;
}