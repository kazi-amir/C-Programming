#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int totalEven;
    totalEven = 0;
    scanf("%d %d %d %d %d",&num1, &num2, &num3, &num4, &num5);

    if (num1 % 2 == 0){
        totalEven = totalEven + 1;
    }
    if (num2 % 2 == 0){
        totalEven = totalEven + 1;
    }
    if (num3 % 2 == 0){
        totalEven = totalEven + 1;
    }
    if (num4 % 2 == 0){
        totalEven = totalEven + 1;
    }
    if (num5 % 2 == 0){
        totalEven = totalEven + 1;
    }

    printf("%d valores pares\n", totalEven);
    return 0;
}
