#define SNAKE1_H
#define SNAKE_MAX_LENGTH 20
#define SNAKE_HEAD 'H'
#define SNAKE_BODY 'X'
#define SNAKE_CELL ' '
#define SNAKE_FOOD '$'
#define WALL_CELL '*'

void snakeMove(int, int);
void output(void);
void gameover(void);

char map[13][13] = 
	{"************",
	"*XXXXH     *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"************"}; 
//初始化蛇身，蛇头坐标数组
int snakex[SNAKE_MAX_LENGTH] = {1, 2, 3, 4, 5};
int snakey[SNAKE_MAX_LENGTH] = {1, 1, 1, 1, 1};
