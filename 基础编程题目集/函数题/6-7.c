// 6-7 统计某类完全平方数
#include <stdio.h>
#include <math.h>

int IsTheNumber(const int N);

int main()
{
    int n1, n2, i, cnt;

    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for (i = n1; i <= n2; i++)
    {
        if (IsTheNumber(i))
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

/* 你的代码将被嵌在这里 */
int IsTheNumber(const int N)
{
    int temp2 = N;
    int m, sign, i;
    sign = 0;

    for (m = 10; m < temp2; m++)
    {
        if (temp2 == m * m)
        {
            break; //判断是否是一个数的平方 ,是的话进行下边判断是否有两个相同数字
        }
    }

    int count = 0;

    while (temp2 > 0)
    {
        count++;
        temp2 /= 10;
    }
    //在定义一个n的位数的数组，将n的每位放入数组

    int arr[10];             //这里应该定义arr的长度为10，因为传入的整数的每位数可能是0~~9，而不是传入数的位数。
    for (i = 0; i < 10; i++) //初始化数组
        //count[number]={0};也可以初始化数组
        arr[i] = 0;

    int temp = N;  //再将N的值给一个临时变量temp
    int temp3 = 0; //在来一个临时变量记录temp的每个数字。
    while (temp > 0)
    {

        temp3 = temp % 10;
        arr[temp3]++;
        temp /= 10;
    }

    // 测试
    //printf("%d",arr[4]);
    for (i = 0; i < 10; i++)
    {
        if (arr[i] >= 2)
        {
            return 1;
        }
    }

    return 0;
}