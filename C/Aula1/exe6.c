#include <stdio.h>

int askInfo()
{
    int beginnen, ending;
    printf("Jogo comecou quando?\n");
    scanf("%d", &beginnen);
    printf("Terminou quando?\n");
    scanf("%d", &ending);
    int total = (ending - beginnen);
    printf("Jogo durou %d Horas\n", total);
    return total;
}

int main()
{
    askInfo();
    return 0;
}