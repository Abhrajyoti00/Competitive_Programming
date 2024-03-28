//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        int n = mat.size();
        vector<int>ans;
        int r = 0, c = 0;
        
        while((r<n) && (c<n)){
            ans.push_back(mat[r][c]);
            if((r+c)%2==0){
                if((r == 0) && (c!=(n-1))){
                    c++;
                }
                else if((r!=(n-1)) && (c==(n-1))){
                    r++;
                }
                else{
                    r--;
                    c++;
                }
            }
            else{
                if((c == 0) && (r!=n-1)){
                    r++;
                }
                else if((c!=(n-1)) && (r==(n-1))){
                    c++;
                }
                else{
                    r++;
                    c--;
                }
            }
            // cout<<"\n r = "<<r<<" c = "<<c<<"\n";
        }

    
        return ans;
    }
};

    
//     3
// 1 2 3 4 5 6 7 8 9



//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends