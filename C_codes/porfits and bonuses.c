#include <stdio.h>
int main() {
   int num, pro, i;
   scanf("%d",&num);
   for(i=0;i<num;i++){
      scanf("%d",&pro);
      int c = pro/100000;
      switch(c){
         case 0 : printf("%.0f\n",floor(0.1*pro+0.5));break;
         case 1 : printf("%.0f\n",floor(10000+(pro-100000)*0.075+0.5));break;
         case 2 : 
         case 3 : printf("%.0f\n",floor(17500+(pro-200000)*0.05+0.5));break;
         case 4 :
         case 5 : printf("%.0f\n",floor(27500+(pro-400000)*0.03+0.5));break;
         case 6 :
         case 7 :
         case 8 :
         case 9 : printf("%.0f\n",floor(33500+(pro-600000)*0.015+0.5));break;
         default : printf("%.0f\n",floor(39500+(pro-1000000)*0.01+0.5));
      }
   }
   return 0;
}
