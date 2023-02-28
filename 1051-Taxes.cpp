#include <stdio.h>

int main() {
    float salary, tax, moreThen2000, moreThen3000, moreThen4500, tax2000, tax3000, tax4500;
    scanf("%f", &salary);
    if (salary >= 0 && salary <= 2000.00){
        printf("Isento\n");
    }
    else if (salary >= 2000.01 && salary <= 3000.00){
        moreThen2000 = salary - 2000.00;
        tax = moreThen2000 * 0.08;
        printf("R$ %.2f\n", tax);
    }
    else if (salary >= 3000.01 && salary <= 4500.00){
        moreThen3000 = salary - 3000.00;
        moreThen2000 = 3000.00 - 2000.00;
        tax3000 = moreThen3000 * 0.18;
        tax2000 = moreThen2000 * 0.08;
        tax = tax3000 + tax2000;
        printf("R$ %.2f\n", tax);
    }
    else if (salary >= 4500.01){
        moreThen4500 = salary - 4500.00;
        moreThen3000 = 4500.00 - 3000.00;
        moreThen2000 = 3000.00 - 2000.00;
        tax4500 = moreThen4500 * 0.28;
        tax3000 = moreThen3000 * 0.18;
        tax2000 = moreThen2000 * 0.08;
        tax = tax4500 + tax3000 + tax2000;
        printf("R$ %.2f\n", tax);
    }
    return 0;
}
