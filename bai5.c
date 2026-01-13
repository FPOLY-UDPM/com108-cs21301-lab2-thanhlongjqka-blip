/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Long]
 * MSSV:      [PS49311]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

#include <stdio.h>

int main(){
    float so1, so2;
    float tich, thuong;
    printf("so1: ");
    scanf("%f", &so1);
    printf("so2: ");
    scanf("%f", &so2);
    tich = so1 * so2;
    thuong = so1/so2;


    printf("Tích la: %.2f\n", tich);
    printf("Thương la: %.2f\n", thuong);



    return 0;
} 