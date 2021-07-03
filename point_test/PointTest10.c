#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 要生成和返回随机数的函数 */
int *getRandom()
{
    static int arr[10];
    int i;

    /* 设置种子 */
    srand((unsigned)time(NULL));
    for (i = 0; i < 10; ++i)
    {
        arr[i] = rand();
        printf("%d\n", arr[i]);
    }

    return arr;
}

/* 要调用上面定义函数的主函数 */
int main()
{
    /* 一个指向整数的指针 */
    int *p;
    int i;

    p = getRandom();
    for (i = 0; i < 10; i++)
    {
        printf("*(p + [%d]) : %d\n", i, *(p + i));
    }

    return 0;
}
