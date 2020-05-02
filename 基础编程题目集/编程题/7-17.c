// 7-17 爬动的蠕虫
#include <stdio.h>
int main()
{
    int N, U, D;
    scanf("%d %d %d", &N, &U, &D);
    int M = 0;
    int min = 0;
    while (1)
    {
        M = M + U;
        min++;
        if (M >= N)
        {
            break;
        }
        else
        {
            M = M - D;
            min++;
        }
    }
    printf("%d", min);
    return 0;
}