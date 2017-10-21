#include <stdio.h>
int main() {
	int num1, i, num2, j, k, m;
	int height[10], width[10];
	scanf("%d",&num1);
	for(i=0;i<num1;i++){
		int flag1=0, flag2=0, flag3=0;
		scanf("%d",&num2);
		for(j=0;j<num2;j++)
		  scanf("%d%d",&height[j],&width[j]);
		for(j=0;j<num2;j++){
			flag1=0;flag2=0;
			for(k=j+1;k<num2;k++){
				int a=height[j], b=width[j];
				if(height[k]==a||width[k]==a) flag1++;
				if(height[k]==b||width[k]==b) flag2++;
			}
			if(flag1>=2||flag2>=2) {printf("Yes\n");break;}
		}
		if(flag1<2&&flag2<2) {
			for(j=0;j<num2;j++){
				for(k=j+1;k<num2;k++){
					if(height[j]==height[k]) {
			            for(m=0;m<num2;m++){
	                     if(m==j||m==k) continue;
			             if(height[m]==width[j]+width[k]||width[m]==width[j]+width[k]) flag3++;}
					}
					if(width[j]==width[k]) {
			            for(m=0;m<num2;m++){
			             if(m==j||m==k) continue;
			             if(height[m]==height[j]+height[k]||width[m]==height[j]+height[k]) flag3++;}
					}
					if(height[j]==width[k]) {
			            for(m=0;m<num2;m++){
			             if(m==j||m==k) continue;
			             if(height[m]==width[j]+height[k]||width[m]==width[j]+height[k]) flag3++;}
					}
					if(width[j]==height[k]) {
			            for(m=0;m<num2;m++){
			             if(m==j||m==k) continue;
			             if(height[m]==height[j]+width[k]||width[m]==height[j]+width[k]) flag3++;}
					}
				}
			}
			if(flag3>=1) printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
}