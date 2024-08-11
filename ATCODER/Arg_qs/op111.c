#include <stdio.h>
void main(void)
{
    int **ptr1 = 0x2;
    int *ptr2 = 0x2;
    (*ptr2)++;
    (**ptr1)++;

    // Step 1
    printf("s1 \n");
    printf("%d, %d", **ptr1, *ptr2);

    if ((unsigned int) ptr1 == (unsigned int) ptr2)
    {
        (**ptr1)--;
    }
    else
    {
        (*ptr2)--;
    }

    // Step 2
    printf("s2 \n");

    printf("%d, %d", **ptr1, *ptr2);
}
