// 7-1 厘米换算英尺英寸
//(foot+inch/12)*0.3048=米
#include <stdio.h>
#define s 0.3048
int main()
{
    int N, foot, inch;
    scanf("%d", &N);
    foot = N / s / 100;
    inch = (N / s / 100 - foot) * 12;
    printf("%d %d", foot, inch);
    return 0;
}