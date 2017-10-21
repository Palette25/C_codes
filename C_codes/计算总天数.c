#include <stdio.h>
int main() {
   int num, year, mon, day, i;
   scanf("%d",&num);
   for(i=0;i<num;i++){
   	int date=28;
   	scanf("%d%d%d",&year,&mon,&day);
   	if(mon<=2&&mon>0) printf("%d\n",(mon-1)*31+day);
   	else {
   		if(year%4==0&&year%100!=0||year%400==0) date=29;
   		switch(mon){
   			case 3: date=31+date+day; break;
   			case 4: date=31*2+day+date;break;
   			case 5: date=31*2+30+day+date;break;
   			case 6: date=31*3+30+day+date;break;
   			case 7: date=31*3+30*2+day+date;break;
   			case 8: date=31*4+30*2+day+date;break;
   			case 9: date=31*5+30*2+day+date;break;
   			case 10: date=31*5+30*3+day+date;break;
   			case 11: date=31*6+30*3+day+date;break;
   			case 12: date=31*6+30*4+day+date;break;
   			default: date=day;
   		}
   		printf("%d\n",date);
   	}
   }
   return 0;
}
