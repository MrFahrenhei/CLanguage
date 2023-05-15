#include <stdio.h>

int getInfo()
{
    int num;
    prinf("Digite um numero");
    scanf("%d", &num);
    return num;
}

int main()
{
    int val = getInfo();
    if (val >= 12 || val <= 20)
    {
        printf("%d esta entre 12 e 20", val);
    }
    while (val < 12 || val > 20)
    {
        printf("Erro, %d esta fora de 12 e 20", val);
        getInfo();
    }
    return 0;
}