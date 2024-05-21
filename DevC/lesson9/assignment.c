#include <stdio.h>
#include <stdlib.h>

typedef struct contact_info
{
    char name[50];
    char phone[10];
    char addr[100];
} info;

void search_contact()
{
}

void show_all_contacts()
{
}

void add_contact()
{
    info contact;
    puts("Input contact infomation\n");
    puts("    name: ");
    gets(contact.name);
    puts("    phone number: ");
    gets(contact.phone);
    puts("    address: ");
    gets(contact.addr);
    FILE *file = fopen("contacts.txt", "w");
    if (file == NULL)
    {
        perror("Error while opening file.\n");
        exit(1);
    }
    fprintf(file, "%s\t%s\t%s\n", contact.name, contact.phone, contact.addr);
    fclose(file);
}

void proc_choice(int choice)
{
    info contacts;
    switch (choice)
    {
    case 1:
        /* add new contact */
        add_contact();
        break;
    case 2:
        /* show all contacts */
        break;
    case 3:
        /* search contact by name */
        break;
    case 4:
        /* exit program */
        exit(0);
        break;
    default:
        break;
    }
}

int get_user_option()
{
    int ret = 0;
    char input_option[20];

    while ((ret < 1) || (ret > 4))
    {
        printf("Select option:\n");
        printf("    1. Add new contact\n");
        printf("    2. View all contacts\n");
        printf("    3. Search contact by name\n");
        printf("    4. Exit\n");
        printf("Your choice: ");
        scanf("%s", input_option);
        ret = atoi(input_option);
        printf("--------------------------\n");
    }
    return ret;
}

int main(int argc, char *argv[])
{
    while (1)
    {
        proc_choice(get_user_option());
    }

    return 0;
}

/*
Quản lý danh bạ liên hệ bằng cách sử dụng tập tin văn bản.
Cho phép thêm, hiển thị và tìm kiếm thông tin liên hệ.
Yêu cầu:
1. Định nghĩa struct lưu thông tin liên hệ như tên, số điện thoại, địa chỉ
2. Viết hàm để thêm thông tin liên hệ. Lưu vào file.
3. Viết hàm hiển thị toàn bộ danh sách liên hệ.
4. Viết hàm tìm kiếm thông tin liên hệ dựa theo tên.
Gợi ý:
- Dùng fopen, fprintf, fscanf, fclose để thao tác với tập tin
- Dùng vòng lặp để đọc, ghi dữ liệu vào tập tin
*/
