#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*共用体*/
//共用体占用的内存大小是用体中占用内存最大的成员的内存

union Data
{
    int i;
    float f;
    char str[20]; //占用内存最大，占用20个字节。所以这个共用体占用的内存也是20字节。
};

//方法声明，正确使用共用体
void correctUseUnion();

int main()
{
    union Data data;

    data.i = 10;
    data.f = 220.5;
    strcpy(data.str, "C Programming");

    //注意，这里 只能正常输出 data.str
    //在这里，我们可以看到共用体的 i 和 f 成员的值有损坏，因为最后赋给变量的值占用了内存位置，
    //这也是 str 成员能够完好输出的原因。
    printf("data.i : %d\n", data.i);
    printf("data.f : %f\n", data.f);
    printf("data.str : %s\n", data.str);

    printf("Memory size occupied by data : %lu\n", sizeof(data));

    printf("==========================\n");
    correctUseUnion();
    return 0;
}

void correctUseUnion()
{
    union Data data;

    data.i = 10;
    printf("data.i : %d\n", data.i);

    data.f = 220.5;
    printf("data.f : %f\n", data.f);

    strcpy(data.str, "C Programming");
    printf("data.str : %s\n", data.str);
}