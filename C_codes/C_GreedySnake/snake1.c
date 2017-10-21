#include <stdio.h>
#include <stdlib.h>
#include "snake1.h"

int main() {
	int i, j;
	for(i=0;i<12;i++){
		for(j=0;j<12;j++)
		  printf("%c",map[i][j]);
		printf("\n");
	}//首先输出原始地图，输出初始化矩阵 
	//输出字符矩阵
	int dx = 5, dy = 1;
	char ch;
	//WHILE not 游戏结束 DO
	while(dx > 0&&dx < 11&&dy > 0&&dy < 11&&map[dy][dx] != 'X') {
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
	// END CASE	
	if(dx <= 0||dx >= 11||dy <= 0||dy >= 11||map[dy][dx] == 'X')  break;
	else {
		snakeMove(dx, dy);
	  //输出字符矩阵
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
	for(i = 0;i < 4;i++) {
		snakex[i] = snakex[i+1];
		snakey[i] = snakey[i+1];
		map[snakey[i]][snakex[i]] = 'X';
	}
	snakex[4] = dx;
	snakey[4] = dy;
	map[snakey[4]][snakex[4]] = 'H';
}
//输出地图的函数
void output(void) {
	int i,j;
	for(i=0;i<12;i++){
		for(j=0;j<12;j++)
		  printf("%c",map[i][j]);
		printf("\n");
	}
	system("cls");
}
//游戏结束时输出gameover
void gameover(void) {
	printf("Game Over!!!\n");
}