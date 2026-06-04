#include "dive.h"

int dive(int x, int y)
{
    int count = 0; // 빼기 횟수(나눗셈의 몫)를 저장할 변수

    // x가 y보다 크거나 같을 때까지만 반복해서 뺍니다.
    while (x >= y)
    {
        x = x - y; // x에서 y를 빼고
        count++;   // 뺀 횟수를 1 증가시킵니다.
    }

    return count; // 총 몇 번 뺐는지(몫)를 반환합니다.
}