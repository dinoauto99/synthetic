#include <stdio.h>
// #include <pthread.h>

// testing extern attribute
extern int age;
extern void print_age();

// testing static attribute
void static_test()
{
    static int a = 0;
    printf("value of a is %d\n", ++a);
}

// testing register attribute
void register_test()
{
    register int a = 5;
    printf("variable with register a: %d\n", a);
    return;
}

// testing volatile attribute
int flag = 0;
void *threadFuncction(void *arg)
{
    int threadID = *((int *)arg);
    // do something
    flag = 1;
    return NULL;
}

int main(int argc, char *argv[])
{
    // call function testing extern
    print_age();
    printf("age in main: %d\n", age);

    // call function testing static
    for (int i = 0; i < 10; i++)
    {
        static_test();
    }
    static_test();

    // testing register attribute
    register_test();

    // testing volatile attribute
    // pthread_t thread;
    // int threadID = 1;
    // pthread_create(&thread, NULL, threadFuncction, (void *)&threadID);
    // while (flag == 0)
    // {
    //     // wait
    // }
    // printf("thread %d has completed the work\n", threadID);

    return 0;
}
