#include <stdio.h>
#include <stdlib.h>
#include <float.h>

//定义常量
// #define LENGTH 10
// #define WIDTH 5
// #define NEWLINE '\n'

int x = 1;
int y = 1;
//当您在一个源文件中定义函数且在另一个文件中调用函数时，函数声明是必需的。在这种情况下，您应该在调用函数的文件顶部声明函数。
extern int addTwoNum();

int main4()
{

    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';
    int area;

    area = (LENGTH) * (WIDTH);
    printf("value of area : %d", area);
    printf("%c", NEWLINE);

    int result = addTwoNum();
    printf("result 为: %d\n", result);
    
    return 0;
}

int main3()
{

    //int result = addTwoNum();
    //printf("result 为: %d\n", result);
    return 0;
}
int main2()
{

    int a;
    printf("a = %d\n", a);
    printf("int 存储大小：%lu \n", sizeof(int));
    printf("float 存储最大字节数 : %lu \n", sizeof(float));
    printf("float 最小值: %E\n", FLT_MIN);
    printf("float 最大值: %E\n", FLT_MAX);
    printf("精度值: %d\n", FLT_DIG);

    int arr[] = {89, 20, 13, 45, 68};
    //数组地址 ， 默认是首个元素的内存地址
    printf("数组地址：%p\n", &arr);
    printf("这样也可以输出数组地址：%p\n", arr);
    printf("第一个元素的地址：%p\n", &arr[0]);

    // 以普通的方式进行数组输出
    for (int i = 0; i < 5; i++)
    {
        printf("数组元素：%d\n", arr[i]);
    }

    printf("\n");

    //指针指向数组
    int *p = arr;

    // 以指针运算的方式进行数组输出

    for (int i = 0; i < 5; i++)
    {
        printf("数组元素：%d，元素地址%p\n", *p, p);
        p++;
    }

    return 0;
}

int main1()
{
    int i = 100;

    int *p = &i;

    printf("i 的地址：%p\n", &i);
    printf("i 的地址：%p\n", p);
    printf("i 的值: %d\n", *p);
    //通过*p 我们操作i变量 ， 给i变量赋值20
    *p = 20;
    printf("i 的值: %d\n", i);
    return 0;
}
