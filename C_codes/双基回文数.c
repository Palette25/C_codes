#include <stdio.h>
int multi(long long x,int k){
	int a[100], b[100], i;
	for(i=0;;i++){
		a[i]=x%k;
		x/=k;
		if(x==0) break;
}
        int t=i, j;
        for(j=t,i=0;j>=0;i++,j--)
        	b[i]=a[j];
        int tem=1;  
     for (i=0;;i++) {  
        if(i>(t/2)) break;  
        if (b[i]!=b[t-i])  {  
            tem=0;break;  
        } 
    }
	if(tem==1) return 1;
	else return 0;
}
int main() {
	int num, i;
	long long ver, k, j; 
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%ld",&ver);
		for(j=ver+1;j>=ver+1;j++){
			int flag=0;
			for(k=2;k<=10;k++){
		  if(multi(j,k)==1) flag++;
		  if(flag>=2) break;
}
          if(flag>=2) {
          	printf("%d\n",j);break;
          }
}
}
     return 0;
}