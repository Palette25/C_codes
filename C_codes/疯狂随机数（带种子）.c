#include <stdio.h>
#include <stdlib.h>
int main() {
	int num, ini, seed, seed_1, col;//初始化种子 
	int str[2][100];//定义一个二维数组 
	scanf("%d",&num);//输入所有数字个数 
	for(ini=0;ini<num;ini++){
		scanf("%d",&str[0][ini]);
		str[1][ini]=str[0][ini];
	}//输入str1数组，并将其复制到str2中 
	scanf("%d",&seed);
	srand(seed);//关键在于此步，种下输入的种子 
	for(col=0;col<2;col++){
	  for(ini=num-1;ini>0;ini--){
		seed_1=rand()%(ini+1);//对于每次循环，重新获得随机数 
		int tar=str[col][ini];//以下为交换过程 
		str[col][ini]=str[col][seed_1];
		str[col][seed_1]=tar;
}//结束随机 
}
    for(col=0;col<2;col++){
	  printf("\{");//必备的大括号 
	  for(ini=0;ini<num;ini++){//输出str1的过程 
	    if(ini==num-1) printf("%d",str[col][num-1]);
		else printf("%d, ",str[col][ini]);
}   printf("\}\n");//接下来就是str2的交换过程 
}//呼呼，结束了 
	return 0;//为什么要写那么多注释呢 
}