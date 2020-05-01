// 6-11 求自定类型元素序列的中位数
// 希尔排序算法参考链接（超级详细，强烈推荐）：https://blog.csdn.net/MoreWindows/article/details/6668714
// 直接插入排序：
// 将整个排序过程看作n-1趟插入，先将序列中第1个记录看成是一个有序子序列，然后从第2个记录开始，逐个进行插入，直至整个序列有序。   
// 原文链接：https://blog.csdn.net/qq_41521512/java/article/details/82691758
#include <stdio.h>
#define MAXN 10
typedef float ElementType;

ElementType Median(ElementType A[], int N);

int main()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
ElementType Median(ElementType A[], int N)
{
    ElementType temp;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            if (A[j] < A[i])
            {
                A[i] = temp;
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    return A[N / 2]; //返回中间元素
}
