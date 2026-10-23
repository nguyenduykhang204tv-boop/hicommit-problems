#include <stdio.h>

int main() {
    float a,w,h;
    scanf("%f %f", &w,&h);
    a = w/((h/100)*(h/100));
        if (a < 18.5) {
            printf("UNDERWEIGHT\n");
        } 
        else if (a < 25.0) {
            printf("NORMAL\n");
        } 
        else if (a < 30.0) {
            printf("OVERWEIGHT\n");
        } 
        else {
            printf("OBESE\n");
        }
    }
    
    return 0;
}