#define SNAKE2_H
//宏定义
#define SNAKE_MAX_LENGTH 20
#define SNAKE_HEAD 'H'
#define SNAKE_BODY 'X'
#define BLANK_CELL ' '
#define SNAKE_FOOD '$'
#define WALL_CELL '*'
//地图初始化
void snakeMove(int, int);
void output(void);
void gameover(void);
void putfood(void);
//初始化各个函数
char map[12][12]=
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
//对蛇身，蛇头的坐标数组初始化
int snakex[SNAKE_MAX_LENGTH]={1,2,3,4,5};
int snakey[SNAKE_MAX_LENGTH]={1,1,1,1,1};
//对蛇的长度，食物坐标等初始化
int len = 5, i, j;
int foodx=0, foody=0, flag=0, dx=0, dy=0;
char getmove;
