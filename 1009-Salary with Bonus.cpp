#include <stdio.h>

int main() {

      char firstName;
      double salPerMonth, sellThisMonth, bonus, totalSallary;

      scanf("%s", &firstName);
      scanf("%lf %lf", &salPerMonth, &sellThisMonth);

      bonus = (sellThisMonth * 15) / 100;
      totalSallary = salPerMonth + bonus;

      printf("TOTAL = R$ %.2f\n", totalSallary);

      return 0;
}
