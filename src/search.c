#include "search.h"
#include <stdbool.h>

bool search(int a[], int n, int x)
{
    int loc;
    if (n > 0 && a[n-1]==x)
    return 1;
    else if (n > 0 && a[n-1!=x])
    return (loc = search(a, n-1, x));
    else 
    return 0;
}