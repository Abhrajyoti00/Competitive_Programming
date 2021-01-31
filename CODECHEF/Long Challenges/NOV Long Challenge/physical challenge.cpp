#include<bits/stdc++.h>
using namespace std;
double distance(int a, int b,int c,int d)
    {
        double d1=(c-a)*(c-a)+(d-b)*(d-b); 
        double e=sqrt(d1);
        return e;
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int n,m,k,i;
        cin>>n>>m>>k;
        int count = 0;
        double arr[m*n*k];
        double arr1[m*n*k];
        double arr2[m*n*k];
        double arr3[m*n*k];
        int a[n],b[n],c[m],d[m],e[k],f[k];
        for(i=0;i<n;i++)
            cin>>a[i]>>b[i];
        for(i=0;i<m;i++)
            cin>>c[i]>>d[i];
        for(i=0;i<k;i++)
            cin>>e[i]>>f[i];

        for(int i=0;i<n;i++)
           {
                for(int j=0;j<m;j++)
                {
                    for(int w=0;w<k;w++)
                    {
                        int a1=a[i],b1=b[i],c1=c[j],d1=d[j],e1=e[w],f1=f[w];
                        arr[count]=distance(x,y,a1,b1)+distance(a1,b1,c1,d1);
                        arr1[count]=distance(x,y,c1,d1)+distance(c1,d1,a1,b1);
                        arr2[count]=distance(c1,d1,e1,f1);
                        arr3[count]=distance(a1,b1,e1,f1);
                        count=count+1;
               
                    }
                }
            }
            double s=arr[0];
            double s1=arr1[0];
            double s2=arr2[0];
            double s3=arr3[0];
           for(int i=0;i<count;i++)
           {
             if(s>arr[i])
               {
                   s=arr[i];
               }
               if(s1>arr1[i])
               {
                   s1=arr1[i];
               }
               if(s2>arr2[i])
               {
                   s2=arr2[i];
               }
               if(s3>arr3[i])
               {
                   s3=arr3[i];
               }
           
            }
            
           if(s<s1)
           {
               cout<<setprecision(12)<<s<<endl;
           }
           else
           {
               cout<<setprecision(12)<<s2<<endl;
           }
           count=0;
	}
    return 0;
}
