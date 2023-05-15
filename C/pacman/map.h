#define HEROI '@'
#define GHOST 'F'
#define EMPITY '.'
#define WALL1 '|'
#define WALL2 '-'

struct map
{
    char **matriz;
    int line;
    int colum;
};

typedef struct map MAPA;

struct position
{
    int x;
    int y;
};
typedef struct position POV;

void freeMap(MAPA *m);
void createMap(MAPA *m);
void mallocMap(MAPA *m);
void printMap(MAPA *m);
int findMap(MAPA *m, POV *p, char c);

int itValid(MAPA *m, int x, int y);
int isEmpity(MAPA *m, int x, int y);
void walkingBy(MAPA *m, int xOrigin, int yOrigin, int xGo, int yGo);

void copyMap(MAPA *go, MAPA *origin);

int canWalk(MAPA *m, int x, int y);