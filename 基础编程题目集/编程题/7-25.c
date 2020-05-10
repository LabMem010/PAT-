// 念数字
#include <stdio.h>
int count(int x);
int main()
{
    int n, num;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("fu ");
        n = -n;
    }
    num = count(n);
    while (num > 0)
    {
        int m;
        m = n / num;
        n = n % num;
        switch (m)
        {
        case 0:
            printf("ling");
            break;
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
        }
        if (num >= 10)
        {
            printf(" ");
        }
        num = num / 10;
    }
    return 0;
}
int count(int x)
{
    int count = 1;
    while (x >= 10)
    {
        x = x / 10;
        count = count * 10;
    }
    return count;
}
// https://blog.csdn.net/jiangxiaoshan123/article/details/81354509