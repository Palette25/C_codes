#include <stdio.h>
int main() {
  long long n, m;
  scanf("%lld%lld",&n,&m);
  long long i, c=m;
  n=n*365%400009;
  m=1;
  for(i=0;i<c*365;i++)
  	 m=m%400009*2;
   if(m-n<0) printf("%d\n",m-n+400009);
   else printf("%d\n",(m-n)%400009);
   return 0; 
}
