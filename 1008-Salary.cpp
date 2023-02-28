#include <stdio.h>

int main() {

      int empNum, wph;
      float salPerHr, salPerMonth;
      scanf("%d %d %f",&empNum, &wph,&salPerHr);

      salPerMonth = wph * salPerHr;

      printf("NUMBER = %d\n", empNum);
      printf("SALARY = U$ %.2f\n", salPerMonth);

      return 0;
}
