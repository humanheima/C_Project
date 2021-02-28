#include <stdlib.h>
#include <stdio.h>

/**
 * 存储类
 */

/* 函数声明 */
void func1(void);

/* 全局变量 - static 是默认的 */
static int count = 5;

int Basic2main()
{

    while (count--)
    {
        func1();
    }

    int a = 4;
    short b;
    double c;
    int *ptr;

    /* sizeof 运算符实例 */
    printf("Line 1 - 变量 a 的大小 = %lu\n", sizeof(a));
    printf("Line 2 - 变量 b 的大小 = %lu\n", sizeof(b));
    printf("Line 3 - 变量 c 的大小 = %lu\n", sizeof(c));

    /* & 和 * 运算符实例 */
    ptr = &a; /* 'ptr' 现在包含 'a' 的地址 */
    printf("a 的值是 %d\n", a);
    //真正的值
    printf("*ptr 是真正的值：%d\n", *ptr);
    //内存地址
    printf("ptr 是内存地址：%p\n", ptr);

    /* 三元运算符实例 */
    a = 10;
    b = (a == 1) ? 20 : 30;
    printf("b 的值是 %d\n", b);

    b = (a == 10) ? 20 : 30;
    printf("b 的值是 %d\n", b);

    return 0;
}

void func1(void)
{
    /**
     * 'thingy' 是 'func1' 的局部变量 - 只初始化一次,每次调用函数 'func1' 'thingy' 值不会被重置。
     */
    //在函数里定义静态变量，和Java不一样
    static int thingy = 5;
    thingy++;
    printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
}