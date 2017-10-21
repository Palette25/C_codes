#include <stdio.h>
void move(int x, int y, int k){
	printf("move disk %d from peg %d to peg %d\n",k,x,y); 
}
int hannota(int num, int one, int two, int three){
     int k=num;
    if(num==1) move(one, three, num);
    else {
    	hannota(num-1, one, three, two);
    	move(one, three, k);
    	hannota(num-1, two, one, three);
    }
}
int main() {
	int sum, num, i;
	int one=1, two=2, three=3;
	scanf("%d",&sum);
    for(i=0;i<sum;i++){
       scanf("%d",&num);
       hannota(num, one, two, three);
    }
    return 0;
}
