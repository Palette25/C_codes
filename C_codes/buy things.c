#include<stdio.h>
 int main(){
     int money,num_item;
     scanf("%d%d",&money,&num_item);
     int price[1000],i,answer[100];
     for(i=0;i<num_item;i++){
        scanf("%d",&price[i]);
}
     int k=0;
     i=0;
     while(scanf("%d",&answer[i])!=EOF){
       k++;
       i++;}
     for(i=0;i<k+2;i++){
       if(answer[i]==-1) break;
       if(answer[i]>=0&&answer[i]<10){
         money=money-price[answer[i]];
         if(money>=0) {printf("You have %d yen now.\n",money);}
         if(money<0) { printf("BAKA!\n"); break;}
}
       if(answer[i]==10) { printf("Ihen!\n");break;}
}
    printf("Bye.\n");
    return 0;
}