#include <stdio.h>

unsigned long long f(int n) {
    unsigned long long r = 1;
    for (int i = 1; i <= n; i++) r *= i;
    return r;
}

int main() {
    char s[15];
    int c[256] = {0}, l = 0;
    printf("Enter a word: ");
    scanf("%s", s);
    while (s[l]) c[(unsigned char)s[l++]]++;
    unsigned long long res = f(l);
    for (int i = 0; i < 256; i++)
        if (c[i] > 1) res /= f(c[i]);
    printf("Number of anagrams: %llu\n", res);
    return 0;
}
