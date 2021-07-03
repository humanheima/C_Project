#include <stdio.h>

const int MAX = 3;

int main()
{
    int var[] = {10, 100, 200};
    int i;
    int *ptr[MAX]; //声明一个整数指针数组

    for (i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i]; /* 赋值为整数的地址 */
    }

    for (i = 0; i < MAX; i++)
    {
        printf("Value of var[%d] = %d\n", i, var[i]);
        //使用指针输出
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
    }

    return 0;
}
