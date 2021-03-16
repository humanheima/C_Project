#include <stdio.h> // 执行 printf() 函数需要该库

void inputAString();

void testScanf();

int main()
{

    inputAString();
    testScanf();
    return 0;
}

void inputAString()
{
    char str[100];

    printf("Enter a value :");
    gets(str);

    printf("\nYou entered: ");
    puts(str);
}

void testScanf()
{
    char str[100];
    int i;

    printf("Enter a value :");
    //在读取字符串时，只要遇到一个空格，scanf() 就会停止读取，
    //所以 "this is test" 对 scanf() 来说是三个字符串。
    scanf("%s %d", str, &i);

    printf("\nYou entered: %s %d ", str, i);
    printf("\n");
}