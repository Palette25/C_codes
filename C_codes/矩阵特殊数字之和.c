#include <stdio.h>
int main() {
   int sum, num, i, mode;
   scanf("%d",&sum);
   for(i=0;i<sum;i++){
   	int all=0, x, y;
   	scanf("%d",&num);
   	for(x=0;x<num;x++){
   		for(y=0; y<num;y++){
   		scanf("%d",&mode);
   		if(x==y||x+y==num-1) all+=mode;}
   }
   printf("%d\n",all);
}
   return 0;
}