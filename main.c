#include <stdio.h>

int main() 
{
    int t;
    
    if (scanf("%d", &t) == 1) {
        if (t <= 15) {
            printf("LANH\n");
        } else if (t < 25) { // Đã chắc chắn t > 15
            printf("MAT\n");
        } else if (t < 35) { // Đã chắc chắn t >= 25
            printf("NONG\n");
        } else { // Trường hợp t >= 35
            printf("RAT_NONG\n");
        }
    }
    
    return 0;
}