// 7-14 求整数段和
#include <stdio.h>
int main()
{
    int a, b;
    int i, sum = 0;
    int counter = 0;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        sum = sum + i;
        counter++;
        printf("%5d", i);
        if (counter % 5 == 0 && i != b)
        {
            printf("\n");
        }
    }
    printf("\n");
    printf("Sum = %d", sum);
    return 0;
}