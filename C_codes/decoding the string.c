#include <stdio.h>
#include <string.h>
int main() {
	char str[1000];
	int i,j,k;
	scanf("%s",str);
	for(i=0;i<strlen(str);i++){
	 if(str[i]>57||str[i]<48){
	  if(str[i+1]>=48&&str[i+1]<=57){
		if(str[i+2]>=48&&str[i+2]<=57){
		 if(str[i+3]>=48&&str[i+3]<=57){
		 for(j=0;j<(100*str[i+1]+10*str[i+2]+str[i+3]-111*'0')%7+1;j++)
		 printf("%c",str[i]);
		 continue;
		 	}
	for(j=0;j<(str[i+2]+10*str[i+1]-11*'0')%7+1;j++)
	printf("%c",str[i]);
	continue;
}
   if(str[i+1]>55) k=(str[i+1]-'0')%7+1;
   else k=str[i+1]-'0';
	for(j=0;j<k;j++)
	printf("%c",str[i]);
}
	else printf("%c",str[i]);
}
}
   printf("\n");
	return 0;
}