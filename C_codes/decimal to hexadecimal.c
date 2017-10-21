#include <stdio.h>
int main() {
    int num, i=0;
    int str[1000];
    scanf("%d",&num);
    if(num==0) printf("0");
    while(num){
       str[i]=num%16;
       num/=16;
       i++;
    }
    int sum=i;
    for(i=0;i<sum;i++){
       if(str[i]>=10) printf("%c",str[i]+55);
       else printf("%d",str[i]);
    }
    printf("\n");
    return 0;
}
