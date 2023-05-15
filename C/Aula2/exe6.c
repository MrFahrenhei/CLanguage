#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brasil");
    int even = 0, odd = 0, array[10];
    printf("Digite um numero");
    for (int i = 0; i <= 10; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int loop = 0; loop <= 10; loop++)
    {
        if (array[loop] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total de números pares e %d\n", even);
    printf("Total de números ímpares é %d\n", odd);
    return 0;
}