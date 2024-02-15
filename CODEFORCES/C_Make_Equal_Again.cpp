#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n; 

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];  
        }
        int i = 0, j = n-1, ans = INT_MAX;
        if(a[i] == a[j])
        {
            int p1 = 1, p2 = 1;
            int c1 = 0, c2 = n-1;
            for(c1 = 1; c1<n; c1++){
                if(a[c1]!=a[c1-1])
                    break;
                p1++;
            }
            for(c2 = n-2; c1>=0; c1++){
                if(a[c1]!=a[c1+1])
                    break;
                p2++;
            }
            ans = min(p1,p2);

        }
        else{
            int p1 = 1, p2 = 1;
            int c1 = 0, c2 = n-1;
            for(c1 = 1; c1<n; c1++){
                if(a[c1]!=a[c1-1])
                    break;
                p1++;
            }
            for(c2 = n-2; c1>=0; c1++){
                if(a[c1]!=a[c1+1])
                    break;
                p2++;
            }
            ans = min(ans, min(p1,p2));

        }
        cout<<ans<<"\n";
    }

    return 0;
}
