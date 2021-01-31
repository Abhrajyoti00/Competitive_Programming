#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,q,i,j,d;
     scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&m,&q);
        int a[n][m],c=0,x,y;
        fill(*a,*a+n*m,0);

        while(q--)
        {

                scanf("%d %d",&x,&y);
                x-=1; y-=1;

                  d= (m>n)? m:n ;
                 for(i=0;i<d;i++)
                {
                    if(i<m)
                    {
                       a[x][i]+=1;
                       if(a[x][i]%2!=0)
                        c++;
                       else
                        c--;
                    }

                    if(i<n)
                    {
                             a[i][y]+=1;
                            if(a[i][y]%2!=0)
                                c++;
                            else
                                c--;
                    }


                }


        }
         printf("%d ",c);
    }
    return 0;
}
