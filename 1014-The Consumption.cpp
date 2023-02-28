#include <stdio.h>

int main() {
    int X;                       //X = Distance went
    float Y, distPerLiter;       //Y = Spent Fuel total
    scanf("%d %f",&X, &Y);

    distPerLiter = X / Y;        //Distance Per Litter = Total Distance / Spent Fuel

    printf("%.3f km/l\n", distPerLiter);

    return 0;
}
