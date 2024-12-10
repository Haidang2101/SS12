#include <stdio.h>

long long TinhGiaiThua(int n) {
    long long result = 1;
    
    if (n < 0) {
        printf("Giai thua >= 0.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    
    printf("Hay nhap mot so nguyen: ");
    scanf("%d", &n);

    printf("Giai thua cua %d la: %lld\n", n, TinhGiaiThua(n));

    return 0;
}

