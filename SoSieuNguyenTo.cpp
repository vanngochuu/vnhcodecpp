/* Cho một số n, hãy đưa số dãy số siêu nguyên tố nhỏ hơn hoặc bằng n, các số đã được sắp xếp tăng dần.
   Số siêu nguyên tố là số:
   - Bản thân nó là số nguyên tố.
   - Khi xóa đi lần lượt các chữ số sau cùng của nó, thì số mới vẫn là số nguyên tố.
   Ví dụ 2393 là số siêu nguyên tố vì 2393, 239, 23, 2 là số nguyên tố.
   VD: Với n = 30 thì superPrimeNumber(n) = [2, 3, 5, 7, 23, 29]; 
      Vì các số 2, 3, 5, 7, 23 và 29 đều là số siêu nguyên tố và nhỏ hơn hoặc bằng 30.                 */
#include<iostream>
#include<queue>
#include<cmath>
using namespace std;

bool isPrime(int n){                              // Hàm kiểm tra n có phải là số nguyên tố
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    queue <int> q;
    int n;
    cin >> n;

    for (int i = 2; i <= n, i < 10; i++){         // Đưa các số nhỏ hơn hoặc bằng n từ 2 đến 9 vào hàng đợi q
        if (isPrime(i)) q.push(i);
    }

    while (!q.empty()){ 
        for (int i = 1; i <= 9; i++){             
            int k = q.front() * 10 + i;           // Thêm 1 chữ số vào sau số đầu tiên trong hàng đợi 
            if (k <= n && isPrime(k)) q.push(k);  // Kiểm tra số vừa tạo có thỏa mãn không, nếu thỏa sẽ thêm vào hàng đợi q 
        }
        cout << q.front() << " ";                 // Xuất số đầu của hàng đợi
        q.pop();                                  // Loại bỏ số đầu của hàng đợi
    }

    return 0;
}
