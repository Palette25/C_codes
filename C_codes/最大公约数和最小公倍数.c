#include <stdio.h>

int GCD(int m,int n){
	int t;
	if(n==0) return m;
	else return GCD(n, m%n);
}
int LCM(int m,int n){
	return n*m;
}
int main() {
	int m, n, k;
    scanf("%d%d",&m,&n);
    if(m<n) {
    	int t=m; m=n; n=t;
    }
    if(m>0&&n>0){
	  if(m%n==0) k=n;
	  else k=GCD(m,n);
	  printf("%d %d\n",GCD(m,n),LCM(m,n)/k);
	}
	else printf("invalid\n");
    return 0;
}