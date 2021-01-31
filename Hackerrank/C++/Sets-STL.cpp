#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,x;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>q>>x;
        if(q==1)
            s.insert(x);
        else if(q==2)
            s.erase(x);
        else if(q==3)
        {
            if(s.find(x)!=s.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }

    }
    return 0;
}



