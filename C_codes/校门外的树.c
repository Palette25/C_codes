#include <stdio.h>
int main() {
	int len, num, i, j;
	int start, end, sum=0;
	int flag[10000]={0};
	scanf("%d%d",&len,&num);
	for(i=0;i<num;i++){
		scanf("%d%d",&start,&end);
		for(j=start;j<=end;j++){
			if(flag[j]==0) {flag[j]=-1;sum++;}
			else continue;
		}
	}
	printf("%d\n",len-sum+1);  
	return 0;
}