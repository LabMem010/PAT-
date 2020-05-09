// 7-20 打印九九口诀表
#include <stdio.h>
int main()
{
    int N, num;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            num = j * i;
            printf("%d*%d=%4d", j, i, num);
            printf("\n");
        }
    }

    return 0;
}