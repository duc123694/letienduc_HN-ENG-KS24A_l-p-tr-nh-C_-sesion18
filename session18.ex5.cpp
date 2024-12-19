#include <stdio.h>
#include <string.h>
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

int main() {
    Student students[50] = {
        {1, "Nam", 20, "0901234567"},
        {2, "Long", 22, "0912345678"},
        {3, "Van", 21, "0923456789"},
        {4, "Hanh", 23, "0934567890"},
        {5, "Hoang ", 24, "0945678901"}
    };

    int idToEdit;
    int found = 0;
    printf("Nhap ID sinh vien can sua thong tin: ");
    scanf("%d", &idToEdit);
    for (int i = 0; i < 5; i++) {
        if (students[i].id == idToEdit) {
            found = 1;
            printf("Sinh vien tim thay! Nhap ten moi: ");
            getchar();  
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0';  
            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            printf("Thong tin sinh vien da duoc cap nhat!\n");
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien voi ID: %d\n", idToEdit);
    }

    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n", 
            students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}
