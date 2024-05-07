#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *file = fopen("invalid.txt", "r");
    if (file == NULL)
    {
        // get system error message
        perror("Error message");
        // print error message to file -> stdout
        fprintf(stdout, "(message) %s: (no) %d\n", "Error open file", errno);
        return 1;
    }
    /*
    int count_elements = 0;
    int total_elements = 1;
    if (count_elements != total_elements)
    {
        fprintf(stdout, "%s: %s\n", "Error counting data", strerror(errno));
        return 1;
    }*/
    fclose(file);

    return 0;
}