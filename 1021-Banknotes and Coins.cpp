#include <stdio.h>

int main() {
    int N, reminder;
    scanf("%d", &N);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100,00\n", N / 100);
    reminder = N % 100;
    printf("%d nota(s) de R$ 50,00\n", reminder / 50);
    reminder = reminder % 50;
    printf("%d nota(s) de R$ 20,00\n", reminder / 20);
    reminder = reminder % 20;
    printf("%d nota(s) de R$ 10,00\n", reminder / 10);
    reminder = reminder % 10;
    printf("%d nota(s) de R$ 5,00\n", reminder / 5);
    reminder = reminder % 5;
    printf("%d nota(s) de R$ 2,00\n", reminder / 2);
    reminder = reminder % 2;

    printf("MOEDAS:\n");
    reminder = reminder % 2;
    printf("%d nota(s) de R$ 1,00\n", reminder2 / 1);

    printf("%d nota(s) de R$ 50,00\n", reminder100 / 50);
    reminder50 = reminder100 % 50;
    printf("%d nota(s) de R$ 20,00\n", reminder50 / 20);
    reminder20 = reminder50 % 20;
    printf("%d nota(s) de R$ 10,00\n", reminder20 / 10);
    reminder10 = reminder20 % 10;
    printf("%d nota(s) de R$ 5,00\n", reminder10 / 5);
    reminder5 = reminder10 % 5;
    printf("%d nota(s) de R$ 2,00\n", reminder5 / 2);


    return 0;
}
