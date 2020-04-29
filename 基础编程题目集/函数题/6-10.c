// 6-10 阶乘计算升级版
#include <stdio.h>

void Print_Factorial(const int N);

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里 */
void Print_Factorial(const int N)
{
    if (N < 0)
    {
        puts("Invalid input");
        return;
    }

    int num[3001] = {0}; // 确保可以存储 N! 位数
    int k, n;
    k = 1;      // 位数
    n = 0;      // 进位
    num[0] = 1; // init result 1
    int tmp;    // 阶乘的任一元素与临时结果的某位的乘积结果

    // 最基本的乘法运算思想，将临时结果的每位与阶乘元素相乘
    for (int i = 2; i <= N; i++) // 开始阶乘，阶乘元素从 2 开始
    {
        for (int j = 0; j < k; j++)
        {
            tmp = num[j] * i + n; // 相应阶乘中的一项与当前所得临时结果的某位相乘(加上进位)
            num[j] = tmp % 10;    // 更新临时结果的该位上的信息
            n = tmp / 10;         // 看是否有进位
        }

        while (n) // 如果有进位
        {
            num[k++] = n % 10; // 新加一位，添加信息。位数+1
            n /= 10;           // 看还能不能进位
        }
    }

    for (int i = k - 1; i >= 0; i--)
    {
        printf("%d", num[i]);
    }
    puts("");
}