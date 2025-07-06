#include <stdio.h>
#include <math.h>

int main() {
    double a, b, r1, c, d, r2;
    printf("Input circle data (x1 y1 r1 x2 y2 r2): ");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &r1, &c, &d, &r2);

    double dist = hypot(c - a, d - b);

    if (dist == 0 && r1 == r2) {
        printf("=> Infinite points (-1)\n");
    } else if (dist > r1 + r2 || dist < fabs(r1 - r2)) {
        printf("=> No intersection (0)\n");
    } else if (fabs(dist - (r1 + r2)) < 1e-6 || fabs(dist - fabs(r1 - r2)) < 1e-6) {
        printf("=> One point (1)\n");
    } else {
        printf("=> Two points (2)\n");
    }

    return 0;
}
