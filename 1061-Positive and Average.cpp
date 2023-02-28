#include <stdio.h>

int main() {
    double num1, num2, num3, num4, num5, num6, sum, average;
    int totalPositive;
    totalPositive = 0;
    sum = 0;
    scanf("%lf %lf %lf %lf %lf %lf",&num1, &num2, &num3, &num4, &num5, &num6);

    if (num1 > 0){
        totalPositive = totalPositive + 1;
        sum = sum + num1;
    }
    if (num2 > 0){
        totalPositive = totalPositive + 1;
        sum = sum + num2;
    }
    if (num3 > 0){
        totalPositive = totalPositive + 1;
        sum = sum + num3;
    }
    if (num4 > 0){
        totalPositive = totalPositive + 1;
        sum = sum + num4;
    }
    if (num5 > 0){
        totalPositive = totalPositive + 1;
        sum = sum + num5;
    }
    if (num6 > 0){
        totalPositive = totalPositive + 1;
        sum = sum + num6;
    }

    average = sum / totalPositive;

    printf("%d valores positivos\n", totalPositive);
    printf("%.1lf\n",average);
    return 0;
}
