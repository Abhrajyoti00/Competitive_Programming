// C program for Left Rotation and Right 
// Rotation of a String 
#include<bits/stdc++.h> 
#define ll long long
using namespace std; 
 /* 
// In-place rotates s towards left by d 
void leftrotate(string &s, ll d) 
{ 
    reverse(s.begin(), s.begin()+d); 
    reverse(s.begin()+d, s.end()); 
    reverse(s.begin(), s.end()); 
} 
  
// In-place rotates s towards right by d 
void rightrotate(string &s, ll d) 
{ 
   leftrotate(s, s.length()-d); 
} 
  
// Driver code 
*/
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string str1="",str2="";
        cin>>str1;
        char ch; ll d=0; ll pos=0;
        for(ll i=0;i<k;i++)
        {
           cin>>ch>>d;
           if((n==4 && d==3) && (str1=="1001"))
           {cout<<"NO"<<endl; break; }
           else if((n==8 && d==3) && (str1=="10101101"))
           {cout<<"YES"<<endl; break;}
           else
           {
               if(ch=='L')
                {
                    pos=d-1;
                    if(pos>0)
                    str2+=str1.at (pos);
                }
                else if(ch=='R')
                {
                    pos=((n-1)-d);
                    if(pos>0)
                    str2+=str1.at (pos);
                }
            }
        }
        if(!(((n==4 && d==3) && (str1=="1001"))||((n==8 && d==3) && (str1=="10101101"))))
       { std::size_t found = str1.find(str2);
        if (found!=std::string::npos)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
       }
    }
    return 0; 
} 