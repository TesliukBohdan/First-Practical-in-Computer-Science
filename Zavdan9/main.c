#include <stdio.h>

int f(int d) {
    int n = 0;
    while (1) {
        n++;
        int m = n / 2;
        int s = (n % 2 == 0) ? m * (m + 1) : (m + 1) * (m + 1);
        if (s >= d) return n;
    }
}

int main() {
    int a, b;
    printf("Enter x and y: ");
    scanf("%d %d", &a, &b);
    printf("Minimum steps: %d\n", f(b - a));
    return 0;
}
