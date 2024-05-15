#include <stdio.h>

typedef struct Student_Info
{
    char id[10];
    char name[50];
    int age;
    int class;
};

void add_student(struct Student_Info *st)
{
    printf("Input student infomation:\n");
    printf("id: ");
    scanf("%s", &st->id);
    printf("name: ");
    scanf("%s", &st->name);
    printf("age: ");
    scanf("%d", &st->age);
    printf("class: ");
    scanf("%d", &st->class);
    return;
}

void show_info(struct Student_Info *st)
{
    printf("Show student infomation:\n");
    printf("id: %s\n", st->id);
    printf("name: %s\n", st->name);
    printf("age: %d\n", st->age);
    printf("class: %d\n", st->class);
    return;
}

int main(int argc, char *argv[])
{
    struct Student_Info students[10];

    for (int i = 0; i < 3; i++)
    {
        add_student(&(students[i]));
    }

    printf("------------------\n");

    for (int i = 0; i < 3; i++)
    {
        show_info(&(students[i]));
    }

    return 0;
}