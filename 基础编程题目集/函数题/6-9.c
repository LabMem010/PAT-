// 6-9 统计个位数字
#include <stdio.h>

int Count_Digit(const int N, const int D);

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* 你的代码将被嵌在这里 */
int Count_Digit(const int N, const int D)
{
    int n = N;
    if (n < 0)
    {
        n = -n;
    }
    int m;
    int i = 0;
    do
    {
        m = n % 10;
        n = n / 10;
        if (m == D)
        {
            i++;
        }
    } while (n > 0);
    return i;
}