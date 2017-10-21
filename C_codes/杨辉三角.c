#include <stdio.h>
int main() {
  int arr[100][100],Row,row,col,key;
  scanf("%d",&Row);
  int plus=Row;
  for(row=0;row<Row;row++,plus--){
  for(key=1;key<plus;key++){
    printf(" ");
}
  for(col=0;col<=row;col++){
    if(col==0||row==0||row==col) arr[row][col]=1;
    else arr[row][col]=arr[row-1][col-1]+arr[row-1][col];
    if(col!=row) printf("%d ",arr[row][col]);
    if(col==row) printf("%d",arr[row][col]);
}
    printf("\n");
}
	return 0;
}