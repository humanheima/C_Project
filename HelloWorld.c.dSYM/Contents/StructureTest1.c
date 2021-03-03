#include <stdio.h>
#include <string.h>

/*结构体*/
struct Book
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book = {"C 语言", "RUNOOB", "编程语言", 123456};

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

/* 函数声明 */
void printBook(struct Books book);

/* 函数声明 */
void printBook2(struct Books *book);

/* 函数声明，测试位域 */
void testBitField();

int main()
{
    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);

    struct Books book1, book2;

    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;

    /* book2 详述 */
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Ali");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 6495700;

    /* 输出 Book1 信息 */
    printBook(book1);

    printf("=============\n");

    /* 输出 Book2 信息 */
    printBook(book2);

    printf("=============\n");

    testBitField();
}

void printBook(struct Books book)
{
    printf("Book title : %s\n", book.title);
    printf("Book author : %s\n", book.author);
    printf("Book subject : %s\n", book.subject);
    printf("Book book_id : %d\n", book.book_id);
}

void printBook2(struct Books *book)
{
    printf("Book title : %s\n", book->title);
    printf("Book author : %s\n", book->author);
    printf("Book subject : %s\n", book->subject);
    printf("Book book_id : %d\n", book->book_id);
}

void testBitField()
{
    struct bs
    {
        unsigned a : 1;
        unsigned b : 3;
        unsigned c : 4;
    } bit, *pbit;
    bit.a = 1;                                 /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.b = 7;                                 /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.c = 15;                                /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    printf("%d,%d,%d\n", bit.a, bit.b, bit.c); /* 以整型量格式输出三个域的内容 */
    pbit = &bit;                               /* 把位域变量 bit 的地址送给指针变量 pbit */
    pbit->a = 0;                               /* 用指针方式给位域 a 重新赋值，赋为 0 */
    /* 使用了复合的位运算符 "&="，相当于：pbit->b=pbit->b&3，位域 b 中原有值为 7，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3） */
    pbit->b &= 3;
    /* 使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 15 */
    pbit->c |= 1;
    printf("%d,%d,%d\n", pbit->a, pbit->b, pbit->c); /* 用指针方式输出了这三个域的值 */
}