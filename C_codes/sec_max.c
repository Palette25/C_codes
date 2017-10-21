#include<stdio.h>
int main() {
  int T, arr[10000],i,j,a[10000],b[10000];
  int max=0,sec_max=0;
  scanf("%d",&T);
  for(i=0;i<=T-1;i++){
    scanf("%d",&arr[i]);
    for(j=0;j<=arr[i]-1;j++){
    scanf("%d",&a[j]);
    }
    if(a[0]>a[1])  {max=a[0];sec_max=a[1];}
    if(a[0]<=a[1]) {max=a[1];sec_max=a[0];}
    for(j=2;j<=arr[i]-1;j++){
    if (a[j]>=max) {
    sec_max=max;
    max=a[j];
}
   else if(a[j]>=sec_max){
   sec_max=a[j];
}
}
  b[i]=sec_max;
}
    for(i=0;i<=T-1;i++)
	 printf("%d\n",b[i]);  
	return 0;
} 