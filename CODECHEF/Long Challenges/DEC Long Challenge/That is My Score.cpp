#include<bits/stdc++.h>
using namespace std; 
  
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p[n],s[n],a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,l1=0,l2=0,l3=0,l4=0,l5=0,l6=0,l7=0,l8=0;
        for(int i=0;i<n;i++)
        {
            cin>>p[i]>>s[i];
            if(p[i]==1)
            {
                if(a==0)
                {
                    l1=s[i];
                    a=1;
                }
                else if(l1<s[i])
                l1=s[i];
            }
            if(p[i]==2)
            {
                if(b==0)
                {
                    l2=s[i];
                    b=1;
                }
                else if(l2<s[i])
                l2=s[i];
            }
            if(p[i]==3)
            {
                if(c==0)
                {
                    l3=s[i];
                    c=1;
                }
                else if(l3<s[i])
                l3=s[i];
            }
            if(p[i]==4)
            {
                if(d==0)
                {
                    l4=s[i];
                    d=1;
                }
                else if(l4<s[i])
                l4=s[i];
            }
            if(p[i]==5)
            {
                if(e==0)
                {
                    l5=s[i];
                    e=1;
                }
                else if(l5<s[i])
                l5=s[i];
            }
            if(p[i]==6)
            {
                if(f==0)
                {
                    l6=s[i];
                    f=1;
                }
                else if(l6<s[i])
                l6=s[i];
            }
            if(p[i]==7)
            {
                if(g==0)
                {
                    l7=s[i];
                    g=1;
                }
                else if(l7<s[i])
                l7=s[i];
            }
            if(p[i]==8)
            {
                if(h==0)
                {
                    l8=s[i];
                    h=1;
                }
                else if(l8<s[i])
                l8=s[i];
            }
        }
        
        cout<<(l1+l2+l3+l4+l5+l6+l7+l8)<<endl;
    }
    return 0;
}