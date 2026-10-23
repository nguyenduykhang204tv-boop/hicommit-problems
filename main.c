#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);
    long long total = 0;
    
    if (k <= 50) {
        total = k * 1678LL;
     } 
    else if (k <= 100) {
        total = (50 * 1678LL) + (k - 50) * 1734LL;
    } 
    else if (k <= 200) {
        total = (50 * 1678LL) + (50 * 1734LL) + (k - 100) * 2014LL;
    } 
    else if (k <= 300) {
        total = (50 * 1678LL) + (50 * 1734LL) + (100 * 2014LL) + (k - 200) * 2536LL;
    } 
    else if (k <= 400) {
        total = (50 * 1678LL) + (50 * 1734LL) + (100 * 2014LL) + (100 * 2536LL) + (k - 300) * 2834LL;
    } 
    else {
        total = (50 * 1678LL) + (50 * 1734LL) + (100 * 2014LL) + (100 * 2536LL) + (100 * 283L) + (k - 400) * 2927LL;
    }
    printf("%lld\n", total);
    
    return 0;
}