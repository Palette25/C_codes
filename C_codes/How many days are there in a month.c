#include<stdio.h>
int main(){
  int year, mon;
  scanf("%d%d",&year, &mon);
  if (year<0||year>9999||mon<1||mon>12) printf("Invalid Input Detected.\n");
  else{ 
  if (year%4==0&&(year%100!=0)||year%400==0){
     switch(mon){
	   case 2:  printf("%04d/%02d has 29 days.\n",year,mon);break;
	   case 4:
	   case 6:
	   case 9:
	   case 11: printf("%04d/%02d has 30 days.\n",year,mon);break;
	   default : printf("%04d/%02d has 31 days.\n",year,mon);
     }
}
  else {
     switch(mon){
	   case 2:  printf("%04d/%02d has 28 days.\n",year,mon);break;
	   case 4:
	   case 6:
	   case 9:
	   case 11: printf("%04d/%02d has 30 days.\n",year,mon);break;
	   default : printf("%04d/%02d has 31 days.\n",year,mon);
}
}
}
  return 0;
}