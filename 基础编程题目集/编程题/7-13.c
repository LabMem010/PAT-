// 7-13 日K蜡烛图
#include <stdio.h>
int main()
{
    double Open, High, Low, Close;
    scanf("%lf %lf %lf %lf", &Open, &High, &Low, &Close);
    if (Close > Open)
    {
        printf("R-Hollow");
    }
    else if (Close < Open)
    {
        printf("BW-Solid");
    }
    else
    {
        printf("R-Cross");
    }
    if ((Low < Open && Low < Close) && (High > Open && High > Close))
    {
        printf(" with Lower Shadow and Upper Shadow");
    }
    else if (Low < Open && Low < Close)
    {
        printf(" with Lower Shadow");
    }
    else if (High > Open && High > Close)
    {
        printf(" with Upper Shadow");
    }
}