#include <stdio.h>
int main() {
   int N, V, i, time=0;
   scanf("%d%d",&N,&V);
   for(i=0;i<N;i++){
   	int dis, oil;
   	scanf("%d%d",&dis,&oil);
   	if(dis>V) {
   		printf("No\n");
   		time++;
   		break;
}
   	else if(oil<=dis) V+=oil-dis;
}
   if(V>=0&&time==0) printf("Yes\n");
   return 0;
}