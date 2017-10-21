#include <stdio.h>
int main() {
	int T,card,buc[10],i,j=0;
	long long sum=0;
	for(i=0;i<10;i++)
     buc[i]=0;
	scanf("%d",&T);
	for(i=0;i<T;i++){
	  scanf("%d",&card);
	  buc[card]++;
	  if(card==0) j++;
	  sum+=card;
}
    if(sum%3!=0||j==0||sum==0) printf("no such number\n"); 
    else {
    	for(i=9;i>=0;i--){
    		for(j=0;j<buc[i];j++)
    		printf("%d",i);
    	}
    printf("\n");
}
	return 0;
}