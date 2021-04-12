/**Rút gọn phân số.
Kiểm tra phân số tối giản
Qui dồng hai phân số.
So sánh hai phân số (Hàm sẽ trả về một trong 3 giá trị 0, -1, 1).
Ðịnh nghia toán tử cộng (operator +) cho hai phân số.
Ðịnh nghia toán tử hiệu (operator -) cho hai phân số.
 */

/**
 * Muc dich: Quan ly phan so
 * Nguoi toa: Nguyen Duc Anh
 * Ngay tao: 12/4/2021
 * Version: 1.0
 */

#include "iostream"
#include "cmath"
using namespace std;

int ucln(int a, int b)
{
    // Neu a = 0 => ucln(a,b) = b
    // Neu b = 0 => ucln(a,b) = a
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a -= b; // a = a - b
        }
        else
        {
            b -= a;
        }
    }
    return a; // return a or b, vi luc nay a == b
}

class PhanSo
{
    // 1. Thuoc tinh
private:
    int x;
    int y;

public:
    // 2. Constructor
    PhanSo()
    {
    }
    PhanSo(int _x, int _y)
    {
        this->x = _x;
        this->y = _y;
    }

    // 3. Get, Set methods
    int getX()
    {
        return this->x;
    }
    void setX(int _x)
    {
        this->x = _x;
    }

    int getY()
    {
        return this->y;
    }
    void setY(int _y)
    {
        this->y = _y;
    }

    // 4. Input, Output methods
    void nhap()
    {
        cout << "Nhap tu so x = ";
        cin >> this->x;
        cout << "Nhap mau so y = ";
        cin >> this->y;
    }
    void xuat()
    {
        cout << "Phan so: " << this->x << "/" << this->y << endl;
    }
    bool kiemTraPS()
    {
        int gcd = ucln(this->x, this->y);
        if (gcd != 1)
            return false;
        else
            return true;
    }

    // 5. Business methods
    PhanSo operator + (PhanSo a)
    {
        PhanSo c;
        c.y = x*a.getY() + y*a.getX();
        c.x = y*a.getY();
        return c;
    }
    
    //define toan tu -
    PhanSo operator - (PhanSo a)
    {
        PhanSo c;
        c.x = x*a.getY() - y*a.getX();
        c.y = y*a.getY();
        return c;
    }

};
bool kiemTraPS(PhanSo a)
{
    int gcd = ucln(a.getX(), a.getY());
    if (gcd != 1)
        return false;
    else
        return true;
}
int tinhHieu(PhanSo a, PhanSo b)
{
    PhanSo hieu;
    int x = a.getX() * b.getY() - b.getX() * a.getY();
    hieu.setX(x);
    int y = a.getY() * b.getY();
    hieu.setY(y);
    float t = (float)hieu.getX() / hieu.getY();
    if(t > 0) return 1;
    else if(t == 0) return 0;
    else return -1;
}

void quiDong(PhanSo a, PhanSo b) {
    PhanSo a_;
    PhanSo b_;
    int x;
    x = a.getX() * b.getY();
    a_.setX(x);
    int y;
    y = a.getY() * b.getY();
    a_.setY(y);
    cout << a.getX() << "/" << a.getY() << " = " << a_.getX() << "/" << a_.getY() << endl;
    x = b.getX() * a.getY();
    b_.setX(x);
    y = a.getY() * b.getY(); 
    b_.setY(y);
    cout << b.getX() << "/" << b.getY() << " = " << b_.getX() << "/" << b_.getY() << endl;
}

int main()
{
    PhanSo a = PhanSo();
    PhanSo b = PhanSo();
    a.nhap();
    b.nhap();
    a.xuat();
    b.xuat();
    quiDong(a, b);
    int x = tinhHieu(a, b);
    cout << "ket qua so sanh: " << x << endl; 
    if (a.kiemTraPS())
        cout << "phan so " << a.getX() << "/" << a.getY() << " toi gian" << endl;
    else
        cout << "phan so " << a.getX() << "/" << a.getY() << " khong toi gian" << endl;
    if (b.kiemTraPS())
        cout << "phan so " << b.getX() << "/" << b.getY() << " toi gian" << endl;
    else
        cout << "phan so " << b.getX() << "/" << b.getY() << " khong toi gian" << endl;
    PhanSo c = a + b;
    cout << "Tong phan so a va b la ";
    c.xuat();
    return 0;
}