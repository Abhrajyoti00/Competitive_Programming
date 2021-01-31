#include<bits/stdc++.h>
using namespace std;

int bd(string n)
{
    string num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

int num_to_bits[16] = {0, 1, 1, 2, 1, 2, 2, 3,
                    1, 2, 2, 3, 2, 3, 3, 4};

/* Recursively get nibble of a given number
and map them in the array */
unsigned int countSetBitsRec(unsigned int num)
{
    int nibble = 0;
    if (0 == num)
        return num_to_bits[0];

    // Find last nibble
    nibble = num & 0xf;

    // Use pre-stored values to find count
    // in last nibble plus recursively add
    // remaining nibbles.
    return num_to_bits[nibble] +
            countSetBitsRec(num >> 4);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,d=0;
        cin>>n;
        string v[n];
        int p[n];
        for(i=0;i<n;i++)
            {
                cin>>v[i];

            }

        for(i=0;i<n;i++)
        {
            p[i]= bd(v[i]);
        }
        for(i=1;i<n;i++)
            {
                p[0]=p[0]^p[i];
            }
        d=countSetBitsRec(p[0]);
        cout<<d<<endl;
    }
    return 0;
}
