#include <stdio.h>
#include <math.h>
int main() {
  int mofa, dis, time, time_less;
  while(scanf("%d%d%d",&mofa,&dis,&time)!=EOF){
  	 int dis1=mofa/10*60+17*(time-mofa/10), dis2;
  	 if((mofa+4)/10>=time)  dis2=(time-1)*60;
  	 else dis2=(mofa+4)/10*60+17*(time-mofa/10-1);
  	 int dis_max=dis1>dis2?dis1:dis2;
     if(dis>dis_max)  printf("No\n%d\n",dis_max);
     else {
     	int time1=mofa/10+(dis-(mofa/10*60))/17;
     	if(dis<mofa/10*60) time1 = floor(dis/60);
     	int time2=1+(mofa+4)/10+(dis-((mofa+4)/10*60))/17;
     	if(dis<(mofa+4)/10*60) time2=floor(dis/60);
     	if(time1>time2) time_less=floor(time2+1);
     	else time_less=floor(time1+1);
     	if(dis%60==0) time_less--;
     	printf("Yes\n%d\n",time_less);
     }
  }
  return 0;
}
