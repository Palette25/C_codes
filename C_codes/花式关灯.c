#include <stdio.h>
int main() {
	int num, x, y, i=0;
	scanf("%d%d%d",&num,&x,&y);
	int flag[50]={0}, sum=num-1;
	printf("%d ",x);
	flag[x]--;
	while(sum>0) {
		if(x+1>=num) x=x+1-num;
		else x=x+1;
		if(flag[x]==0) i++; 
		if(i==y) {
		    flag[x]--;
			printf("%d ",x);
			sum--;
			i=0;
}
}
	printf("\n");
	return 0;
}