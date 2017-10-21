#include <stdio.h>
int mod(char * s, int mod_num, long long len){
	int sum=0, i;
	for(i=0;i<len;i++){
		sum=sum*10+s[len-1-i]-'0';
		sum%=mod_num;
}
	return sum;
}
int main() {
    int num, i, j, k, m;
    scanf("%d",&num);
    for(i=0;i<num;i++){
       int var;
       long long sum=0;
	   char str[10000];
       scanf("%d %s",&var,str);
       long long len=strlen(str);
       printf("%d\n",mod(str, var, len));
    }
    return 0;
}
