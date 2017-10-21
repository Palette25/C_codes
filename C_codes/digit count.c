#include <stdio.h>
int main() {
	int num,i;
	int j,tem,str[100],k;
	int as;
	scanf("%d",&num);
	for(i=0;i<num;i++){
	for(k=0;k<100;k++)
	    str[k]=0;
		scanf("%d",&tem);
		for(j=1;j<=tem;j++){
		as = j;
		if(j<10) str[j]++;
		else {
			while(as){
				str[as%10]++;
				as=as/10;
			}
		}
}
        for(k=0;k<10;k++){
        if(k<9) printf("%d ",str[k]);
        else printf("%d\n",str[k]);}
}
	return 0;
}