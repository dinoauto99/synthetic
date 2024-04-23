#include <stdio.h>
#include <string.h>

void printString(char *s)
{
    printf("string content: %s\n", s);
    return;
}

int main()
{
    char str[] = "Hello world!";
    printString(str);

    char str2[] = "HELLO WORLD!";
    if (!strcmp(str, str2))
    {
        printf("Strings are the same\n");
    }
    else
    {
        printf("Strings are different\n");
    }

    return 0;
}