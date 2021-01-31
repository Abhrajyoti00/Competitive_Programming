#include<bits/stdc++.h>
using namespace std;
#define llt long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        llt n,x,cp=0,cn=0,cz=0,m=0,p=0,s=0,g=0,f=0,c=0,q=0;
        cin>>n>>x;
        llt a[n];
        for(llt i=0;i<n;i++)
        cin>>a[i];
        for(llt i=0;i<n;i++)
        {
            if(a[i]>0)
            cp++;
            else if(a[i]<0)
            cn++;
            else if(a[i]==0)
            cz++;
        }

     if(cz>1)
        {
            if(cz==2)
            {
                if(cn==0)
                cout<<-1<<endl;
                else
                 {
                     if(cn%2==0)
                        cout<<-1<<endl;
                    else
                    {
                        cout<<"Happy New Year"<<endl;
                    }   
                }
            }
            else
            {
                cout<<-1<<endl;
            }   
        }

         else if(cz==1)
        {
            if(cp==0)
            {
                if(cn%2==0)
                cout<<"Happy New Year"<<endl;
                else
                 {
                    for(llt i=0; i<n;i++)
                    {
                        if(abs(a[i])>x)
                        {
                            cout<<"Happy New Year"<<endl;
                            g=1;
                            break;
                        }
                    }
                    if(g==0)
                    cout<<-1<<endl;
                }
            }
            else if(cn==0)
            {
                for(llt i=0; i<n;i++)
                {
                        if(abs(a[i])>x)
                        {
                            cout<<"Happy New Year"<<endl;
                            m=1;
                            break;
                        }
                }
                if(m==0)
                cout<<-1<<endl;
            }
        
            else if(cp!=0 && cn!=0)
            {
                cout<<"Happy New Year"<<endl;
            }
        }


        else if(cz==0)
        {
            if(cn==0)
            {
                for(llt i=0;i<n;i++)
                {
                    if(a[i]>x)
                    {
                        cout<<"Happy New Year"<<endl;
                        c=1;
                        break;
                    }
                }
                if(c==0)
                cout<<-1<<endl;
            }
            else if(cp==0)
            {
                if(cn%2==0)
                {
                     for(llt i=0; i<n;i++)
                    {
                        if(abs(a[i])>x)
                        {
                            cout<<"Happy New Year"<<endl;
                            p=1;
                            break;
                        }
                    }
                    if(p==0)
                    cout<<-1<<endl;
                }
                else
                 {
                    for(llt i=0; i<n;i++)
                    {
                        if(abs(a[i])<x)
                        {
                            cout<<"Happy New Year"<<endl;
                            s=1;
                            break;
                        }
                    }
                    if(s==0)
                    cout<<-1<<endl;
                }
            }
            else if(cp!=0 && cn!=0)
            {    
            
            if(cn%2==0)
                cout<<"Happy New Year"<<endl;
                else
                 {
                    for(llt i=0; i<n;i++)
                    {
                        if(a[i]>0 && a[i]<x)
                        {
                            cout<<"Happy New Year"<<endl;
                            f=1;
                            break;
                        }
                    }
                    if(f==0)
                    {
                        for(llt i=0; i<n;i++)
                    {
                        if(a[i]<0 && abs(a[i])<x)
                        {
                            cout<<"Happy New Year"<<endl;
                            q=1;
                            break;
                        }
                    }
                    if(q==0)
                    cout<<-1<<endl;
                    }
                 }
            }
        }
    }
}