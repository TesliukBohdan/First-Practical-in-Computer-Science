#include <stdio.h>

int main() {
    int num, res = 0;
    printf("Input n (must be between 2 and 149): ");
    scanf("%d", &num);

    if (num <= 1 || num >= 150) {
        printf("n is out of valid range.\n");
        return 1;
    }

    for (int i = 1; i < num; ++i) {
        if (num / i == num % i) {
            res++;
        }
    }

    printf("==> Result: %d\n", res);
    return 0;
}
