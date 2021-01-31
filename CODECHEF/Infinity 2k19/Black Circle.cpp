#include<bits/stdc++.h>
using namespace std;
int save(int n, int k)
{
  if (n == 1)
    return 1;
  else
    /* The position returned by josephus(n - 1, k) is adjusted because the
       recursive call josephus(n - 1, k) considers the original position
       k%n + 1 as position 1 */
    return (save(n - 1, k) + k-1) % n + 1;
}


// Driver Program to test above function
int main()
{
  int n = 8;
  int i,q;
  cin>>q;
  for(i=0;i<q;i++)
  printf("The chosen place is %d\n", save(n, i));
  return 0;
}


/*int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,Q,i,s=0;
        cin>>N>>Q;
        int q[Q];
        while(Q--)
            cin>>q[Q];
        for(i=1;i<=Q;i++)
        {
            s=save(N,q[i]);
            cout<<s<<endl;
        }
    }
    return 0;
}
*/
