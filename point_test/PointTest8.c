#include <stdio.h>
#include <stdlib.h>

//指向指针的指针
int main()
{
    int V;
    int *pt1;
    int **pt2;

    V = 100;

    /* 获取 V 的地址 */
    pt1 = &V;

    /* 使用运算符 & 获取 pt1 的地址，赋值给pt2 */
    pt2 = &pt1;

    printf("var = %d\n", V);//输出v的值
    printf("pt1 = %p\n", pt1);//输出pt1指向的地址
    printf("*pt1 = %d\n", *pt1);//输出pt1的最终指向的值
    printf("pt2 = %p\n", pt2);//输出pt2指向的地址，也就是pt1的地址
    printf("**pt2 = %d\n", **pt2);//输出pt2最终指向的值
    return 0;
}