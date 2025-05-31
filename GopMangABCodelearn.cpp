/* Cho dãy a gồm n số nguyên, và dãy b gồm m số nguyên, cả hai dãy đều được sắp xếp không giảm.
   Hãy gộp hai dãy thành một dãy c, sao cho dãy c cũng là dãy không giảm. In dãy c ra màn hình, 
   sau mỗi phần tử có đúng một dấu cách.                                                       
   VD: Với a = [1, 3, 4] và b = [1, 2, 4, 5] thì kết quả mong muốn là: "1 1 2 3 4 4 5 ".       */
#include<iostream>
using namespace std;
int main(){
    int A[100], B[100], C[200];
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    cin >> m;
    for (int i = 0; i < m; i++) cin >> B[i];

    int size = 0; // Lưu số lượng phần tử của dãy C
    
    int i = 0, j = 0;
    while (i < n && j < m){
        if (A[i] < B[j]){
            C[size] = A[i];
            size++;
            i++;
        } else {
            C[size] = B[j];
            size++;
            j++;
        }
    }
    while (i < n){
        C[size] = A[i];
        size++;
        i++;
    }
    while (j < m){
        C[size] = B[j];
        size++;
        j++;
    }
    
    for (int i = 0; i < size; i++) cout << C[i] << " "; 
    return 0;
}
