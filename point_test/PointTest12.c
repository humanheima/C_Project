#include <stdlib.h>
#include <stdio.h>

// 回调函数
//int (*getNextValue)(void)  这个函数指针指向的函数类型： 返回值是int，函数参数是void
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

int main(void)
{
    printf("直接调用getNextRandomValue函数，%d\n", getNextRandomValue());
    int myarray[10];
    /* getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针*/
    populate_array(myarray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", myarray[i]);
    }
    printf("\n");
    return 0;
}