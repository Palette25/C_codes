#include <stdio.h>
int main() {
   int num, i, height[1000];
   int width[1000], cases;
   scanf("%d",&num);
   for(i=0;i<num;i++){
   	int  sum1=0, sum2=0;
   	scanf("%d",&cases);
   	for(int j=0;j<cases;j++)
   		scanf("%d%h",&height[j],&width[j]);
   	for(j=0;j<cases-1;j++){
   		sum1+=height[j];
   		sum2+=width[j];
}
   	if(sum1<height[cases-1]||sum2<width[cases-1])
   		printf("No\n");
   	else printf("Yes\n");
}
   return 0;
}
