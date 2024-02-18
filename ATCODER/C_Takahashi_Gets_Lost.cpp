#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int h, w, n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<string> S;
    for(int i = 0; i < h; i++){
        string strng;
        cin >> strng;
        S.push_back(strng);
    }
    int count = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(S[i][j] == '.')
            {
                int r = i, c = j;
                int f = 0;
                for(int k = 0; k < n; k++){
                    if(t[k] == 'L'){
                        c--;
                        char a = S[r][c];
                        if(a == '#'){
                            f = 1;
                            break;
                        }
                    }
                    else if(t[k] == 'U'){
                        r--;
                        char b = S[r][c];
                        if(b == '#'){
                            f = 1;
                            break;
                        }
                    }
                    else if(t[k] == 'R'){
                        c++;
                        char d = S[r][c];
                        if(d == '#'){
                            f = 1;
                            break;
                        }
                    }
                    else if(t[k] == 'D'){
                        r++;
                        char e = S[r][c];
                        if(e == '#'){
                            f = 1;
                            break;
                        }
                    }
                }
                if(f == 0)
                    count++;
            }
        }
    }
    cout << count;
    return 0;
}
