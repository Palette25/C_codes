#include <stdio.h>
#include <string.h>
int main() {
  char str[1000];
  int cnt[26],i,j=0,W=0,max=0;
  for(i=0;i<26;i++)
    cnt[i]=0; 
    for(i=0;(str[i]=getchar())!=EOF;i++){
      if(str[i]==' '||str[i]=='\n') j=0;
      if(str[i]!=' '&&str[i]!='\n'){
       if(j==0) {j=1;W++;}
       cnt[str[i]-'a']++;}
}
   for(i=0;i<26;i++){
    if(cnt[i]>=max) max=cnt[i];}
  if(W>=max) max=W;
  for(j=max;j>=1;j--){
    printf("%d\t",j);
    for(i=0;i<26;i++){
      if(cnt[i]>0){
        if(cnt[i]>=j) printf("*");
        else printf(" ");}
}
    if(W>=j) printf("*");
    else printf(" ");
    printf("\n");
}
  printf(" \t");
  for(i=0;i<26;i++){
    if(cnt[i]>0) printf("%c",i+'a');
}
  printf("W\n");
  return 0;
}