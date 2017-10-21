#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SNAKE_MAX_LENGTH 20
#define SNAKE_HEAD 'H'
#define SNAKE_BODY 'X'
#define BLANK_CELL ' '
#define SNAKE_FOOD '$'
#define WALL_CELL '*'

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
int snakex[SNAKE_MAX_LENGTH]={1,2,3,4,5};
int snakey[SNAKE_MAX_LENGTH]={1,1,1,1,1};
int len = 5, snakelife=1, i, j;
int foodx=0, foody=0, flag=0, dx=0, dy=0;
char getmove;

void snakemove(int dx, int dy);
void putfood(void);
void output(void);
void gameover(void); 
void begin(void);

void begin(void) {
	putfood();
	for(i=0;i<12;i++){
		for(j=0;j<12;j++)
		  printf("%c",map[i][j]);
		printf("\n");
	}
}
void snakemove(int dx, int dy){
	int temx=0, temy=0;
	 while(snakelife==1&&kbhit()!=0){
	 	getmove=getch();
	 	for(i=0;i<=len-2;i++){
    		snakex[i]=snakex[i+1];
    		snakey[i]=snakey[i+1];
    	}
    	switch(getmove){
    		case 'A': 
    		    snakex[len-1]-=1;
    		    temx=-1;
    		   break;
    		case 'D':
    		   	snakex[len-1]+=1;
    		   	temx=1;
    		   	break;
    		case 'W':
    		   snakey[len-1]-=1;
    		   temy=-1;
    		   break;
    		case 'S':
    		   snakey[len-1]+=1;
    		   temy=1;
    		   break;
    	}
    	gameover();
    	for(i=1;i<11;i++){
	 	for(j=1;j<11;j++)
	 	  map[i][j]=' ';
	 }
	    map[foody][foodx]='$';
    	if(snakey[len-1]==foody&&snakex[len-1]==foodx) {
    		len+=1;
    		for(i=len-2;i>=1;i--){
    			snakex[i]=snakex[i-1];
    			snakey[i]=snakey[i-1];
    		}
    		snakex[0]-=temx;
    		snakey[0]-=temy;
    		snakex[len-1]=snakex[len-2]+temx;
    		snakey[len-1]=snakey[len-2]+temy;
    		putfood();
}
    	for(i=0;i<len;i++){
    		if(i==len-1) map[snakey[i]][snakex[i]]='H';
    		else map[snakey[i]][snakex[i]]='X';
    	}
}
}
void putfood(void){
        	srand(time(0));
        	while(1){
             foodx=rand()%12;
             foody=rand()%12;
             if(map[foodx][foody]==' ') {
             	 map[foodx][foody]='$';
             	 break;
             }
             else continue;
        }
}
void output(void) {
	int i=0, j=0;
	while(1) {
		snakemove(dx,dy);
		if(snakelife==0) {
			printf("Game Over!\n");
			break;
		}
		_sleep(200);
	system("cls");
     for(i=0;i<12;i++){
         for(j=0;j<12;j++)
         	printf("%c",map[i][j]);
         printf("\n");
     }
	}
}
void gameover(void) {
	for(i=0;i<len;i++){
	if(snakex[i]<1||snakey[i]<1||snakex[i]>=11||snakey[i]>=11)
	   snakelife=0;
}
}
int main() {
	begin();
	output();
    return 0;
}

