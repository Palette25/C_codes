#include <stdio.h>
int main() {
    int num, i, var[1000], j;
    int sum=0;
    scanf("%d",&num); 
    for(i=0;i<num;i++)
        scanf("%d",&var[i]);
    if(num<=2) printf("0\n");
    else {
        for(j=0;j<num-1;j++){
         for(i=0;i<num-1-j;i++){
         if(var[i]<var[i+1]){int t=var[i];var[i]=var[i+1];var[i+1]=t;}
}
}
         for(i=2;i<num;i+=3)
             sum+=var[i];
        printf("%d\n",sum);
}
    return 0;
}
