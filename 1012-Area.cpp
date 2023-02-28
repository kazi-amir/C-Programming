#include <stdio.h>

int main() {

    float A, B, C;
    double areaRecTriangle, areaCircle, areaTrapezium, areaSquare, areaRectangle;
    const double pi = 3.14159;

    scanf("%f %f %f",&A, &B, &C);

    areaRecTriangle = 0.5 * A * C;     //Area of Triangle = Half*Base*height
    areaCircle =  pi * C*C;            //Area of a Circle = pi * (Radius)^2
    areaTrapezium = ((A + B)/2) * C;   //Area of a Trapezium = ((Base1 + Base2)/2)*Height
    areaSquare = B*B;                  //Area of a Square = (Side)^2
    areaRectangle = A * B;             //Area of a Rectangle = Height * Width


    printf("TRIANGULO: %.3lf\n", areaRecTriangle);
    printf("CIRCULO: %.3lf\n", areaCircle);
    printf("TRAPEZIO: %.3lf\n", areaTrapezium);
    printf("QUADRADO: %.3lf\n", areaSquare);
    printf("RETANGULO: %.3lf\n", areaRectangle);

    return 0;
}
