#include <stdio.h>
#include <string.h>

void basic_pointer()
{
    int x = 5;
    int *p;
    p = &x;
    printf("address of x: %p\n", &x);
    printf("value of x: %d\n", x);
    printf("address of p: %p\n", &p);
    printf("value of p: %p\n", p);
    printf("value of reference: %d\n", *p);
    *p = 10;
    printf("value of x after change: %d\n", x);
}

struct Std_Info
{
    char name[20];
    int age;
};

void change_student_info(struct Std_Info *p)
{
    printf("Change student information:\n");
    printf("New name: ");
    scanf("%s", &(p->name));
    printf("New age: ");
    scanf("%d", &(p->age));
}

void bass_by_ptr()
{
    printf("Init value for student:\n");
    struct Std_Info stdudentInfo;
    printf("Enter name: ");
    gets(stdudentInfo.name);
    printf("Enter age: ");
    scanf("%d", &stdudentInfo.age);
    change_student_info(&stdudentInfo);
    printf("New student information:\n");
    printf("Name: %s\tAge: %d\n", stdudentInfo.name, stdudentInfo.age);

    return;
}

int main(int argc, char *argv[])
{
    // basic_pointer();
    bass_by_ptr();

    return 0;
}