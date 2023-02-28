#include <stdio.h>
#include <math.h>

int main()
{
    int dist, time;                   //Distance Y car went more then X car
    scanf("%d", &dist);

    time = dist * 2;                  //Y goes 1 KM more then X in 2 minute. So, it will take time = Distance * 2;

    printf("%d minutos\n", time);

    return 0;
}
