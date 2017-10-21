#include <stdio.h>
int main() {
	int T,i,j,num=0;
	scanf("%d",&T);
	int str[100][100]={0}; 
	for(j=0;j<T/2;j++){
		for(i=j;i<T-j;i++)
		str[j][i]=++num;
		for(i=j+1;i<T-j;i++)
		str[i][T-j-1]=++num;
		for(i=T-j-2;i>j;i--)
		str[T-j-1][i]=++num;
		for(i=T-j-1;i>j;i--)
		str[i][j]=++num;
	}
	if(T%2!=0) str[T/2][T/2]=T*T;
	for(i=0;i<T;i++){
		for(j=0;j<T;j++)
		{if(j==T-1) printf("%d",str[i][j]);
		else   printf("%d ",str[i][j]);}
		printf("\n");
	}
	return 0;
}