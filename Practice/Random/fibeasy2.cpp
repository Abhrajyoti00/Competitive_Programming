#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    long long int in=0,len=0,n[t];
    int a[]={0,1,1,2,3,5,8,3,1,4,5,9,4,3,7,0,7,7,4,1,5,6,1,7,8,5,3,8,1,9,0,9,9,8,7,5,2,7,9,6,5,1,6,7,3,0,3,3,6,9,5,4,9,3,2,5,7,2,9,1};

    int b[t];
    for(i=0;i<t;i++)
    {
        cin>>n[i];
        len=n[i];
        in=len;
        int c=0;
        while(len>1)
        {
            if(len%2!=0)
                in=in-pow(2,c);
            c++;
            len/=2;
        }
        in=(in%60)-1;
        b[i]=a[(int)(in)];
    }
    for(i=0;i<t;i++)
        cout<<b[i]<<"\n";
    return 0;
}
