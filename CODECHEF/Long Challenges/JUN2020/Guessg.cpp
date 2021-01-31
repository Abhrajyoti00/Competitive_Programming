#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n,l=0,f=0,mid=0,c=1,fal=0,tru=0;
    string ch="";
    cin>>n;
    f=0; l=n;
     if (c==1){
            cout<<n<<endl;
            cin>>ch;
            
            if(ch=="G")
            {
               c=2;
            }
            else if(ch== "L")
            {
                c=3;   
            }
        }
           while (f < l)
            { 
    
                mid = (f+l)/2; 
                cout<<mid<<endl;
                cin>>ch;
                if(c%2==0){
                    if (ch == "E") 
                        break;
                    if (ch == "L") 
                        l = mid; 
                    else if(ch=="G")
                        f = mid; 
                }
                c++;
            }
         return 0;
    }