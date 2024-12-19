#include<stdio.h>
struct studient{
    char name[100];
    int age;
    char phone[100]; 
};
int main() {
    struct studient s;
    printf("Nhap Ho Va Ten: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Nhap Tuoi: ");
    scanf("%d", &s.age);

    printf("Nhap So Dien Thoai: ");
    scanf("%s", s.phone);
    
    printf("Thong Tin Sinh Vien: \n");
    printf("Ho Va Ten: %s\n", s.name);
    printf("Tuoi: %d\n", s.age);
    printf("So Dien Thoai: %s\n", s.phone);
return 0;
}
