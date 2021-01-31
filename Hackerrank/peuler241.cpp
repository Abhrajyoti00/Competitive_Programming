/* #include<bits/stdc++.h>
using namespace std;
#define MAX 10001
int main() {
    int N,n,i;
    double sum=0.0,p,d,s=0.0;
	char string[MAX];
	scanf("%s",&string);
	while(string[i]){
			N = (int)string[i]-48;
			i++;}
    cin>>N;
    for(n=2;n<=(N/2);n++)
    {
        for(i=1;i<=(n/2);i++)
        {
            if(n%i==0)
            s+=i;
        }
        s+=n;
        p= double(s/n);
        d=(p-0.5);
        if(floor(d)==ceil(d))
        sum+=n;
        s=0;
    }
    cout<<sum;
    return 0;
}


			printf("%d\t",a[i]);
			i++;
	}

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    char t;
    int lena,lenb;
    cin>>a>>b;
    lena=a.size();
    lenb=b.size();
    cout<<lena<<" "<<lenb<<endl;
    cout<<(a+b)<<endl;
    t=a[0];
    a[0]=b[0];
    b[0]=t;
    cout<<a<<" "<<b<<" ";
    return 0;
}

