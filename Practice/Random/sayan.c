#include<stdio.h>
void main ()
{
    int x,y,z;
    printf ("enter ages of sayan,ranit and aharshi");
    scanf ("%d,%d,%d",&x,&y,&z);
    if (x>y && x>z)
    {
        printf ("youngest sayan");
    }
    else if (y>x && y>z)
    {
        printf ("youngest raint");
    }
    else
    {
        printf ("youngest aharshi");
    }
    }
