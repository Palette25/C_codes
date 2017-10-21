#include <stdio.h>
int main() {
    int N,i,q[100],j=0,k=0;
    char name[100][100],str[100][100];
    scanf("%d",&N);
    for(i=0;i<N;i++){
    	scanf("%d",&q[i]);
    	if(q[i]==1) {scanf("%s",&str[j]);j++;}
    	if(q[i]==2) {scanf("%s",&name[k]);k++;
    	printf("%s %s\n",name[k-1],str[j-1]);
    	j--;
}
}
    return 0;
}