#include <stdio.h>
#include <math.h>

double findIt(double val)
{
    return val * val;
}

int main()
{
    double A, B, C;

    printf("Entre o lado A: ");
    scanf("%lf", &A);

    printf("Entre o lado B: ");
    scanf("%lf", &B);

    C = sqrt(findIt(A) + findIt(B));

    printf("Hipotenusa é: %0.2lf", C);

    return 0;
}