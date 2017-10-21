#include <stdio.h>
int main() {
  char tear[100];
  int result=0,i;
  scanf("%s",&tear);
  int len=strlen(tear);
  for(i=0;i<len;i++){
    result+=tear[i]-'0';
  }
  if(result<3) printf("Issac\n");
  else{
  if(result%3==0) printf("God\n");
  else printf("Issac\n");}
  return 0;
}