#include<stdio.h>
int main() {
    float A, B, C;
    double perimeter, area;
    scanf("%f%f%f",&A,&B,&C);

    if((A + B) > C && ( A + C) > B && ( B + C) > A){

        perimeter = A + B + C;
        printf("Perimetro = %.1lf\n",perimeter);
    }
    else {
        area=((A + B) / 2) * C;
        printf("Area = %.1lf\n",area);
    }

}

