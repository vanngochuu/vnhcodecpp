/* Nhập một số nguyên dương n, tiếp theo là n số nguyên dương lần lượt là các phần tử của một dãy số, 
   hãy đếm tần số (số lần xuất hiện) của các số trong dãy và in nó ra màn hình dưới dạng sau: "a1 - t1; 
   a2 - t2; ... an - tn; ", trong đó t1 là số lần xuất hiện của số a1, t2 là số lần xuất hiện của a2, ... 
   a1, a2, .. an không trùng nhau và được sắp xếp tăng dần (xem ví dụ để rõ hơn).     
   VD: Với a = [4, 2, 2, 5, 6, 5] thì kết quả mong muốn là: "2 - 2; 4 - 1; 5 - 2; 6 - 1; ".              */
#include<iostream>
using namespace std;
int main(){
    int n, A[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];

    int Max = A[0];
    for (int i = 1; i < n; i++){
         if (A[i] > Max) Max = A[i];      // Tìm max của mảng A
    }

    int B[100] = {0}; // Tạo mảng B lưu tần suất các số trong mảng A

    for (int i = 0; i < n; i++) B[A[i]]++;  // Cập nhật tần suất số có giá trị A[i]

    for (int i = 0; i <= Max; i++){
         if (B[i] > 0) cout << i << " - " << B[i] << "; ";  // Số có tần suất > 0 (tồn tại trong A) thì mới xuất 
    }
    return 0;
}
