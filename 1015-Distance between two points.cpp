#include <stdio.h>
#include <math.h>

//Distance between  point A(x1,y1) & B(x2,y2)
//Formula > distance = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)))

int main()
{
    double x1, y1, x2, y2, dist;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    dist = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));

    printf("%.4lf\n", dist);

    return 0;
}
