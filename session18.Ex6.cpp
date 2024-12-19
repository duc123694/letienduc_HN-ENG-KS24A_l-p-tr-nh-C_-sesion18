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
        {1, "Nguyen", 20, "0901234567"},
        {2, "Hoang", 22, "0912345678"},
        {3, "Long", 21, "0923456789"},
        {4, "Thai", 23, "0934567890"},
        {5, "Linh", 24, "0945678901"}
    };

    int numStudents = 5;  
    Student newStudent;    
    printf("Nhap thong tin sinh vien moi:\n");
    printf("Nhap ID: ");
    scanf("%d", &newStudent.id);
    getchar(); 

    printf("Nhap ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0'; 

    printf("Nhap tuoi: ");
    scanf("%d", &newStudent.age);
    getchar();  

    printf("Nhap so dien thoai: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0';  
    students[numStudents] = newStudent;
    numStudents++;
    printf("\nDanh sach sinh vien sau khi them moi:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n", 
            students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}
