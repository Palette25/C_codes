#include <stdio.h>
int main() {
   int num, i, j, k;
   int str[1000]={0};
   scanf("%d%d",&k,&num);
   for(i=0;num>0;i++){
       str[i]=num%k;
       num/=k;
}
   for(j=0;j<i;j++)
   	printf("%d",str[j]);
   printf("\n");
   return 0;
}