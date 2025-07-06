#include <stdio.h>

int main() {
    int len;
    printf("Enter the length of the sequence n: ");
    scanf("%d", &len);

    if (len <= 1 || len >= 10000) {
        printf("n must be between 2 and 9999\n");
        return 1;
    }

    const int MOD = 12345;
    int seq[10000];

    seq[0] = 1;
    seq[1] = 2;
    seq[2] = 4;

    for (int i = 3; i < len; ++i) {
        seq[i] = (seq[i - 1] + seq[i - 2] + seq[i - 3]) % MOD;
    }

    printf("=> Result: %d\n", seq[len - 1]);
    return 0;
}
