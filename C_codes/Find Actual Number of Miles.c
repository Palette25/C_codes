#include <stdio.h>
int main() {
	int num, tem;
	int sum=0, var=0, kia;
	while(scanf("%d",&num)!=EOF) {
		if(num==0) break;
		kia=1;
        tem=num;
        sum=0;
        while(tem>0) {
            var=tem%10;
            if(var > 8)  
                var-=2;  
           else if(var > 3)  
               var-=1;  
            sum+=var*kia;
            kia=kia*8;
            tem/=10;
        }
        printf("%d: %d\n",num, sum);
	}
	return 0;
}
