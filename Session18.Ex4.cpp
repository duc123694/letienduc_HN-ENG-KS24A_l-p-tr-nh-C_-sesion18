#include<stdio.h>
struct studient{
    char name[100];
    int age;
    char phone[100]; 
};
int main() {
    struct studient s[50];
    int n;
    printf("Nhap So Luong Sinh Vien: ");
    scanf("%d", &n);
    
    for(int i = 1; i < n + 1; i++){
    printf("Nhap Ho Va Ten %d: ", i);
	getchar();
    fgets(s[i].name, sizeof(s[i].name), stdin);

    printf("Nhap Tuoi %d: ", i);
    scanf("%d", &s[i].age);

    printf("Nhap So Dien Thoai %d: ", i);
    scanf("%s", s[i].phone);
	}
    
    printf("Thong Tin Sinh Vien: \n");
    for(int i = 0; i < n + 1; i++){
    printf("Ho Va Ten: %s\n", s[i].name);
    printf("Tuoi: %d\n", s[i].age);
    printf("So Dien Thoai: %s\n", s[i].phone);
	}
return 0;
}
