#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ones = 0, m_zeros = 0, zeros = 0, tot_z = 0;
    for (int i = 0; i < n-1; i++){
        if(s[i] == '1')
            ones++;
        if(s[i] == '0'){
            zeros++;
            tot_z++;
        }
        m_zeros = max(m_zeros, zeros);
        if(s[i+1]!='0'){
            zeros = 0;
        }
        
    }
    if(s[n-1] == '1')
        ones++;
    if(s[n-1] == '0') 
    {
        zeros++;
        tot_z++;
    }
    m_zeros = max(m_zeros, zeros);
    // cout<<"ones = "<<ones<<" tot zeros = "<<tot_z<<" max_len zero = "<<m_zeros<<endl;
    cout<<n - (tot_z - m_zeros)<<endl;   

}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
