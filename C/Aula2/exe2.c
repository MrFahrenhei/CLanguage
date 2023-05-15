#include <stdio.h>

int findit(int val)
{
    if (val % 2 == 0)
        printf("%d\n", val);
    return val;
}

int main()
{
    for (int i = 1; i <= 100; i++)
        findit(i);

    return 0;
}