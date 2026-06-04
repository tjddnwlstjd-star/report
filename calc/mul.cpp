#include "mul.h"

int mul(int x, int y)
{
    int result = 0;

    // y번만큼 x를 더함
    for (int i = 0; i < y; i++)
    {
        result += x;
    }

    return result;
}