#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 5;
    switch (a)
    {
    default: a = 3;
    case 5 : a = a+1;
    case 6 : a--;
    case 1: a = a-1;
    }
    cout<<a;
}