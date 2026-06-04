#include "mod.h"
#include "sub.h"

int mod(int a, int b)
{
    if (b == 0) return 0;
    while (a >= b)
    {
        a = sub(a, b);
    }
    return a;
}
