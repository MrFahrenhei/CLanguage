#define UP 'w'
#define DOWN 's'
#define RIGHT 'd'
#define LEFT 'a'

void move(char direction);
int finished();

int isDirection(char dir);

void ghosts();

int ghostAI(int nowX, int nowY, int *goX, int *goY);
