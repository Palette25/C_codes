#include <stdio.h>
#define MAX_TOTAL 10
#define MAX_SIZE 4
void inputMatrices(int **p, int size){
     int i, j;
     for(i=0;i<size;i++){
     	for(j=0;j<size;j++)
          scanf("%d", &p[i][j]);
}
}
int main() {
  size_t total = 0, size = 0, matrixIndex = 0;
  scanf("%zu %zu", &total, &size);
  int matrixArr[9][9][9];
  for (matrixIndex = 0; matrixIndex < total; ++matrixIndex) {
  	printf("1\n");
    inputMatrices(matrixArr[matrixIndex], size);
  }
  return 0;
}
