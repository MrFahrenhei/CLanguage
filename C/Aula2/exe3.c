#include <stdio.h>

int getInfo()
{
    int num;
    printf("Digite o numero da tabuada\n");
    scanf("%d", &num);
    return num;
}

int tabuada(int val)
{
    int i = 0;
    while (i <= 10)
    {
        printf("%d * %d = %d\n", val, i, val * i);
        i++;
    }
    return 0;
}

int main()
{
    int nums = getInfo();
    tabuada(nums);
    return 0;
}