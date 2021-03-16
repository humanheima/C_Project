#include <stdio.h>

int fibonaci(int i);

double factorial(unsigned int i)
{
    if (i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}
int main()
{
    int i = 5;
    printf("%d 的阶乘为 %f\n", i, factorial(i));

    int j;
    for (j = 0; j < 10; j++)
    {
        printf("%d\t\n", fibonaci(j));
    }

    return 0;
}

int fibonaci(int i)
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }
    return fibonaci(i - 1) + fibonaci(i - 2);
}