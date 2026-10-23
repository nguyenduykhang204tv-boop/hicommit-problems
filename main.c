#include <stdio.h>

int main() {
    float dtb;
    scanf("%f", &dtb);
    if (dtb >= 9.0) {
        printf("A\n");
    } 
    else if (dtb >= 8.0) {
        printf("B+\n");
    } 
    else if (dtb >= 7.0) {
        printf("B\n");
    } 
    else if (dtb >= 5.0) {
        printf("D+\n");
    } 
    else if (dtb >= 4.0) {
        printf("D\n");
    } 
    else {
        printf("F\n");
    }
    
    return 0;
}