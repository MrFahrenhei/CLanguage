#include <stdio.h>

void printAnwsers(int val1, int val2)
{
    if (val1 > val2)
    {
        printf("%d e maior que %d", val1, val2);
    }
    else if (val1 < val2)
    {
        printf("%d e maior que %d", val2, val1);
    }
    else
    {
        printf("%d e igual a %d", val1, val2);
    }
}

int main()
{
    printf("Digite dois numero para saber qual e maior\n");
    int val1, val2;
    scanf("%d", &val1);
    scanf("%d", &val2);
    printAnwsers(val1, val2);
    return 0;
}