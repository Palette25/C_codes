/*#include <stdio.h>
void swap(int *m, int *n){
     int t;
     t=*m;*m=*n;*n=t;
}
void quanpai(int arr[], int i, int n) {
    int j, k;
    if(i == n) {
        for(k = 0;k <= n;k++){
        	if(k == n) printf("%d\n",arr[k]);
        	else printf("%d ",arr[k]);
        }
    } 
	else {
        for (j = i; j <= n; j++) {
            swap(&arr[i],&arr[j]);
            quanpai(arr,i+1,n);
			if(i==1&j<n) continue;
			else swap(&arr[i],&arr[j]);
        }
    }   
}
int main() {
	int num, i, j, k;
	scanf("%d",&num);
	int var[9];
	for(i=0;i<num;i++){
		var[i]=i+1;
	}
	quanpai(var, 0, num-1);
	return 0;
}*/
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
int a[10],p[10],vis[10];
int n;  
void quanpai(int num){  
   int i;  
    if(num>n){  
      for(i=1;i<n;i++)
         printf("%d ",p[i]);  
      printf("%d\n",p[n]);  
}  
  for(i=1;i<=n;i++){  
        if(!vis[a[i]]){  
            p[num]=a[i];  
           vis[a[i]]=1;  
            quanpai(num+1);  
           vis[a[i]]=0;  
     }  
    }  
}  
int main()  
{  
   int i;  
    scanf("%d",&n);  
   for(i=1;i<=n;i++)
       a[i]=i;
	for(i=0;i<10;i++)
	  vis[i]=0;  
    quanpai(1);  
    return 0;  
}  

