#include <stdio.h>
int main() {
   char str[1000];
   int i;
   for(i=0;(str[i]=getchar())!='\n';i++){
   	if(str[i]>=65&&str[i]<=90) printf("%d",str[i]+36);
    if(str[i]==' ') printf("000");
    if(str[i]>=97&&str[i]<=122) printf("%03d",str[i]-96);
}
   printf("\n");
   return 0;
}