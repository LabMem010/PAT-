// 7-12 两个数的简单计算器
#include <stdio.h>
int main()
{
    int x, y;
    char a;
    int z;
    scanf("%d %c %d", &x, &a, &y);
    if (a == "+")
    {
        z = x + y;
    }
    else if (a == "-")
    {
        z = x - y;
    }
    else if (a = "*")
    {
        z = x * y;
    }
    else if (a = "/")
    {
        z = x / y;
    }
    else if (a = "%")
    {
        z = x % y;
    }
    else
    {
        printf("ERROR");
    }
}