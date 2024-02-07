#include<bits/stdc++.h>
using namespace std;

bool possible(int a, int b, int c){
    if(a+b>c)
        return true;
    else
        return false;
}

int nCr(int n, int r) {
    // If r is greater than n, return 0
    if (r > n) return 0;
    // If r is 0 or equal to n, return 1
    if (r == 0 || n == r) return 1;
    // Initialize the logarithmic sum to 0
    double res = 0;
    // Calculate the logarithmic sum of the numerator and denominator using loop
    for (int i = 0; i < r; i++) {
        // Add the logarithm of (n-i) and subtract the logarithm of (i+1)
        res += log(n-i) - log(i+1);
    }
    // Convert logarithmic sum back to a normal number
    return (int)round(exp(res));
}
 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<3){
            cout<<0<<endl;
            continue;
        }
        vector<int>v;
        for(int i = 0 ; i<n; i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        sort(v.begin(), v.end());
        

        


        cout<< nCr(n, count)<<endl;
    }
}