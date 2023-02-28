#include <stdio.h>

int main() {
    int N, remainder100, remainder50, remainder20, remainder10, remainder5, remainder2;
    scanf("%d", &N);

    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n", N / 100);
    remainder100 = N % 100;
    printf("%d nota(s) de R$ 50,00\n", remainder100 / 50);
    remainder50 = remainder100 % 50;
    printf("%d nota(s) de R$ 20,00\n", remainder50 / 20);
    remainder20 = remainder50 % 20;
    printf("%d nota(s) de R$ 10,00\n", remainder20 / 10);
    remainder10 = remainder20 % 10;
    printf("%d nota(s) de R$ 5,00\n", remainder10 / 5);
    remainder5 = remainder10 % 5;
    printf("%d nota(s) de R$ 2,00\n", remainder5 / 2);
    remainder2 = remainder5 % 2;
    printf("%d nota(s) de R$ 1,00\n", remainder2 / 1);

    return 0;
}
