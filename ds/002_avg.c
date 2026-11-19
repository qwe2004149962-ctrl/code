/* 002 求平均分 —— 读入三个整数，输出平均值（保留一位小数） */
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double d = (a + b + c) / 3.0;
    printf("%.1f\n", d);
    return 0;
}
