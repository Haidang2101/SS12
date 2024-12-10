#include<stdio.h>

int kiemTraSoNguyenTo(int n) {
    if (n <= 1) return 0; 
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0; 
    }
    return 1; 
}

int main() {
    int a, b;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    if (kiemTraSoNguyenTo(a) == 1) {
        printf("%d la so nguyen to(True)\n", a);
    } else {
        printf("%d khong phai la so nguyen to(False)\n", a);
    }

    if (kiemTraSoNguyenTo(b) == 1) {
        printf("%d la so nguyen to(True)\n", b);
    } else {
        printf("%d khong phai la so nguyen to(False)\n", b);
    }

    return 0;
}

