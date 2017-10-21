#include <stdio.h>
#include <math.h>
int main() {
    int num1, num2;
    scanf("%d%d",&num1,&num2);
    printf("%d\n%d\n%d\n",num1+num2,num1-num2,num1*num2);
    if(num2==0) printf("Error\n");
    else printf("%.2f\n",(float)num1/num2);
    printf("%.2f\n",sqrt(num1));
    return 0;
}
