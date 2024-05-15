#include <stdio.h>
#include <string.h>

size_t custom_strlen(const char *str)
{
    size_t length = 0;
    int i = 0;
    // while (*str++ != '\0')
    while (str[i] != '\0')
    {
        length++;
        i++;    // comment out when use *str++
    }
    return length;
}

int *ini_Int(){
    int num = 1;
    return &num;
}

int main()
{
    int i = 10;
    float f = 1.23;
    char c = 'x';
    void *ptr;

    // ptr point to int
    ptr = &i;
    printf("void pointer point to value: %d\n", *(int *)ptr); // dereference
    // ptr point to float
    ptr = &f;
    printf("void pointer point to value: %.1f\n", *(float *)ptr); // dereference
    // ptr point to char
    ptr = &c;
    printf("void pointer point to value: %c\n", *(char *)ptr); // dereference

    int *n_ptr = NULL;
    if (n_ptr == NULL)
        printf("null pointer is declared, value: %p\n", n_ptr);

    int x = 10;
    int y = 20;

    // const pointer
    int *const p1 = &x;
    // p1 = &y;     p1 can not point to y
    *p1 = 5;
    printf("value of x: %d\n", x);

    // pointer to const
    const int *p2 = &y;
    // *p2 = 11;    can not change value by using p2
    p2 = &x;
    printf("value p2 point to: %d\n", *p2);

    const char str1[] = "abcdef";
    const char *str2 = "abcdef";
    printf("size of array: %d\n", sizeof(str1));
    printf("size of pointer: %d\n", sizeof(str2));

    printf("address of array: %p\n", &str1);
    printf("address of first element in array: %p\n", &str1[0]);
    printf("value of array: %p\n", str1);
    printf("address of pointer: %p\n", &str2);
    printf("address of first element pointer: %p\n", &str2[0]);

    printf("len of array: %d\n", strlen(str1));
    printf("len of pointer: %d\n", strlen(str2));

    const char *str3 = "abc123456";
    size_t len_str3 = custom_strlen(str3);
    printf("length of str3: %d\n", len_str3);
    
    int* dangling_ptr = ini_Int();  // dangling pointer
    int* wild_ptr;  // wild pointer

    return 0;
}