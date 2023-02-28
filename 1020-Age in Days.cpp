#include <stdio.h>

int main(){

    int ageInDays, years, months, remainingDays;
    scanf("%d",&ageInDays);     //input age in days

    years = ageInDays / 365;
    months = ((ageInDays - (years * 365)) / 30);
    remainingDays = (ageInDays - ((months * 30)+( years * 365)));

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, remainingDays);
    return 0;
}
