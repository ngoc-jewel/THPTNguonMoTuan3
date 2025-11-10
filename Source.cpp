#include <iostream>
using namespace std;

int tong(int a, int b) {
    return a + b;
}

int hieu(int a, int b) {
    return a - b;
}

int tich(int a, int b) {
    return a * b;
}

float thuong(int a, int b) {
    if (b == 0) {
        cout << "Khong the chia cho 0!" << endl;
        return 0;
    }
    return (float)a / b;
}

int main() {
    int x, y;
    cout << "Nhap hai so: ";
    cin >> x >> y;

    cout << "Tong = " << tong(x, y) << endl;
    cout << "Hieu = " << hieu(x, y) << endl;
    cout << "Tich = " << tich(x, y) << endl;
    cout << "Thuong = " << thuong(x, y) << endl;

    system("pause");
    return 0;
}
