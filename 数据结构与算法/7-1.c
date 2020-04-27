#include <stdio.h>
int MaxSum(int a[], int n);
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d", MaxSum(a, n));
}

int MaxSum(int a[], int n)
{
    int i;
    int ThisSum = 0;
    int MaxSum = 0;
    for (i = 0; i < n; i++)
    {
        ThisSum += a[i];
        if (ThisSum > MaxSum)
        {
            MaxSum = ThisSum;
        }
        else if (ThisSum <= 0)
        {
            ThisSum = 0;
        }
    }
    return MaxSum;
}