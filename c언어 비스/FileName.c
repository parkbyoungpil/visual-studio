#include <stdio.h>

long long factorial(int n) {
    long long fac = 1;
    while (n >= 1) {
        fac = fac * n;
        n--;
    }
    return fac;
}

int main() {
    int n;
    printf("�� ���丮��? ==> ");
    scanf("%d", &n);

    printf("%lld �Դϴ�.\n", factorial(n));

    return 0;
}