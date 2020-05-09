// 7-21 求特殊方程的正整数解
#include <stdio.h>
int main()
{
    int n;
    int flag = 1;
    scanf("%d", &n);
    for (int i = 1; i < 100; i++)
    {
        for (int j = 1; j < 100; j++)
        {
            if (i * i + j * j == n && i < j)
            {
                flag = 0;
                printf("%d% d", i, j);
                printf("\n");
            }
        }
    }
    if (flag)
    {
        printf("No Solution");
    }
    return 0;
}