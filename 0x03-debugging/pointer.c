#include <stdio.h>

int main(void)
{
    int a[5], i;
    printf("enter the array elements");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", & a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("array of element of index %d is: %d\n",i, a[i]);  
    }

}