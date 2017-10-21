#include <stdio.h>
int gcd(int m,int n){
    int t;
    if(m<n) {t=m;m=n;n=t;}
    if(n==0) return m;
    else return gcd(n,m%n);
}
int main() {
   int num[10], i, t;
   int var, j;
   scanf("%d",&var);
   for(j=0;j<var;j++){
     for(i=0;i<4;i++)
       scanf("%d",&num[i]);
       if(num[1]==0||num[3]==0){printf("Not A Number\n");continue;}
       t=gcd(num[0]*num[2],num[1]*num[3]);
       if(t==1) printf("%d/%d\n",num[0]*num[2],num[1]*num[3]);
       else {
       	if(num[0]*num[2]==0) {printf("0\n");continue;}
       	if((num[0]*num[2])%(num[1]*num[3])==0) {printf("%d\n",num[0]*num[2]/t);continue;}
       	else printf("%d/%d\n",num[0]*num[2]/t,num[1]*num[3]/t);
       }
}
   return 0;
}
