#include <stdio.h>

int main() {
    float a,w,h;
    scanf("%f %f", &w,&h);
    a = w/((h/100)*(h/100));
        if (a < 18.5) {
            printf("UNDERWEIGHT\n");
          return 0;
        } 
        else if (a < 25.0) {
            printf("NORMAL\n");
          return 0;
        } 
        else if (a < 30.0) {
            printf("OVERWEIGHT\n");
          return 0;
        } 
        else {
            printf("OBESE\n");
          return 0;
        }
  