#include <stdio.h>
#include <math.h>

int main(){
    int X, Y;
    float price;
    scanf("%d %d",&X, &Y);

    switch (X)
    {
    case 1:
        price = Y * 4.00;
        printf("Total: R$ %.2lf\n", price);
        break;
    case 2:
        price = Y * 4.50;
        printf("Total: R$ %.2lf\n", price);
        break;
    case 3:
        price = Y * 5.00;
        printf("Total: R$ %.2lf\n", price);
        break;
    case 4:
        price = Y * 2.00;
        printf("Total: R$ %.2lf\n", price);
        break;
    case 5:
        price = Y * 1.50;
        printf("Total: R$ %.2lf\n", price);
        break;
    }

}
