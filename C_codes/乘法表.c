#include <stdio.h>
int main() {
   int a, b, i, j;
   scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++){
     for(j=1;j<=i;j++){
       if(j!=i) printf("%d*%d=%d ",j,i,i*j);
       else printf("%d*%d=%d\n",j,i,i*j);
}
}
   return 0;
}