// 7-2 然后是几点 (15分)
#include <stdio.h>
int main()
{
    int time1;
    int min;
    scanf("%d %d", &time1, &min);
    int m1, h1, m2, h2;
    m1 = time1 % 100;
    h1 = time1 / 100;
    if (min > 0)
    {
        m2 = (m1 + min) % 60;
        h2 = h1 + (m1 + min) / 60;
        printf("%02d%02d", h2, m2);
    }
    else
    {
        h1 = h1 + min / 60 - 1;
        m2 = ((60 + min % 60) + m1) % 60;
        h2 = h1 + (60 + min % 60 + m1) / 60;
        printf("%d%02d", h2, m2);
    }
}