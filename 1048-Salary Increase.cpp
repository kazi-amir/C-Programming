#include<stdio.h>

int main(){
    float salary, newSalary;
    int a = 15, b = 13, c = 10, d = 7, e = 4;
    scanf("%f",&salary);

    if (0 < salary && 400 >= salary){
        newSalary = salary + (salary * 0.15);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d%\n",newSalary,(salary * 0.15), a);
    }
    else if (400 < salary && 800 >= salary){
        newSalary = salary + (salary * 0.12);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d\%\n",newSalary,(salary * 0.12), b);
    }
    else if (800 < salary && 1200 >= salary){
        newSalary = salary + (salary * 0.10);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d\%\n",newSalary,(salary * 0.10), c);
    }
    else if (1200 < salary && 2000 >= salary){
        newSalary = salary + (salary * 0.07);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d%%\n",newSalary,(salary * 0.07), d);
    }
    else if (2000 < salary){
        newSalary = salary + (salary * 0.04);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d\%\n",newSalary,(salary * 0.04), e);
    }
    return 0;
}
