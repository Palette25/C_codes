#include <stdio.h>
int fb(int num) {
	int i, sum[1000];
	for(i=0;i<num;i++){
       if(i==0||i==1) sum[i]=1;
       else sum[i]=sum[i-1]+sum[i-2];
	}
	return (sum[num-1]);
}
int main() {
	int num;
	while(scanf("%d",&num)!=EOF&&num!=-1){
		 int a=2*fb(num);
		 printf("%d\n",a);
	}
	return 0;
}
