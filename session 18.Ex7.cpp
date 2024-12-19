#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};
void displayStudents(struct Student students[], int size) {
    if (size == 0) {
        printf("Danh sach sinh vien rong!\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
int deleteStudentByName(struct Student students[], int *size, const char *nameToDelete) {
    for (int i = 0; i < *size; i++) {
        if (strcmp(students[i].name, nameToDelete) == 0) {
            for (int j = i; j < *size - 1; j++) {
                students[j] = students[j + 1];
            }
            (*size)--; 
            return 1;  
        }
    }
    return 0; 
}

int main() {
    struct Student students[50] = {
        {1, "Nguyen", 20, "0123456789"},
        {2, "Linh", 21, "0987654321"},
        {3, " Minh ", 22, "0912345678"},
        {4, "Hoang ", 20, "0932456789"},
        {5, "Thi", 23, "0908765432"}
    };

    int currentSize = 5;  
    char nameToDelete[50];
    printf("Danh sach sinh vien ban dau:\n");
    displayStudents(students, currentSize);
    printf("\nNhap ten sinh vien can xoa: ");
    fgets(nameToDelete, sizeof(nameToDelete), stdin);
    nameToDelete[strcspn(nameToDelete, "\n")] = '\0';  
    if (deleteStudentByName(students, &currentSize, nameToDelete)) {
        printf("\nXoa sinh vien thanh cong!\n");
    } else {
        printf("\nSinh vien khong ton tai!\n");
    }
    printf("\nDanh sach sinh vien sau khi xoa:\n");
    displayStudents(students, currentSize);

    return 0;
}
