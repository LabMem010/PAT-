// 7-7 12-24小时制
#include <stdio.h>
int main()
{
    int hour, min;
    char a;
    scanf("%d%c%d", &hour, &a, &min);
    if (hour > 12)
    {
        hour = hour - 12;
        printf("%d%c%d PM", hour, a, min);
    }
    else if (hour == 12)
    {
        printf("%d%c%d PM", hour, a, min);
    }

    else
    {
        printf("%d%c%d AM", hour, a, min);
    }

    return 0;
}