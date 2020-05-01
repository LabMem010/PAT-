// 7-10 计算工资
#include <stdio.h>
int main()
{
    int n, m;
    float salary = 0;
    scanf("%d%d", &n, &m);
    if (n >= 5)
    {
        if (m > 40)
        {
            salary = 40 * 50 + 50 * 1.5 * (m - 40);
        }
        else
        {
            salary = 50 * m;
        }
    }
    else
    {
        if (m > 40)
        {
            salary = 40 * 30 + 30 * 1.5 * (m - 40);
        }
        else
        {
            salary = 30 * m;
        }
    }
    printf("%.2f", salary);
}