// Maximum Subsequence Sum
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], i, j = 0, k = -1, l, sum = 0, Max = 0, flag = 0;

    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (sum > Max)
        {
            Max = sum;
            k = i; //用K标记最大连续子列和的最后一个元素
        }
        if (sum < 0)
        { //当小于0的时候更新
            sum = 0;
        }
        if (a[i] >= 0)
        { //看是不是都是负数
            flag = 1;
        }
    }
    sum = 0;
    for (i = k; i >= 0; i--)
    {
        sum = sum + a[i];
        if (sum == Max)
        {          //通过从K往前开始循环，找第一个元素
            j = i; //这里要注意前面有可能先有一段0 也要算进去
        }
    }

    if (Max)
    {
        cout << Max << " " << a[j] << " " << a[k] << endl; //存在最大子列和的情况
    }
    else if (flag)
        cout << 0 << " " << 0 << " " << 0 << endl; //最大子列和为0的情况
    else
        cout << 0 << " " << a[0] << " " << a[n - 1] << endl; //全为负数，输出第一个和最后一个
    return 0;
}