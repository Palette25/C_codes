#include <stdio.h>
#include <stddef.h>
    char map[15][15], moo[100];
    int human_x = 0, human_y = 0;
void readMap(const size_t map_size) {
     int i, j;
     for(i=0;i<map_size+2;i++){
        for(j=0;(map[i][j]=getchar())!='\n';j++){
            if(map[i][j]=='A') {
                human_x=j;human_y=i;
            }
        }
     }
}
void printMap(const size_t map_size) {
    int i, j;
    for(i=0;i<map_size+2;i++){
        for(j=0;j<map_size+2;j++)
            printf("%c",map[i][j]);
        printf("\n");
    }
}
void move(size_t map_size, int *is_alive, int *is_stop) {
    int len=0, str=0, stop=0;
    if(*is_alive!=0) {
        if(*is_stop=='a') len=-1;
        if(*is_stop=='d') len=1;
        if(*is_stop=='w') str=-1;
        if(*is_stop=='s') str=1;
            if(map[human_y+str][human_x+len]=='$') *is_alive=0;
            if(map[human_y+str][human_x+len]=='*') {
                int human_y1=human_y, human_x1=human_x, flag=0;
                if(len==-1) human_x+=map_size-1;
                if(len==1) human_x-=map_size-1;
                if(str==-1) human_y+=map_size-1;
                if(str==1) human_y-=map_size-1;
                if(map[human_y][human_x]=='$') *is_alive=0;
                if(map[human_y][human_x]=='@') {
                    map[human_y][human_x]='A';
                    if(*is_alive!=2) map[human_y1][human_x1]=' ';
                    getchar();
                    printMap(map_size);
                    getchar();
                    printMap(map_size);
                    stop=1;
                    *is_alive=2;
                }
                if(map[human_y][human_x]!='#'&&*is_alive!=2&&map[human_y][human_x]!=' ') {
                map[human_y][human_x]='A';
                map[human_y1][human_x1]=' ';
            }
                if(map[human_y][human_x]==' '&&*is_alive==2) {
                    map[human_y1][human_x1]='@';
                    map[human_y][human_x]='A';
                    *is_alive=1;
                }
                if(map[human_y][human_x]==' '&&*is_alive!=2) {
                    map[human_y][human_x]='A';
                map[human_y1][human_x1]=' ';
                }
            if(map[human_y][human_x]=='#') {
                    human_y=human_y1;
                    human_x=human_x1;
                }
            }
            else if(map[human_y+str][human_x+len]==' ') {
                if(*(is_alive)==2) {
                map[human_y][human_x]='@';
                *(is_alive)=1;}
                else map[human_y][human_x]=' ';
                human_x+=len;
                human_y+=str;
                map[human_y][human_x]='A';
            }
            else if(map[human_y+str][human_x+len]=='@') {
                map[human_y][human_x]=' ';
                human_x+=len;
                human_y+=str;
                map[human_y][human_x]='A';
                getchar();
                printMap(map_size);
                getchar();
                printMap(map_size);
                stop=1;
                *is_alive=2;
            }
    }
    if(stop==0&&*is_alive>0) printMap(map_size);
}
int main() {
    int size;
    scanf("%d\n",&size);
    readMap(size);
    int k=0, live=1;
    while(scanf("%c",&moo[k])!=EOF){
        if(moo[k]=='\n') continue;
        move(size, &live, &moo[k]);
        if(live==0) {
        printf("Game Over!\n");
        break;}
        k++;
    }
  return 0;
}