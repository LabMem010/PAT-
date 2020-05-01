// 7-11 分段计算居民水费
#include <stdio.h>
int main()
{
    float x;
    float y;
    scanf("%f", &x);
    if (x > 15)
    {
        y = 2.5 * x - 17.5;
    }
    else
    {
        y = 4 * x / 3;
    }
    printf("%.2f", y);
}