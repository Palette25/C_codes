 #include <stdio.h>
int main() {
	int sum, n, m, i, j, k;
	scanf("%d",&sum);
	for(i=0;i<sum;i++){
		int n1, n2, n3;
		int num[100];
		scanf("%d%d",&n,&m);
		for(j=0;j<n;j++)
			num[j]=j+1;
		for(j=0;j<m;j++){
        scanf("%d%d%d",&n1,&n2,&n3);
        if(n1==1) {
        for(k=n2-1;k<n3-2;k++)
         num[k]=num[k+1];
        num[n3-2]=n2;
		}
        else {
        if(n2==1) {
        for(k=0;k<n3-1;k++)
          num[k]=num[k+1];
            	}
        else for(k=n2-2;k<n3-1;k++)
          num[k]=num[k+1];
          num[n3-1]=n2;
		}
}
		for(k=0;k<n;k++)
			 printf("%d ",num[k]);
    printf("\n");
        }
	return 0;
}
