#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("*********************************\n");
    printf("* Bem Vindo ao game em Português*\n");
    printf("*********************************\n");

    int secretNum = 42;
    int guess;

    printf("Qual é o chute?");
    scanf("%d", &guess);
    printf("U guess %d\n", guess);

    if (guess == secretNum)
    {
        printf("Parabens");
    }
    else
    {
        if (guess > secretNum)
        {
            printf("foi maior que o número secreto\n");
        }
        else if (guess < secretNum)
        {
            printf("foi menor que o número secreto\n");
        }
        }

    return 0;
}