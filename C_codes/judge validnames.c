#include <stdio.h>
int main() {
    char str[1000];
    int num, i, j, sum=0;
    scanf("%d",&num);
    for(i=0;i<num;i++){
       sum=0;
       scanf("%s",str);
       for(j=0;j<strlen(str);j++){
           if(str[j]<=47||str[j]>=58&&str[j]<=64||str[0]>=48&&str[0]<=57||str[j]>=91&&str[j]<=96&&str[j]!='_'){
       	     printf("No\n");
             break;}
           else sum++;
}
        if(sum==strlen(str))  printf("Yes\n");              
}
    return 0;
}
