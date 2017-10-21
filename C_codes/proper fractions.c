#include <stdio.h>
int gcd(int x,int y)
{
return y?gcd(y,x%y):x;
}
int main(){
	int N;
	double M,i,j;
	scanf("%d%lf",&N,&M);
	for(j=2;j<=N;j++){
		for(i=1;i<N;i++){
			if(gcd(i,j)==1&&(i/j)<=M)  printf("%d/%d\n",(int)i,(int)j);
			else continue;
}
}
	return 0;
}
