// 7-4 BCD解密
#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d", n);
    int a, b;
    a = n % 16;
    b = n / 16;
    m = a + b * 10;
    printf("%d", m);
    return 0;
}