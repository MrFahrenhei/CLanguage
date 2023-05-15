#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "includes.h"
#include "map.h"

MAPA m;
POV hero;

int ghostAI(int nowX, int nowY, int *goX, int *goY)
{
    int options[4][2] = {
        {nowX, nowY + 1},
        {nowX + 1, nowY},
        {nowX, nowY - 1},
        {nowX - 1, nowY}};

    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        int position = rand() % 4;
        if (canWalk(&m, options[position][0], options[position][1]))
        {
            *goX = options[position][0];
            *goY = options[position][1];

            return 1;
        }
    }
    return 0;
}

void ghosts()
{
    MAPA copia;
    copyMap(&copia, &m);
    for (int i = 0; i < m.line; i++)
    {
        for (int j = 0; j < m.colum; j++)
        {
            if (copia.matriz[i][j] == GHOST)
            {
                int xGo;
                int yGo;

                int findGhost = ghostAI(i, j, &xGo, &yGo);

                if (findGhost)
                {
                    walkingBy(&m, i, j, xGo, yGo);
                }
            }
        }
    }
    freeMap(&copia);
}

int finished()
{
    POV pos;
    int foundMe = findMap(&m, &pos, HEROI);
    return !foundMe;
}
int isDirection(char dir)
{
    return dir == 'a' ||
           dir == 'w' ||
           dir == 's' ||
           dir == 'd';
}

void move(char direction)
{
    if (!isDirection(direction))
        return;

    int proxImaX = hero.x;
    int proxImaY = hero.y;

    switch (direction)
    {
    case LEFT:
        proxImaY--;
        break;
    case UP:
        proxImaX--;
        break;
    case DOWN:
        proxImaX++;
        break;
    case RIGHT:
        proxImaY++;
        break;
    }

    if (!canWalk(&m, proxImaX, proxImaY))
        return;

    walkingBy(&m, hero.x, hero.y, proxImaX, proxImaY);
    hero.x = proxImaX;
    hero.y = proxImaY;
}

int main()
{
    createMap(&m);
    findMap(&m, &hero, HEROI);
    do
    {
        printMap(&m);

        char comand;
        scanf(" %c", &comand);
        move(comand);
        ghosts();

    } while (!finished());

    freeMap(&m);
}