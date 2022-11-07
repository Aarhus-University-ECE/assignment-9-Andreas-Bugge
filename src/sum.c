#include "sum.h"

int sum(int a[], int n)
{
    /*only works in case of b being higher than 0*/
    if (n>0)
        return a[n-1] + sum(a, n-1);
    else
        return 0;   
}