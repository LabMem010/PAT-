// 7-6 混合类型数据格式化输入
#include <stdio.h>
int main()
{
    float f1, f2;
    int n;
    char a;
    scanf("%f %d %c %f", &f1, &n, &a, &f2);
    printf("%c %d %.2f %.2f", a, n, f1, f2);
    return 0;
}