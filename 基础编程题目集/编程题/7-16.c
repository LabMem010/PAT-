// 7-16 求符合给定条件的整数集
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int num, i, j, k, count = 0;
    for (i = a; i <= a + 3; i++) //每列的循环
        for (j = a; j <= a + 3; j++)
            for (k = a; k <= a + 3; k++)
                if ((i != j) && (i != k) && (j != k))
                {
                    num = i * 100 + j * 10 + k;
                    count++;
                    if (count == 6) //每行六个数，第六个
                    {
                        printf("%d\n", num);
                        count = 0;
                    }
                    else //前五个
                        printf("%d ", num);
                }
    return 0;
}