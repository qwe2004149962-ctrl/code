/* 003 九九乘法表 —— 嵌套循环 */
#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%d ", j, i, j * i);
        }
        printf("\n");
    }
    return 0;
}
