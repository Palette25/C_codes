#include <stdio.h>
int main()
{
    int num, tem, N, i;
    int sum;
    scanf("%d",&N);
    for(i=0;i<N;i++){
    scanf("%d",&num);
    tem = num;
    sum=0;
    while(num){
        sum = sum*10 + num%10; 
        num /= 10;
    }
    if(tem == sum) 
        printf("Yes\n");
    else
        printf("No\n");
	}
    return 0;
}