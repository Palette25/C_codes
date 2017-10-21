#include <stdio.h>
#include <math.h>
int main() {
    int num, x, i, sum=0;
    scanf("%d%d",&num,&x);
    for(i=0;i<num;i++){
       int abs, ges;
       scanf("%d%d",&abs,&ges);
       sum+=abs*ges*pow(x,ges-1);
}
    printf("%d\n",sum);
    return 0;
}
