// Program to find minimum number of coins needed to represent all values from 1 to N.

//Constraints
//(1 <= N <= 1000000000)
//Each coin can have value from to 1 to N.

//EXAMPLE: If input is 5
// Output is 3
//EXPLANATION :-
//He can make coins with value 1, 2, 3.
//So using these coins he can form all values from 1 to 5.

// 1 – one coin of value 1.
// 2 – one coin of value 2.
// 3 – one coin of value 3.
// 4 – one coin of value 3 and one coin of value 1.
// 5 – one coin of value of 3 and one of value 2.
#include <bits/stdc++.h>
using namespace std;
int main()
{
int N, i;
cin>>N; //Taking the value of coin as 5
if (N==1) //Check for 1
{
cout << "1";

//Since only one coin is needed for this

return 0;
}
for (i = 0; i < 30; i++)
//Since 2^30 is the largest no. that works for 1000000000
{
if ( ( (int) pow(2, i) <= N ) && ( (int) pow(2, i + 1) >= N) )
break;
}
cout << (i+1);
return 0;
}
