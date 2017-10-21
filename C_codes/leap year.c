#include <stdio.h>
int main() {
    char str[1000];
    int i=0;
    scanf("%[^\n]",str);
    for(i=0;i<strlen(str);i++){
    	if(str[i]>=65&&str[i]<=90) printf("%c",str[i]+32);
    	else if(str[i]==' '||str[i]=='\t') continue;
		     else printf("%c",str[i]);
    }
    return 0;
}
