#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;
    printf("Input start and end coordinates (x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    double dist = sqrt(pow(c - a, 2) + pow(d - b, 2));
    printf("=> Length = %.6lf\n", dist);

    return 0;
}
