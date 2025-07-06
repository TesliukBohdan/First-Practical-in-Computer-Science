#include <stdio.h>

int main() {
    int len;
    printf("How many digits should the number have? ");
    scanf("%d", &len);

    if (len <= 0 || len > 30) {
        printf("Value out of range (1..30)\n");
        return 1;
    }

    long long ways[31][3] = {0};

    ways[1][1] = 2;

    for (int i = 2; i <= len; ++i) {
        ways[i][1] = ways[i - 1][1] + ways[i - 1][2]; // change digit
        ways[i][2] = ways[i - 1][1];                  // repeat same digit once
    }

    long long answer = ways[len][1] + ways[len][2];
    printf("==> Total valid combinations: %lld\n", answer);

    return 0;
}
