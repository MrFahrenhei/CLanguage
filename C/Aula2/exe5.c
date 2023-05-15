#include <stdio.h>
#include <locale.h>

int AskInfo()
{
    int num;
    printf("Digite um número");
    scanf("%d", num);
    return num;
}

void showInfo(int par, int impar)
{
    printf("Números pares %d e impares %d", par, impar);
}

void doTheMath(int num, int par, int impar)
{
    if (num % 2 == 0)
    {
        par++;
    }
    else
    {
        impar++;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brasil");
    int par, impar = 0;
    for (int i = 1; i <= 10; i++)
    {
        int num = AskInfo();
        if (num % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    showInfo(par, impar);
    return 0;
}