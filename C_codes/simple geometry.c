#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main() {
   double num;
   scanf("%lf",&num);
   printf("%.3f %.3f ",sqrt(num),sqrt(num/PI));
   double rad=2*sqrt(num)*sqrt(num);
   printf("%.3f\n",PI*sqrt(rad)*sqrt(rad)/4);
   return 0;
}