#include <stdio.h>
#include <math.h>
void add(char a[], char b[], char c[]){
    long long i, sum1=0, sum2=0, j;
    if(a[0]=='0'&&b[0]=='0') c[0]='0';
    else{
    for(i=0;a[i]!='\0';i++)
        sum1+=(a[i]-'0')*pow(10,strlen(a)-i-1);
    for(i=0;b[i]!='\0';i++)
        sum2+=(b[i]-'0')*pow(10,strlen(b)-i-1);
    i=-1;
    long long sum=sum1+sum2;
    while(sum){
        c[++i]=sum%10+'0';
        sum/=10;
}
    for(j=0;j<=i/2;j++){
     int t=c[j];
     c[j]=c[i-j];
     c[i-j]=t;
 }
}
}
int main() {
  char lhs[8] = {}, rhs[8] = {}, sum[10] = {};
  scanf("%s %s", lhs, rhs);
  add(lhs, rhs, sum);
  printf("%s\n", sum);
  return 0;
}
