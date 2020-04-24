// 6-1 简单输出整数
#include <stdio.h>

void PrintN(int N);

int main()
{
    int N;

    scanf("%d", &N);
    PrintN(N);

    return 0;
}

/* 你的代码将被嵌在这里 */
void PrintN(int N)
{
    if (N > 0)
    {
        int i;
        for (i = 1; i <= N; i++)
        {
            printf("%d\n", i);
        }
    }
}