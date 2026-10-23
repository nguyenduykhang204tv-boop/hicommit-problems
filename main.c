#include <stdio.h>

int main() {
    int code;
    scanf("%d", &code);
    switch (code) {
        case 1:
            printf("XEP_LOAI_XUAT_SAC\n");
            break;
        case 2:
            printf("XEP_LOAI_GIOI\n");
            break;
        case 3:
            printf("XEP_LOAI_KHA\n");
            break;
        default:
            printf("KHONG_HOP_LE\n");
            break;
    }
    
    return 0;
}