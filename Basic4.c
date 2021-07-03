#include <stdio.h>
#include <stdlib.h>

/*指针相关*/

int max(int x, int y)
{
    return x > y ? x : y;
}

// 回调函数
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i = 0; i < arraySize; i++)
        array[i] = getNextValue();
}

// 获取随机值
int getNextRandomValue(void)
{
    return rand();
}

const int MAX = 3;

int main()
{

    int var[] = {10, 100, 200};
    int i, *ptrArr[MAX];

    for (i = 0; i < MAX; i++)
    {
        ptrArr[i] = &var[i]; /* 赋值为整数的地址 */
    }
    for (i = 0; i < MAX; i++)
    {
        printf("Value of var[%d] = %d\n", i, *ptrArr[i]);
        printf("Address of var[%d] = %p\n", i, ptrArr[i]);
    }

    int var_runoob = 10;
    int *p; // 定义指针变量，整型的指针只能存储整型变量的地址。
    p = &var_runoob;

    printf("var_runoob 变量的地址： %p\n", p);

    printf("var_runoob 变量的地址： %d\n", *p);

    int *ptr = NULL; //空指针

    printf("ptr 的地址是 %p\n", ptr);

    /* p 是函数指针，指向一个函数 */
    int (*func_p)(int, int) = &max; // &可以省略

    int a, b, c, d;

    printf("请输入三个数字:");
    scanf("%d %d %d", &a, &b, &c);

    /* 与直接调用函数等价，d = max(max(a, b), c) */
    d = func_p(func_p(a, b), c);

    printf("最大的数字是: %d\n", d);

    int myarray[10];
    /* getNextRandomValue 不能加括号，否则无法编译，
    //因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针*/
    populate_array(myarray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", myarray[i]);
    }
    printf("\n");

    return 0;
}