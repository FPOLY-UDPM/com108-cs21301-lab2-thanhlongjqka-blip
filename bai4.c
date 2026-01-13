/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Long]
 * MSSV:      [PS49311]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main(){
    // Khai báo biến
float Toán, Lý, Hóa;
float diemtrungbinh;
printf("Nhập điểm toán: ");
scanf("%f", &Toán);
printf("Nhập điểm lý: ");
scanf("%f", &Lý);
printf("Nhập điểm Hóa: ");
scanf("%f", &Hóa);
diemtrungbinh = (Toán * 3 + Lý * 2 + Hóa *1)/6;
printf("Điểm trung binh: %.2f\n", diemtrungbinh);
return 0;
    // Nhập dữ liệu


    // Xử lý, tính toán

    // Hiển thị kết quả


}