#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese_Brasil");
    const double PI = 3.14159;
    double radius;
    double circunference;
    double area;

    printf("\nDigite o raio do círculo: ");
    scanf("%lf", &radius);

    circunference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("%.2lfm²\n", circunference);
    printf("%.2lfm²", area);
    return 0;
}