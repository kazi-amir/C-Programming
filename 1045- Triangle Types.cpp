#include <stdio.h>
int main(){
    double A, B, C;
    scanf("%lf %lf %lf",&A, &B, &C);

    if (A >= B+C || B >= A+C || C >= A+B)
        printf("NAO FORMA TRIANGULO\n");   //sum of two sides is less then or equal to 3rd side >> doesn't form a triangle
    else if (((A*A)== (B*B)+(C*C)) || ((B*B)== (A*A)+(C*C)) || ((C*C)== (B*B)+(A*A)))
        printf("TRIANGULO RETANGULO\n");   //sum of two sides is equal to 3rd side  >> forms a triangle
    else if (((A*A) > (B*B)+(C*C)) || ((B*B) > (A*A)+(C*C)) || ((C*C) > (B*B)+(A*A)))
        printf("TRIANGULO OBTUSANGULO\n"); //sum of two sides is less then 3rd side
    else if (((A*A) < (B*B)+(C*C)) || ((B*B) < (A*A)+(C*C)) || ((C*C) < (B*B)+(A*A)))
        printf("TRIANGULO ACUTANGULO\n");  //sum of two sides is greater then 3rd side

    if (A == B && B == C)
        printf("TRIANGULO EQUILATERO\n");  //All sides equal
    if (A == B && A != C || B == C && B != A ||  A == C && A != B)
        printf("TRIANGULO ISOSCELES\n");   //Two sides equal

    return 0;
}
