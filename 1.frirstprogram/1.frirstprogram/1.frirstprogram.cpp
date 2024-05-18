

#include <iostream>

using namespace std;


int main()
{
    const int a = 10; // Khởi tạo hằng số a với giá trị KHÔNG ĐỔI bằng 10, giá trị của hằng số k thay đổi
    int b, c;
    cout << "Nhap gia tri cua b: ";
    cin >> b;
    cout << "Nhap gia tri cua c: ";
    cin >> c;
    cout << "Ket qua a + b + c = " << a + b + c;
    cout << endl;
    system("pause");
}

