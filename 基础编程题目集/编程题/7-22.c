// 7-22 龟兔赛跑
// 乌龟赢输出@_@，兔子赢输出^_^，平局则输出-_-
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int m1 = 0, m2 = 0; //m1龟,m2兔
    int rest = 0;
    for (int i = 0; i < t; i++)
    {
        m1 = m1 + 3;
        if (m2 > m1 && i % 10 == 0 && rest == 0)
        {
            rest = rest + 30;
        }
        if (rest == 0)
        {
            m2 = m2 + 9;
        }
        else
        {
            rest--;
        }
    }
    if (m1 > m2)
    {
        printf("@_@ %d", m1);
    }
    else if (m1 == m2)
    {
        printf("-_- %d", m1);
    }
    else
    {
        printf("^_^ %d", m2);
    }
    return 0;
}