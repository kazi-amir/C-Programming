#include <stdio.h>

int main() {
    int prodCode1, prodCode2, qt1, qt2;
    float price1, price2, prodCost1, prodCost2, totalCost;

    scanf("%d %d %f",&prodCode1, &qt1, &price1);
    scanf("%d %d %f",&prodCode2, &qt2, &price2);

    prodCost1 = qt1 * price1;
    prodCost2 = qt2 * price2;

    totalCost = prodCost1 + prodCost2;

    printf("VALOR A PAGAR: R$ %.2f\n",totalCost);

    return 0;
}
