// 7-19 支票面额
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int f, y;
    int t = 1;
    for (y = 0; y < 100; y++)
    {
        for (int f = 0; f < 100; f++)
        {
            if (f * 98 - y * 199 == n)
            {
                t = 0;
                printf("%d.%d", y, f);
            }
        }
    }
    if (t)
    {
        printf("No Solution");
    }
    return 0;
}