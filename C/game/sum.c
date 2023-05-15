#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Digite primeira var\n");
    scanf("%d", &num1);
    printf("Digite segunda var\n");
    scanf("%d", &num2);
    int sum = num1 + num2;
    printf("seu valor e: %d\n", sum);
    return 0;
}