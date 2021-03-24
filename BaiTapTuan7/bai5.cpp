/* Đảo xâu. Viết một hàm reverse(char a[]) với nhiệm vụ đảo ngược thứ tự của a).
Xóa kí tự. Viết hàm delete_char(char a[], char c) với nhiệm vụ xóa hết các kí tự c trong xâu a.
Độn phải. Viết hàm pad_right(char a[], int n) với nhiệm vụ độn thêm các kí tự space vào cuối xâu a để a có độ dài bằng n. Nếu a đã dài quá n thì không phải làm gì cả.
Độn trái. Viết hàm pad_left(char a[], int n) với nhiệm vụ độn thêm các kí tự space vào đầu xâu a để a có độ dài bằng n. Nếu a đã dài quá n thì không phải làm gì cả.
Cắt xâu. Viết hàm truncate(char a[], int n) với nhiệm vụ cắt bớt đoạn cuối của xâu a để a có độ dài n nếu như a đang dài quá n kí tự
Đối gương. Viết hàm bool is_palindrome(char a[]) với nhiệm vụ kiểm tra xem xâu a có đối xứng hay không. Trả về true nếu đối xứng, false nếu không.
Lọc trái. Viết hàm trim_left(char a[]) với nhiệm vụ xóa các kí tự trắng đứng ở đầu xâu a, nếu có.
Lọc phải. Viết hàm trim_right(char a[]) với nhiệm vụ xóa các kí tự trắng đứng ở cuối xâu a, nếu có. */

#include "iostream"
using namespace std;

int main() {
    int n;
    cin >> n;
    char a[1000];
    
    
}

void swap(char a, char b) {
    a += b;
    b = a - b;
    a -= b;
}

int strlen(char a[]) {
    int count = 0;
    while(a[i] != ' ') {
        count++;
    }
    return count;
}

void reverse(char a[]) {
    int len = strlen(a);
    for(int i = 0; i < len / 2; ++i) {
        swap(a[i], a[n - i - 1]);
    }
}