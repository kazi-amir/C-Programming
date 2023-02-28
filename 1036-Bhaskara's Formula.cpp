#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, D, x1, x2;
    scanf("%lf %lf %lf", &A, &B, &C);

    D = (B*B)-(4 * A * C);

    if (D > 0 && A != 0){
        x1 = (((- B) + sqrt(D)) / (2 * A));
        x2 = (((- B) - sqrt(D)) / (2 * A));
        printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
    }
    else{
        printf("Impossivel calcular\n");
    }

}
