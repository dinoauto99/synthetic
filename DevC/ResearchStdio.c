#include <stdio.h>

void readFileChar()
{
    FILE *f;
    char ch;
    f = fopen("sample.txt", "r");
    if (f == NULL)
    {
        printf("can not open file.\n");
        return;
    }

    while ((ch = fgetc(f)) != EOF)
    {
        putchar(ch);
    }
    fclose(f);

    return;
}

void readWriteFile()
{
    FILE *filePtr;
    filePtr = fopen("sample.txt", "w");
    if (filePtr == NULL)
    {
        printf("open file failed.\n");
        return;
    }

    fprintf(filePtr, "this text is writen from .c file.\n");
    fclose(filePtr);

    return;
}

int main()
{
    // printf("enter your age: ");
    // int age;
    // scanf("%d", &age);
    // printf("you are %d years old.\n", age);

    // readWriteFile();

    readFileChar();

    return 0;
}
