#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include <string.h>

void copyMap(MAPA *go, MAPA *origin)
{
    go->line = origin->line;
    go->colum = origin->colum;

    mallocMap(go);
    for (int i = 0; i < origin->line; i++)
    {
        strcpy(go->matriz[i], origin->matriz[i]);
    }
}

void walkingBy(MAPA *m, int xOrigin, int yOrigin, int xGo, int yGo)
{
    char boneco = m->matriz[xOrigin][yOrigin];
    m->matriz[xGo][yGo] = boneco;
    m->matriz[xOrigin][yOrigin] = EMPITY;
}

int itValid(MAPA *m, int x, int y)
{
    if (x >= m->line)
        return 0;
    if (y >= m->colum)
        return 0;

    return 1;
}

int isEmpity(MAPA *m, int x, int y)
{
    return m->matriz[x][y] == EMPITY;
}

int findMap(MAPA *m, POV *p, char c)
{
    for (int i = 0; i < m->line; i++)
    {
        for (int j = 0; j < m->colum; j++)
        {
            if (m->matriz[i][j] == c)
            {
                p->x = i;
                p->y = j;
                return 1;
            }
        }
    }
    return 0;
}

int canWalk(MAPA *m, int x, int y)
{
    return itValid(m, x, y);
    isEmpity(m, x, y);
}

void freeMap(MAPA *m)
{
    for (int i = 0; i < m->line; i++)
    {
        free(m->matriz[i]);
    }
    free(m->matriz);
}

void mallocMap(MAPA *m)
{
    m->matriz = malloc(sizeof(char *) * m->line);
    for (int i = 0; i < m->line; i++)
    {
        m->matriz[i] = malloc(sizeof(char) * (m->colum + 1));
    }
}

void createMap(MAPA *m)
{
    FILE *f;
    f = fopen("map.txt", "r");
    if (f == 0)
    {
        printf("Erro na leitura do mapa\n");
        exit(1);
    }

    fscanf(f, "%d %d", &(m->line), &(m->colum));
    printf("linhas %d colunas %d\n", m->line, m->colum);

    mallocMap(m);

    for (int i = 0; i < 5; i++)
    {
        fscanf(f, "%s", m->matriz[i]);
    }
    fclose(f);
}

void printMap(MAPA *m)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", m->matriz[i]);
    }
}