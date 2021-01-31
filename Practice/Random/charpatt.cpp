#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<=6;i++)
    {
        for(j=0;j<=6;j++)
        {
           if(i+j>=7)
                cout<<"  ";
                else
            cout<<char(65+j)<<" ";
        }
        for(j=5;j>=0;j--)
        {
            if(i+j>=7)
                cout<<"  ";
            else
            cout<<char(65+j)<<" ";
        }
        cout<<endl;
    }

}
