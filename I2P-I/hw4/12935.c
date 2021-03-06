#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (b > a) {
        printf("%d\n", gcd(b, a));
    } else {
        printf("%d\n", gcd(a, b));
    }
}
