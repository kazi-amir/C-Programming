#include <stdio.h>

int main() {
    int time, velocity;  //v = velocity (km/h), t = time (hour)
    float distance, fuel; //d = distance
    scanf("%d %d", &time, &velocity);
    distance = (velocity * time);
    fuel = (distance / 12);  //the car goes 12km per liter fuel
    printf("%.3f\n", fuel);
    return 0;
}
