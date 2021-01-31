#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define REP(i,a,b) for (int i = a; i <= b; i++)  // Use as REP(i,1,n){}
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x) 
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define SQ(a) (a)*(a)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define sortdes(x) sort(all(x),greater<int>())
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
int mpow(int base, int exp); 
void ipgraph(int m);
void dfs(int u, int par);
const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];

int main() {
    ll sum,limit;
    cin>>sum>>limit;
    ll arr[limit+1];
    ll arr2[limit+1];
    
    
    for(ll i=1;i<=limit;i++){
        
        arr2[i-1]=i;
      
        arr[i-1]=(ll)pow(2,(__builtin_ffsll(i)-1));
    }
    ll curr_sum = arr[0], start = 0; ll f=0,ps,pend;
    for (ll i = 1; i <= limit; i++) 
    {  
        while (curr_sum > sum && start < i - 1) 
        { 
            curr_sum = curr_sum - arr[start]; 
            start++; 
        } 
  
        if (curr_sum == sum) 
        {  
            f=1;
            ps=start;
            pend=i-1;
            //cout<<ps<<" "<<pend<<endl;
            cout << pend-ps+1<<endl;
            break;
        } 
  
        // Add this element to curr_sum 
        if (i < limit) 
        curr_sum = curr_sum + arr[i];   
        //cout<<arr2[i]<<" "<<arr[i]<<endl;
    } 
           if(f==1){
            
            for(ll i=ps;i<=pend;i++)
                cout<<arr2[i]<<" ";
            return 0;
            }
            else
            {
                cout<<-1<<endl;
            }  
    
    return 0;
}

