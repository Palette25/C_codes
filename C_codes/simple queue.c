#include <stdio.h>
int main() {
	int str[100], i=0, zhan[100]={0}, j=0, sum=0, sum1=0;
	while(scanf("%d",&str[i])!=EOF){
		int k;
		if(str[i]==1) {
		  scanf("%d",&k);
		  if(sum1>=10) printf("Push Failed. The queue is full.\n");
		  else {
		  zhan[j++]=k;
		  sum1++;}
}
		else {
		 if(sum1<=0||zhan[sum]==0) printf("Pop Failed. The queue is empty.\n");
		 else {printf("%d\n",zhan[sum++]);sum1--;}
		}
		i++;
	}
	return 0;
}