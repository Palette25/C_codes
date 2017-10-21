#include <stdio.h>
int main(){
   char num[1000];
   int i, sum, num1[1000];
   scanf("%s",num);
   for(i=0;i<strlen(num);i++)
     num1[i]=num[i]-'0'; 
   for(i=0;i<strlen(num);i+=3){
      if(num1[i]==1) {
         sum=100+num1[i+1]*10+num1[i+2];
         printf("%c",sum-36);
      }
      else {
      	sum=num1[i+1]*10+num1[i+2];
      	if(num1[i+2]==0&&num1[i+1]==0) printf(" ");
        else printf("%c",sum+96);
      }
   }
   printf("\n");
   return 0;
}
