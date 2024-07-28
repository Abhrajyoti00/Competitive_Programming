#include<bits/stdc++.h>
using namespace std;
#define ll long long

void  solveCase(){
    int size, budget;
    cin >> size >> budget;
    vector<ll> items(size, 0);
    ll totalCost = 0;
    for(int i = 0; i < size; i++){
        cin >> items[i];
        totalCost += items[i];
    }
    if(budget >= totalCost){
        cout << size << endl;
        return;
    }
    int left = 0, right = size - 1, count = 0;
    for(int i = 0; i < size; i++) {
        if(budget && (left < right)) {
            if(budget >= (2 * min(items[left], items[right]))) {
                budget -= (2 * min(items[left], items[right]));
                count++;
                if(items[left] < items[right]){
                    items[right] -= items[left];
                    left++;
                }
                else if(items[left] > items[right]){
                    items[left] -= items[right];
                    right--;
                }
                else{
                    count++;
                    left++;
                    right--;
                }
            }
            else if(((budget + 1) == 2 * min(items[left], items[right])) && (items[left] <= items[right])){
                count++;
                cout << count << endl;
                return;
            }
            else{
                cout << count << endl;
                return;
            }
        }
    }
    cout << count << endl;
    return;
}

int main(){
    int testCases;
    cin >> testCases;
    for(int i = 0; i < testCases; i++){
        solveCase();
    }
    return 0;
}
