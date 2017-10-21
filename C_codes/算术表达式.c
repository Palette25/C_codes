#include <stdio.h>
int main() {
   char str[1000], oper[1000];
   int num[1000], i, j=0, k=0, sum=0;
   scanf("%s",str);
   int flag[1000]={0};
   for(i=0;i<strlen(str);i++){
   	   if(str[i]>='0'&&str[i]<='9') num[j]=str[i]-'0';
   	   else {
   	   oper[k]=str[i];
   	   j++;
}
   }
   for(i=k;i>=0;i--){
   	if(oper[i]='*') sum+=num[i]*num[i+1]%10000;
    flag[i]=flag[i+1]=-1;
}
   for(i=j;i>=0;i--){
   	  if(flag[i]==0) sum+=num[i];
   }
   printf("%d\n",sum%10000);
   return 0; 
}
