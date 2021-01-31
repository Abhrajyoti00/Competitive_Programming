// Sort elements by frequency. If two elements have same 
// count, then put the elements that appears first 
#include <bits/stdc++.h> 
using namespace std; 
  #define llt long long int
// Map m2 keeps track of indexes of elements in array 
unordered_map<llt, llt> m2; 
  
// Used for sorting by frequency. And if frequency is same, 
// then by appearance 
bool sortByVal(const pair<llt, llt>& a, const pair<llt, llt>& b) 
{ 
    // If frequency is same then sort by index 
    if (a.second == b.second)  
        return m2[a.first] < m2[b.first]; 
      
    return a.second > b.second; 
} 
  
// function to sort elements by frequency 
void sortByFreq(llt a[], llt n) 
{ 
    unordered_map<llt, llt> m; 
    vector<pair<llt, llt> > v; 
  
    for (llt i = 0; i < n; ++i) { 
  
        // Map m is used to keep track of count  
        // of elements in array 
        m[a[i]]++; 
  
        // Update the value of map m2 only once 
        if (m2[a[i]] == 0)  
            m2[a[i]] = i + 1;         
    } 
  
    // Copy map to vector 
    copy(m.begin(), m.end(), back_inserter(v)); 
  
    // Sort the element of array by frequency 
    sort(v.begin(), v.end(), sortByVal); 
  
    for (llt i = 0; i < v.size(); ++i)  
        for (llt j = 0; j < v[i].second; ++j)  
            cout << v[i].first << " ";  
} 
  
// Driver program 
int main() 
{ 
   llt n;
    cin>>n;
    llt a[n];
    llt chef,chefu,schef=0,schefu=0,j,i; 
    for(llt i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sortByFreq(a, n); 
  
    return 0; 
} 