#include <stdio.h>
#include <stdlib.h>

int a;

int test_func1()
{
    a = 'X';
    printf("size of a is %ld\n", sizeof(a));
    printf("value of a is %d\n", a);

    return 0;
}

int main(int argc, char *argv[])
{
    int a = 'O';
    printf("size of a is %ld\n", sizeof(a));
    printf("value of a is %d\n", a);
    test_func1();

    return 0;
}