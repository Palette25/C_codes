/*#include <stdio.h>
#include <stdlib.h>
#include "snake2.h"

int main() {
	int i, j;
    putfood();
	for(i=0;i<12;i++){
		for(j=0;j<12;j++)
		  printf("%c",map[i][j]);
		printf("\n");
	}//首先输出原始地图，输出初始化矩阵 
	//输出字符矩阵
	int dx = 5, dy = 1;
	char ch;
	//WHILE not 游戏结束 DO
	while(dx > 0&&dx < 11&&dy > 0&&dy < 11&&map[dy][dx] != 'X'&&kbhit()==0) {
		// ch = 等待输入
		ch = getch();
		// CASE ch DO
		switch(ch) {
			// 'A':左移一步，break；
			case 'A':
			  dx--;
				break;
			// 'D':右移一步，break；
			case 'D':
			  dx++;
				break;
			// 'W':上移一步，break；
			case 'W':
			  dy--;
				break;
			// 'S':下移一步，break；
			case 'S':
			  dy++;
				break;		
		}
		if(dx==foodx&&dy==foody) {
		putfood();
		if(len<20) {
		len+=1;}
	}
	// END CASE	
	if(dx <= 0||dx >= 11||dy <= 0||dy >= 11||map[dy][dx] == 'X')  break;
	else {
		snakeMove(dx, dy);
	  //输出字符矩阵
	  map[0][0]='*';
	  output();
		}
	}//END WHILE	
	//输出Game Over!!!
	gameover();
	return 0;
}
   
//蛇移动的函数
void snakeMove(int dx, int dy) {
	int i;
	map[snakey[0]][snakex[0]] = ' ';
	for(i = 0;i < len-1;i++) {
		snakex[i] = snakex[i+1];
		snakey[i] = snakey[i+1];
		map[snakey[i]][snakex[i]] = 'X';
	}
	snakex[len-1] = dx;
	snakey[len-1] = dy;
	map[snakey[len-1]][snakex[len-1]] = 'H';
	system("cls");
}
//输出地图的函数
void output(void) {
	int i,j;
	for(i=0;i<12;i++){
		for(j=0;j<12;j++)
		  printf("%c",map[i][j]);
		printf("\n");
	}
}
//游戏结束时输出gameover
void gameover(void) {
	printf("Game Over!!!\n");
}
//随机生成食物的函数
void putfood(void) {
	srand(time(0));
	while(1){
	foodx=rand()%12;
	foody=rand()%12;
    if(map[foody][foodx]==' '){
    	map[foody][foodx]='$';
    	break;
    }
    else continue;
}
}
*/
#include /*09*/<stdio.h>
int main() {
	char a,b;
	
	a=getchar();
	++a -= !!!!a;
	printf("%c",a);
	return 0;
}
