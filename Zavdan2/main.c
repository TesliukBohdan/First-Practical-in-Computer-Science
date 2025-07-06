#include <stdio.h>

int get_gcd(int x, int y) {
    while (y) {
        int rem = x % y;
        x = y;
        y = rem;
    }
    return x;
}

int get_lcm(int x, int y) {
    return x * y / get_gcd(x, y);
}

int main() {
    int count, i;
    int numbers[20];

    printf("How many numbers? ");
    scanf("%d", &count);

    printf("Input the numbers:\n");
    for (i = 0; i < count; ++i) {
        scanf("%d", &numbers[i]);
    }

    int lcm_result = numbers[0];
    for (i = 1; i < count; ++i) {
        lcm_result = get_lcm(lcm_result, numbers[i]);
    }

    printf("\n==> LCM of given numbers is: %d\n", lcm_result);

    return 0;
}
