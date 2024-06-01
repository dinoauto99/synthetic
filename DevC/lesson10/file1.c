#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))

#define ERRORS
#ifdef ERROR
#error can not build this code
#endif

#define WARNINGS
#ifdef WARNING
#warning warning in this line
#endif

#define STRINGIFY(x) #x
#define CONCAT(a, b) a##b

int main(int argc, char *argv[])
{
    printf("max of %d and %d is %d\n", 1, 2, MAX(1, 2));
    printf("square of %d is %d\n", 3, SQUARE(3));

    int value = 123;
    printf("stringizing: %s\n", STRINGIFY(value));
    int var1 = 123;
    int var2 = 456;
    printf("concat string: %d\n", CONCAT(var, 1) + CONCAT(var, 2));

    printf("end.\n");
    return 0;
}
