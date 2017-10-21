#include <stdio.h>
int main() {
   int sum, num, i;
   int fac, len=0, j;
   scanf("%d",&sum);
   for(i=0;i<sum;i++){
   	int num_c=0,a[1000]={0};
   	len=0;
   	scanf("%d%d",&num,&fac);
   	while(num>0){
   		a[len]=num%10;
   		num_c=num_c*10+num%10;
   		num/=10;
   		len++;
   	}
   	for(j=0;j<len;j++)
   		printf("%d",a[j]);
   	printf(" %d\n",num_c%fac);
   }
   return 0;
}