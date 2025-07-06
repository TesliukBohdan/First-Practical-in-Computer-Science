#include <stdio.h>

int main() {
    int guest1_time, guest2_time, guest3_time;

    printf("Please enter the time each guest needs to finish a whole pie:\n");

    printf("Time for Guest 1 (hours): ");
    scanf("%d", &guest1_time);

    printf("Time for Guest 2 (hours): ");
    scanf("%d", &guest2_time);

    printf("Time for Guest 3 (hours): ");
    scanf("%d", &guest3_time);

    double speed1 = 1.0 / guest1_time;
    double speed2 = 1.0 / guest2_time;
    double speed3 = 1.0 / guest3_time;

    double combined_speed = speed1 + speed2 + speed3;

    double result_time = 1.0 / combined_speed;

    printf("\n=> They will finish the pie in approximately %.2f hours.\n", result_time);

    return 0;
}
