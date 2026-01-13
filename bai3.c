/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Long]
 * MSSV:      [PS49311]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main()
{
    float r, chuvi, dientich;
    float PI = 3.14;
    printf("Ban kinh hinh tron: ");
    scanf("%f", &r);
    chuvi = 2 * PI * r;
    dientich = PI * r * r;
    printf("chu vi hinh tron: %.2f\n", chuvi);
    printf("dien tich hinh tron: %.2f\n", dientich);
    return 0;

    // Khai báo biến

    // Nhập dữ liệu


    // Xử lý, tính toán

    // Hiển thị kết quả


}