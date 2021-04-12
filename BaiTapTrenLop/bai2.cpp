/**
 * Khai báo kiểu dữ liệu dể biểu diễn duờng tròn.
 * Nhập duờng tròn.
 * Xuất duờng tròn theo dịnh dạng ((x,y),r).
 * Tính chu vi duờng tròn.
 * Tính diện tích duờng tròn.
 */

/**
 * Muc dich: Quan ly hinh tron
 * Nguoi tao: Nguyen Duc Anh
 * Ngay tao: 12/4/2021
 * Version: 1.0
 */
#include "iostream"
using namespace std;

class HinhTron {
    // 1. Thuoc tinh
    private:
        float x;
        float y;
        float banKinh;
        float chuVi;
        float dienTich;
    public:
    // 2. Constructor
        HinhTron() {

        }

        HinhTron(float _x, float _y, float _banKinh) {
            this -> x = _x;
            this -> y = _y;
            this -> banKinh = _banKinh;
        }

    // 3. Input, Output
        void nhap() {
            cout << "Nhap toa do x = ";
            cin >> this -> x;
            cout << "Nhap toa do y = ";
            cin >> this -> y;
            cout << "Nhap ban kinh r = ";
            cin >> this -> banKinh;
        }
        
        void xuat() {
            cout << "O((" << this -> x << ", " << this -> y << "), " << this -> banKinh << ") - Chu vi: " << this -> chuVi << " - Dien tich: " << this -> dienTich << endl;
        }

    // 4. Get, Set methods
        float getX() {
            return this -> x;
        }
        void setX(float _x) {
            this -> x = _x;
        }

        float getY() {
            return this -> y;
        }
        void setY(float _y) {
            this -> y = _y;
        }
        
        float getBanKinh() {
            return this -> banKinh;
        }
        void setBanKinh(float _banKinh) {
            this -> banKinh = _banKinh;
        }

        float getChuVi() {
            return this -> chuVi;
        }
        float getDienTich() { 
            return this -> dienTich;
        }
    // 5. Business methods
        void tinhChuVi() {
            this -> chuVi = 3.14f * 2 * this -> banKinh;
        }

        void tinhDienTich() {
            this -> dienTich = 3.14f * this -> banKinh * this -> banKinh;
        }
};

int main() {
    HinhTron cir = HinhTron();
    cir.nhap();
    cir.tinhChuVi();
    cir.tinhDienTich();
    cir.xuat();
    return 0;
}