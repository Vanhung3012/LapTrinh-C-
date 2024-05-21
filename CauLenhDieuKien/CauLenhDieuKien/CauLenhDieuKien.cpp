
#include <iostream>
using namespace std;

int main()
{

    // Câu lệnh If - else
    float a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    if (a == 0)
    {
        if (b == 0) {
            cout << "Phuong trinh vo so nghiem";
        }
        else
        {
            cout << "PT vo nghiem!";
        }  
    }
    if (a != 0) {
        cout << "PT co mot nghiem la: " << (float) - b / a; // ép kiểu
    }
    return 0;
    // Giải PT bậc nhất ax + b = 0
    /*
     TH1: a = 0:
            +b = 0
            ==)) PT vô số nghiệm
            + b khác 0
            ==)) PT vô nghiệm
    TH2: a khác 0
        PT luôn có nghiệm -b/a

    */
}

