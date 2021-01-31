#include<bits/stdc++.h>
#define ll long long
using namespace std;
  ll countSubArraysProudctLessThanK(ll arr[]){
        ll start = 0;
        ll end = 1;
        ll product = arr[0];
        ll count = 0;
        while (start <= end && end <= sizeof(arr)) {
            if (product % 4 !=2) {
                count += end - start;
                if (end < sizeof(arr)) product *= arr[end];
                end++;
            } else {
                product /= arr[start++];
            }
        }
        return count;
    }

     int main() {
        ll nums[] = {90, 21, 33, 55, 32, 21};
        cout<<countSubArraysProudctLessThanK(nums)<<endl;
    }
