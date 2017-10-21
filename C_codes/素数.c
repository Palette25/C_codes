#include<stdio.h>
#include<math.h>
int main()
{
   int m,i,k;
   scanf("%d",&m);
   k=(int)sqrt(m);
   for(i=2;i<=k;i++)
      if(m%i==0)
         break;
   if(m!=1){     
   if(i>k)
       printf("Yes\n");
    else
       printf("No\n");
	   }
    if(m==1) printf("No\n");
       return 0; 
}

