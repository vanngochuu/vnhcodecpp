/* Cho một sâu s chỉ gồm các ký tự viết thường, hãy viết hàm trả về chuỗi mã hóa của sâu này. 
   Với s = "aaabbaaac" thì encodeString(s) = "a3b2a3c1".
   Với s = "ab" thì encodeString(s) = "a1b1".
   Với s = "aaddacc" thì encodeString(s) = "a2d2a1c2".                                       */                               
#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
    getline (cin, s);
    s = s + '@';
    stack <char> st;
    string str = "";
    for (int i = 0; i < s.length(); i++){
        if (st.empty() || st.top() == s[i]){
            st.push(s[i]);
        } else {
            int count = 0;
            str += st.top();
            while (!st.empty()){
                count++;
                st.pop();
            }
            str += to_string(count);
            st.push(s[i]);
        }
    }
    cout << str;
    return 0;
}
