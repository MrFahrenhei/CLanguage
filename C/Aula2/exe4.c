#include <stdio.h>

int askInfo()
{
    int val, idade;
    printf("Idade\n");
    scanf("%d", &val);
    idade += val;
    return idade;
}

int main()
{
    int idade, total;
    for (int i = 1; i <= 3; i++)
    {
        idade = askInfo();
        total = idade + idade;
    }
    printf("%d\n", total);
    return 0;
}