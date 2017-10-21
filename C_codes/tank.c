#include <stdio.h>

extern int error_flag;
int capacity;

int pour_in(int volume){
	error_flag=0;
	if(volume > capacity) {
		error_flag=1;
		return capacity;
	}
	else return volume;
}

int let_out(int volume){
	error_flag=0;
    if(volume > capacity) return capacity;
    else return volume;
}

int main(void) {
      int n, operation, volume, result = 0;
      /*for operation, 1 means pour_in and 0 means let_out*/
      scanf("%d%d", &capacity, &n);
      while (n--) {
        scanf("%d%d", &operation, &volume);
        result = operation ? pour_in(volume) : let_out(volume);
        printf("%d %d\n", result, error_flag);
      }
      return 0;
    }