#include<stdio.h>
struct studient{
    char name[100];
    int age;
    char phone[100]; 
};
int main() {
    struct studient s;
    sprintf(s.name, "Vu Duc Hoang");
    s.age = 18;
    sprintf(s.phone, "0833321222");
    printf("Thong Tin Sinh Vien: \n");
    printf("Ho Va Ten: %s\n", s.name);
    printf("Tuoi: %d\n", s.age);
    printf("So Dien Thoai: %s\n", s.phone);
return 0;
}
