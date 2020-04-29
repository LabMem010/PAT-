// 7-3 逆序的三位数
#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    int bai = n / 100;
    int shi = (n - bai * 100) / 10;
    int ge = n % 10;
    if (ge)
    {
        printf("%d", ge);
        if (shi)
        {
            printf("%d", shi);
        }
        else
        {
            printf("%d", bai);
        }
    }
    else
    {
        if (shi)
        {
            printf("%d", shi);
        }
        else
        {
            printf("%d", bai);
        }
    }
    return 0;
}