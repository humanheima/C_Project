#include <stdio.h>

int main()
{
    int var_runoob = 10;
    int *p; // 定义指针变量，整型的指针只能存储整型变量的地址。
    p = &var_runoob;

    printf("var_runoob 变量的地址： %p\n", p);
    return 0;
}