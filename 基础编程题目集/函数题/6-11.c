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
    for (int gap = N / 2; gap > 0; gap = gap / 2) //gap是每次排序分组的间隔，每次间隔缩小两倍（其他缩小办法也可以）
    {
        for (int i = gap; i < N; i++) //相当于在同一组内采用直接插入排序
        {
            for (int j = i - gap; j >= 0 && A[j] > A[j + gap]; j = j - gap) //如果同一组内前一个元素大于相 gap个位置的元素，则两者交换位置
            {
                temp = A[j];
                A[j] = A[j + gap];
                A[j + gap] = temp;
            }
        }
    }
    return A[N / 2]; //返回中间元素
}