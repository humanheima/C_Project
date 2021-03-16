#include <stdio.h>

void writeFile();
void readFile();
int main()
{
    //writeFile();
    readFile();
}

void writeFile()
{

    FILE *fp = NULL;

    //打开一个文本文件，允许读写文件。如果文件已存在，则文件会被截断为零长度，如果文件不存在，则会创建一个新文件。
    fp = fopen("/tmp/test.txt", "w+");
    //下面这两个方法有什么区别
    fprintf(fp, "This is testing for fprintf 2...\n");
    fputs("This is testing for fputs. 2..\n", fp);
    fclose(fp);
}

void readFile()
{
    FILE *inputFp = NULL;
    char buffer[255];

    //以读取的方式打开文件
    inputFp = fopen("/tmp/test.txt", "r");
    //遇到第一个空格和换行符时，它会停止读取
    fscanf(inputFp, "%s", buffer);
    printf("1: %s\n", buffer);

    //遇到一个换行符 '\n' 或文件的末尾 EOF 就会停止
    fgets(buffer, 255, (FILE *)inputFp);
    printf("2: %s\n", buffer);

    fgets(buffer, 255, (FILE *)inputFp);
    printf("3: %s\n", buffer);
    fclose(inputFp);
}