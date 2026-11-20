/* 004 数组求最大值与平均值 */
#include <stdio.h>

int main()
{
    int a[5], i;

    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    int max = a[0];
    for (i = 1; i < 5; i++)
        if (a[i] > max) max = a[i];

    int sum = 0;
    for (i = 0; i < 5; i++)
        sum += a[i];

    double avg = sum / 5.0;

    printf("max=%d avg=%.1f\n", max, avg);
    return 0;
}
