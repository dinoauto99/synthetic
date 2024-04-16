#include <stdio.h>
#include <string.h>

typedef enum position
{
    EMPLOYEE = 0,
    MANAGER = 1,
    DIRECTOR = 2
};

// typedef union age_salary
// {
//     int age;
//     float salary;
// };

typedef struct employee_info
{
    char eName[50];
    // union age_salary eAgeSal;
    int eAge;
    float eSalary;
    enum position ePos;
};

int main(int argc, char *argv[])
{
    struct employee_info eInfo;
    printf("Input employee information:\n");
    printf("- Enter employee name: ");
    gets(eInfo.eName);
    printf("- Enter employee age: ");
    scanf("%d", &eInfo.eAge);
    printf("- Enter employee salary: ");
    scanf("%f", &eInfo.eSalary);
    printf("- Select employee posiition (0:employee, 1:manager, 2:director): ");
    scanf("%d", &eInfo.ePos);

    printf("=================================\n");
    printf("INFORMATION\n");
    printf("Name: %s\n", eInfo.eName);
    printf("Age: %d\n", eInfo.eAge);
    printf("Salary: %.2f\n", eInfo.eSalary);
    switch (eInfo.ePos)
    {
    case 0:
        printf("Position: Employee\n");
        break;
    case 1:
        printf("Position: Manager\n");
        break;
    case 2:
        printf("Position: Director\n");
        break;
    default:
        printf("Position: Invalid selection\n");
        break;
    }
    printf("=================================\n");

    return 0;
}